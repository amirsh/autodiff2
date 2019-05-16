#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba(array_number_t cam, array_number_t xs, index_t n) {
  number_t x1485 = (cam->arr[0]);
  number_t x1486 = (cam->arr[1]);
  number_t x1487 = (cam->arr[2]);
  number_t x1488 = (x1485) * (x1485);
  number_t x1489 = (x1486) * (x1486);
  number_t x1490 = (x1488) + (x1489);
  number_t x1491 = (x1487) * (x1487);
  number_t x1492 = (x1490) + (x1491);
  number_t x1493 = sqrt(x1492);
  number_t x1494 = (1) / (x1493);
  number_t x1495 = (x1486) * (x1494);
  number_t x1496 = (x1487) * (x1494);
  number_t x1497 = (x1485) * (x1494);
  number_t x1498 = cos(x1493);
  number_t x1499 = (1) - (x1498);
  number_t x1500 = (cam->arr[9]);
  number_t x1501 = (cam->arr[10]);
  number_t x1502 = (cam->arr[6]);
  number_t x1503 = sin(x1493);
  index_t x1504 = (cam)->length;
  number_t x1522 = (x1494) * (0.5);
  number_t x1525 = (x1493) * (x1493);
  number_t x1536 = -(x1503);
  number_t x1542 = (cam->arr[5]);
  number_t x1549 = (cam->arr[4]);
  number_t x1555 = (cam->arr[3]);
  array_array_array_number_t x1745 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x1745->length=x1504;x1745->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x1504);
  for(int i = 0; i < x1745->length; i++){
    index_t x1505 = (i) == (0);
    index_t x1506;
    if (x1505) {
      x1506 = 1;
    } else {
      x1506 = 0;
    }
    index_t x1507 = (i) == (1);
    index_t x1508;
    if (x1507) {
      x1508 = 1;
    } else {
      x1508 = 0;
    }
    index_t x1509 = (i) == (2);
    index_t x1510;
    if (x1509) {
      x1510 = 1;
    } else {
      x1510 = 0;
    }
    number_t x1511 = (x1506) * (x1485);
    number_t x1512 = (x1485) * (x1506);
    number_t x1513 = (x1511) + (x1512);
    number_t x1514 = (x1508) * (x1486);
    number_t x1515 = (x1486) * (x1508);
    number_t x1516 = (x1514) + (x1515);
    number_t x1517 = (x1513) + (x1516);
    number_t x1518 = (x1510) * (x1487);
    number_t x1519 = (x1487) * (x1510);
    number_t x1520 = (x1518) + (x1519);
    number_t x1521 = (x1517) + (x1520);
    number_t x1523 = (x1521) * (x1522);
    number_t x1524 = -(x1523);
    number_t x1526 = (x1524) / (x1525);
    number_t x1527 = (x1508) * (x1494);
    number_t x1528 = (x1486) * (x1526);
    number_t x1529 = (x1527) + (x1528);
    number_t x1530 = (x1510) * (x1494);
    number_t x1531 = (x1487) * (x1526);
    number_t x1532 = (x1530) + (x1531);
    number_t x1533 = (x1506) * (x1494);
    number_t x1534 = (x1485) * (x1526);
    number_t x1535 = (x1533) + (x1534);
    number_t x1537 = (x1523) * (x1536);
    index_t x1544 = (i) == (5);
    index_t x1545;
    if (x1544) {
      x1545 = 1;
    } else {
      x1545 = 0;
    }
    index_t x1546 = -(x1545);
    index_t x1551 = (i) == (4);
    index_t x1552;
    if (x1551) {
      x1552 = 1;
    } else {
      x1552 = 0;
    }
    index_t x1553 = -(x1552);
    index_t x1557 = (i) == (3);
    index_t x1558;
    if (x1557) {
      x1558 = 1;
    } else {
      x1558 = 0;
    }
    index_t x1559 = -(x1558);
    index_t x1700 = (i) == (9);
    index_t x1701;
    if (x1700) {
      x1701 = 1;
    } else {
      x1701 = 0;
    }
    number_t x1575 = (x1495) * (x1546);
    index_t x1705 = (i) == (10);
    number_t x1578 = (x1496) * (x1553);
    index_t x1739 = (i) == (6);
    number_t x1586 = (x1496) * (x1559);
    number_t x1589 = (x1497) * (x1546);
    number_t x1597 = (x1497) * (x1553);
    number_t x1600 = (x1495) * (x1559);
    number_t x1622 = (x1523) * (x1498);
    number_t x1633 = (x1497) * (x1559);
    number_t x1636 = (x1495) * (x1553);
    number_t x1640 = (x1496) * (x1546);
    number_t x1644 = -(x1537);
    array_array_number_t x1744 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x1744->length=n;x1744->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x1744->length; i0++){
      index_t x1538 = (3) * (i0);
      index_t x1539 = (11) + (x1538);
      index_t x1540 = (2) + (x1539);
      number_t x1541 = (xs->arr[x1540]);
      number_t x1543 = (x1541) - (x1542);
      index_t x1547 = (1) + (x1539);
      number_t x1548 = (xs->arr[x1547]);
      number_t x1550 = (x1548) - (x1549);
      number_t x1554 = (xs->arr[x1539]);
      number_t x1556 = (x1554) - (x1555);
      number_t x1560 = (x1497) * (x1556);
      number_t x1561 = (x1495) * (x1550);
      number_t x1562 = (x1560) + (x1561);
      number_t x1563 = (x1496) * (x1543);
      number_t x1564 = (x1562) + (x1563);
      number_t x1565 = (x1564) * (x1499);
      number_t x1571 = (x1495) * (x1543);
      number_t x1572 = (x1496) * (x1550);
      number_t x1573 = (x1571) - (x1572);
      number_t x1574 = (x1529) * (x1543);
      number_t x1576 = (x1574) + (x1575);
      number_t x1577 = (x1532) * (x1550);
      number_t x1579 = (x1577) + (x1578);
      number_t x1580 = (x1576) - (x1579);
      tuple_number_t_number_t x1581 = (tuple_number_t_number_t){._1=x1573, ._2=x1580};
      number_t x1582 = (x1496) * (x1556);
      number_t x1583 = (x1497) * (x1543);
      number_t x1584 = (x1582) - (x1583);
      number_t x1585 = (x1532) * (x1556);
      number_t x1587 = (x1585) + (x1586);
      number_t x1588 = (x1535) * (x1543);
      number_t x1590 = (x1588) + (x1589);
      number_t x1591 = (x1587) - (x1590);
      tuple_number_t_number_t x1592 = (tuple_number_t_number_t){._1=x1584, ._2=x1591};
      number_t x1593 = (x1497) * (x1550);
      number_t x1594 = (x1495) * (x1556);
      number_t x1595 = (x1593) - (x1594);
      number_t x1596 = (x1535) * (x1550);
      number_t x1598 = (x1596) + (x1597);
      number_t x1599 = (x1529) * (x1556);
      number_t x1601 = (x1599) + (x1600);
      number_t x1602 = (x1598) - (x1601);
      tuple_number_t_number_t x1603 = (tuple_number_t_number_t){._1=x1595, ._2=x1602};
      array_tuple_number_t_number_t x1604 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1604->length=3;x1604->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x1604->arr[0] = x1581;
      x1604->arr[1] = x1592;
      x1604->arr[2] = x1603;
      number_t x1632 = (x1535) * (x1556);
      number_t x1634 = (x1632) + (x1633);
      number_t x1635 = (x1529) * (x1550);
      number_t x1637 = (x1635) + (x1636);
      number_t x1638 = (x1634) + (x1637);
      number_t x1639 = (x1532) * (x1543);
      number_t x1641 = (x1639) + (x1640);
      number_t x1642 = (x1638) + (x1641);
      number_t x1643 = (x1642) * (x1499);
      number_t x1645 = (x1564) * (x1644);
      number_t x1646 = (x1643) + (x1645);
      array_tuple_number_t_number_t x1651 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1651->length=3;x1651->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x376 = 0; x376 < x1651->length; x376++){
        index_t x1566 = (x376) + (3);
        index_t x1567 = (x376) + (x1539);
        number_t x1568 = (xs->arr[x1567]);
        number_t x1569 = (cam->arr[x1566]);
        number_t x1570 = (x1568) - (x1569);
        tuple_number_t_number_t x1605 = (x1604->arr[x376]);
        number_t x1606 = (x1605)._1;
        number_t x1607 = (cam->arr[x376]);
        number_t x1608 = (x1607) * (x1494);
        number_t x1609 = (x1570) * (x1498);
        number_t x1610 = (x1606) * (x1503);
        number_t x1611 = (x1609) + (x1610);
        number_t x1612 = (x1608) * (x1565);
        number_t x1613 = (x1611) + (x1612);
        index_t x1614 = (i) == (x1566);
        index_t x1615;
        if (x1614) {
          x1615 = 1;
        } else {
          x1615 = 0;
        }
        index_t x1616 = -(x1615);
        number_t x1617 = (x1616) * (x1498);
        number_t x1618 = (x1570) * (x1537);
        number_t x1619 = (x1617) + (x1618);
        number_t x1620 = (x1605)._2;
        number_t x1621 = (x1620) * (x1503);
        number_t x1623 = (x1606) * (x1622);
        number_t x1624 = (x1621) + (x1623);
        number_t x1625 = (x1619) + (x1624);
        index_t x1626 = (i) == (x376);
        index_t x1627;
        if (x1626) {
          x1627 = 1;
        } else {
          x1627 = 0;
        }
        number_t x1628 = (x1627) * (x1494);
        number_t x1629 = (x1607) * (x1526);
        number_t x1630 = (x1628) + (x1629);
        number_t x1631 = (x1630) * (x1565);
        number_t x1647 = (x1608) * (x1646);
        number_t x1648 = (x1631) + (x1647);
        number_t x1649 = (x1625) + (x1648);
        tuple_number_t_number_t x1650 = (tuple_number_t_number_t){._1=x1613, ._2=x1649};
        x1651->arr[x376] = x1650;
        
      }
      array_tuple_number_t_number_t x1652 = x1651;
      tuple_number_t_number_t x1653 = (x1652->arr[2]);
      number_t x1654 = (x1653)._1;
      tuple_number_t_number_t x1655 = (x1652->arr[0]);
      number_t x1656 = (x1655)._1;
      number_t x1657 = (1) / (x1654);
      number_t x1658 = (x1653)._2;
      number_t x1659 = -(x1658);
      number_t x1660 = (x1654) * (x1654);
      number_t x1661 = (x1659) / (x1660);
      number_t x1662 = (x1656) * (x1657);
      number_t x1663 = (x1655)._2;
      number_t x1664 = (x1663) * (x1657);
      number_t x1665 = (x1656) * (x1661);
      number_t x1666 = (x1664) + (x1665);
      tuple_number_t_number_t x1667 = (x1652->arr[1]);
      number_t x1668 = (x1667)._1;
      number_t x1669 = (x1668) * (x1657);
      number_t x1670 = (x1667)._2;
      number_t x1671 = (x1670) * (x1657);
      number_t x1672 = (x1668) * (x1661);
      number_t x1673 = (x1671) + (x1672);
      number_t x1674 = (x1662) * (x1662);
      number_t x1675 = (x1669) * (x1669);
      number_t x1676 = (x1674) + (x1675);
      number_t x1677 = (x1666) * (x1662);
      number_t x1678 = (x1662) * (x1666);
      number_t x1679 = (x1677) + (x1678);
      number_t x1680 = (x1673) * (x1669);
      number_t x1681 = (x1669) * (x1673);
      number_t x1682 = (x1680) + (x1681);
      number_t x1683 = (x1679) + (x1682);
      number_t x1684 = (x1501) * (x1676);
      number_t x1685 = (x1500) * (x1676);
      number_t x1686 = (1) + (x1685);
      number_t x1687 = (x1684) * (x1676);
      number_t x1688 = (x1686) + (x1687);
      number_t x1702 = (x1701) * (x1676);
      number_t x1703 = (x1500) * (x1683);
      number_t x1704 = (x1702) + (x1703);
      number_t x1715 = (x1501) * (x1683);
      array_tuple_number_t_number_t x1724 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1724->length=2;x1724->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x98 = 0; x98 < x1724->length; x98++){
        tuple_number_t_number_t x1691 = (x1652->arr[x98]);
        number_t x1692 = (x1691)._1;
        number_t x1693 = (x1692) * (x1657);
        number_t x1694 = (x1693) * (x1688);
        number_t x1695 = (x1691)._2;
        number_t x1696 = (x1695) * (x1657);
        number_t x1697 = (x1692) * (x1661);
        number_t x1698 = (x1696) + (x1697);
        number_t x1699 = (x1698) * (x1688);
        tuple_number_t_number_t x1723;
        if (x1705) {
          number_t x1707 = (x1676) + (x1715);
          number_t x1708 = (x1707) * (x1676);
          number_t x1709 = (x1684) * (x1683);
          number_t x1710 = (x1708) + (x1709);
          number_t x1711 = (x1704) + (x1710);
          number_t x1712 = (x1693) * (x1711);
          number_t x1713 = (x1699) + (x1712);
          tuple_number_t_number_t x1714 = (tuple_number_t_number_t){._1=x1694, ._2=x1713};
          x1723 = x1714;
        } else {
          number_t x1716 = (x1715) * (x1676);
          number_t x1717 = (x1684) * (x1683);
          number_t x1718 = (x1716) + (x1717);
          number_t x1719 = (x1704) + (x1718);
          number_t x1720 = (x1693) * (x1719);
          number_t x1721 = (x1699) + (x1720);
          tuple_number_t_number_t x1722 = (tuple_number_t_number_t){._1=x1694, ._2=x1721};
          x1723 = x1722;
        }
        x1724->arr[x98] = x1723;
        
      }
      array_tuple_number_t_number_t x1725 = x1724;
      array_number_t x1743 = (array_number_t)storage_alloc(sizeof(int) * 2);x1743->length=2;x1743->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
      for(int i00 = 0; i00 < x1743->length; i00++){
        tuple_number_t_number_t x1726 = (x1725->arr[i00]);
        number_t x1727 = (x1726)._1;
        index_t x1728 = (i00) + (7);
        index_t x1729 = (i) == (x1728);
        number_t x1737 = (x1726)._2;
        number_t x1738 = (x1737) * (x1502);
        number_t x1742;
        if (x1729) {
          number_t x1736;
          if (x1739) {
            number_t x1733 = (x1738) + (x1727);
            number_t x1734 = (1) + (x1733);
            x1736 = x1734;
          } else {
            number_t x1735 = (1) + (x1738);
            x1736 = x1735;
          }
          x1742 = x1736;
        } else {
          number_t x1741;
          if (x1739) {
            number_t x1740 = (x1738) + (x1727);
            x1741 = x1740;
          } else {
            x1741 = x1738;
          }
          x1742 = x1741;
        }
        x1743->arr[i00] = x1742;
        
      }
      x1744->arr[i0] = x1743;
      
    }
    x1745->arr[i] = x1744;
    
  }
  return x1745;
}
