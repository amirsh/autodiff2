import scala.io.Source

object ExtractCSV {
  val GMM_BENCH = "GMM"
  val MICRO_BENCH = "MICRO"
  val NMF_BENCH = "NMF"
  // val bench = GMM_BENCH
  var bench = MICRO_BENCH
  // val bench = NMF_BENCH
  val TIME = "time per call = "
  var currentType: String = _
  var currentMet: String = _
  def parseGMMType(s: String): (Int, Int) = {
    val D = "_d"
    val K = "_K"
    val ki = s.indexOf(K)
    val di = s.indexOf(D)
    val d = s.substring(di + D.length, ki).toInt
    val k = s.substring(ki + K.length).toInt
    d -> k
  }
  def orderType(s: String): Int = bench match {
    case GMM_BENCH =>
      val (d, k) = parseGMMType(s)
      val icf_sz = d*(d + 1) / 2
      k + d*k + icf_sz*k
    case MICRO_BENCH => s.toInt
    case NMF_BENCH => 
      val (m, n) = {
        // val spaceIndex = s.indexOf(" ")
        // s.substring(0, spaceIndex).toInt -> s.substring(spaceIndex + 1).toInt
        val dim = s.toInt
        (dim / 10000) -> (dim % 10000)
      }
      m * 100 * 1000 + n
  }
  def nameType(s: String): Int = bench match {
    case NMF_BENCH =>
      val (m, n) = {
        val dim = s.toInt
        (dim / 10000) -> (dim % 10000)
      }
      if(n == 100)
        m
      else
        n
    case _ =>
      orderType(s)
  }
  def main(args: Array[String]): Unit = {
    val FILE = args(0)
    val lines = Source.fromFile(FILE).getLines.toList
    if(FILE.contains("nmf"))
      bench = NMF_BENCH
    
    def isTime(s: String) = s.contains(TIME)
    def isExe(s: String) = s.contains(".exe") || s.contains("python")
    val data = scala.collection.mutable.HashMap[String, List[(String, Double)]]()
    def extractTime(s: String) = s.substring(s.indexOf(TIME) + TIME.length).dropRight(2).toDouble
    for(i <- lines) { 
      if(isTime(i)) 
        data(currentType) = data(currentType) :+ (currentMet -> extractTime(i)) 
      else if (isExe(i)) 
        currentMet = i 
      else {
        data(i) = Nil 
        currentType = i 
      }
    }
    val dataSeq = data.toSeq.sortBy(x => orderType(x._1))
    val cols = dataSeq(0)._2.map(_._1)
    val rows = dataSeq.map(x => nameType(x._1) :: cols.map(c => x._2.toMap.getOrElse(c, "")))
    println("," + cols.mkString(","))
    println(rows.map(_.mkString(",")).mkString("\n"))
  }
}
