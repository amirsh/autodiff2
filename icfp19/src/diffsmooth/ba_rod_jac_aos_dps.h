#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba_rod_jac_dps(storage_t st, array_number_t xs, index_t n) {
  number_t x1353 = (xs->arr[0]);
  number_t x1355 = (x1353) * (x1353);
  number_t x1356 = (xs->arr[1]);
  number_t x1358 = (x1356) * (x1356);
  number_t x1359 = (xs->arr[2]);
  number_t x1361 = (x1355) + (x1358);
  number_t x1362 = (x1359) * (x1359);
  number_t x1363 = (x1361) + (x1362);
  number_t x1364 = sqrt(x1363);
  number_t x1366 = (1) / (x1364);
  number_t x1367 = (x1356) * (x1366);
  number_t x1370 = (x1359) * (x1366);
  number_t x1376 = (x1353) * (x1366);
  number_t x1392 = cos(x1364);
  number_t x1393 = (1) - (x1392);
  number_t x1395 = sin(x1364);
  index_t x1397 = (xs)->length;
  number_t x1422 = (x1366) * (0.5);
  number_t x1427 = (x1364) * (x1364);
  number_t x1501 = -(x1395);
  array_array_array_number_t x1652 = (array_array_array_number_t)st;
  for(int i = 0; i < x1652->length; i++){
    index_t x1398 = (i) == (0);
    index_t x1399;
    if (x1398) {
      x1399 = 1;
    } else {
      x1399 = 0;
    }
    number_t x1402 = (x1399) * (x1353);
    number_t x1403 = (x1353) * (x1399);
    number_t x1404 = (x1402) + (x1403);
    index_t x1405 = (i) == (1);
    index_t x1406;
    if (x1405) {
      x1406 = 1;
    } else {
      x1406 = 0;
    }
    number_t x1409 = (x1406) * (x1356);
    number_t x1410 = (x1356) * (x1406);
    number_t x1411 = (x1409) + (x1410);
    index_t x1412 = (i) == (2);
    index_t x1413;
    if (x1412) {
      x1413 = 1;
    } else {
      x1413 = 0;
    }
    number_t x1416 = (x1404) + (x1411);
    number_t x1417 = (x1413) * (x1359);
    number_t x1418 = (x1359) * (x1413);
    number_t x1419 = (x1417) + (x1418);
    number_t x1420 = (x1416) + (x1419);
    number_t x1423 = (x1420) * (x1422);
    number_t x1426 = -(x1423);
    number_t x1428 = (x1426) / (x1427);
    number_t x1429 = (x1406) * (x1366);
    number_t x1430 = (x1356) * (x1428);
    number_t x1431 = (x1429) + (x1430);
    number_t x1437 = (x1413) * (x1366);
    number_t x1438 = (x1359) * (x1428);
    number_t x1439 = (x1437) + (x1438);
    number_t x1453 = (x1399) * (x1366);
    number_t x1454 = (x1353) * (x1428);
    number_t x1455 = (x1453) + (x1454);
    number_t x1502 = (x1423) * (x1501);
    number_t x1503 = -(x1502);
    number_t x1516 = (x1423) * (x1392);
    array_array_number_t x1651 = x1652->arr[i];
    for(int i0 = 0; i0 < x1651->length; i0++){
      index_t x1520 = (3) * (i0);
      index_t x1521 = (11) + (x1520);
      index_t x1522 = (2) + (x1521);
      number_t x1523 = (xs->arr[x1522]);
      index_t x1524 = (i) == (x1522);
      index_t x1525;
      if (x1524) {
        x1525 = 1;
      } else {
        x1525 = 0;
      }
      index_t x1527 = (1) + (x1521);
      number_t x1528 = (xs->arr[x1527]);
      index_t x1529 = (i) == (x1527);
      index_t x1530;
      if (x1529) {
        x1530 = 1;
      } else {
        x1530 = 0;
      }
      number_t x1531 = (x1367) * (x1523);
      number_t x1532 = (x1431) * (x1523);
      number_t x1533 = (x1367) * (x1525);
      number_t x1534 = (x1532) + (x1533);
      number_t x1535 = (x1370) * (x1528);
      number_t x1536 = (x1439) * (x1528);
      number_t x1537 = (x1370) * (x1530);
      number_t x1538 = (x1536) + (x1537);
      number_t x1540 = (xs->arr[x1521]);
      index_t x1541 = (i) == (x1521);
      index_t x1542;
      if (x1541) {
        x1542 = 1;
      } else {
        x1542 = 0;
      }
      number_t x1548 = (x1370) * (x1540);
      number_t x1549 = (x1439) * (x1540);
      number_t x1550 = (x1370) * (x1542);
      number_t x1551 = (x1549) + (x1550);
      number_t x1552 = (x1376) * (x1523);
      number_t x1553 = (x1455) * (x1523);
      number_t x1554 = (x1376) * (x1525);
      number_t x1555 = (x1553) + (x1554);
      number_t x1565 = (x1376) * (x1528);
      number_t x1566 = (x1455) * (x1528);
      number_t x1567 = (x1376) * (x1530);
      number_t x1568 = (x1566) + (x1567);
      number_t x1569 = (x1367) * (x1540);
      number_t x1570 = (x1431) * (x1540);
      number_t x1571 = (x1367) * (x1542);
      number_t x1572 = (x1570) + (x1571);
      number_t x1573 = (x1531) - (x1535);
      number_t x1574 = (x1534) - (x1538);
      tuple_number_t_number_t x1575 = (tuple_number_t_number_t){._1=x1573, ._2=x1574};
      number_t x1576 = (x1548) - (x1552);
      number_t x1577 = (x1551) - (x1555);
      tuple_number_t_number_t x1578 = (tuple_number_t_number_t){._1=x1576, ._2=x1577};
      number_t x1579 = (x1565) - (x1569);
      number_t x1580 = (x1568) - (x1572);
      tuple_number_t_number_t x1581 = (tuple_number_t_number_t){._1=x1579, ._2=x1580};
      array_tuple_number_t_number_t x1582 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1582->length=3;x1582->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x1582->arr[0] = x1575;
      x1582->arr[1] = x1578;
      x1582->arr[2] = x1581;
      number_t x1587 = (x1376) * (x1540);
      number_t x1588 = (x1455) * (x1540);
      number_t x1589 = (x1376) * (x1542);
      number_t x1590 = (x1588) + (x1589);
      number_t x1596 = (x1367) * (x1528);
      number_t x1597 = (x1431) * (x1528);
      number_t x1598 = (x1367) * (x1530);
      number_t x1599 = (x1597) + (x1598);
      number_t x1605 = (x1587) + (x1596);
      number_t x1606 = (x1590) + (x1599);
      number_t x1607 = (x1370) * (x1523);
      number_t x1608 = (x1439) * (x1523);
      number_t x1609 = (x1370) * (x1525);
      number_t x1610 = (x1608) + (x1609);
      number_t x1611 = (x1605) + (x1607);
      number_t x1612 = (x1606) + (x1610);
      number_t x1614 = (x1611) * (x1393);
      number_t x1615 = (x1612) * (x1393);
      number_t x1616 = (x1611) * (x1503);
      number_t x1617 = (x1615) + (x1616);
      array_number_t x1650 = x1651->arr[i0];
      for(int i00 = 0; i00 < x1650->length; i00++){
        index_t x1618 = (i00) + (x1521);
        number_t x1619 = (xs->arr[x1618]);
        index_t x1620 = (i) == (x1618);
        index_t x1621;
        if (x1620) {
          x1621 = 1;
        } else {
          x1621 = 0;
        }
        tuple_number_t_number_t x1622 = (x1582->arr[i00]);
        number_t x1623 = (x1622)._1;
        number_t x1624 = (x1622)._2;
        number_t x1625 = (x1619) * (x1392);
        number_t x1626 = (x1621) * (x1392);
        number_t x1627 = (x1619) * (x1502);
        number_t x1628 = (x1626) + (x1627);
        number_t x1629 = (x1623) * (x1395);
        number_t x1630 = (x1624) * (x1395);
        number_t x1631 = (x1623) * (x1516);
        number_t x1632 = (x1630) + (x1631);
        number_t x1633 = (xs->arr[i00]);
        index_t x1634 = (i) == (i00);
        index_t x1635;
        if (x1634) {
          x1635 = 1;
        } else {
          x1635 = 0;
        }
        number_t x1636 = (x1633) * (x1366);
        number_t x1637 = (x1635) * (x1366);
        number_t x1638 = (x1633) * (x1428);
        number_t x1639 = (x1637) + (x1638);
        number_t x1640 = (x1625) + (x1629);
        number_t x1641 = (x1628) + (x1632);
        number_t x1642 = (x1636) * (x1614);
        number_t x1643 = (x1639) * (x1614);
        number_t x1644 = (x1636) * (x1617);
        number_t x1645 = (x1643) + (x1644);
        number_t x1646 = (x1640) + (x1642);
        number_t x1647 = (x1641) + (x1645);
        tuple_number_t_number_t x1648 = (tuple_number_t_number_t){._1=x1646, ._2=x1647};
        number_t x1649 = (x1648)._2;
        x1650->arr[i00] = x1649;
        
      }
    }
  }
  return x1652;
}

array_array_array_number_t ba_proj_jac_dps(storage_t st, array_number_t xs, index_t n) {
  number_t x6232 = (xs->arr[0]);
  number_t x6234 = (x6232) * (x6232);
  number_t x6235 = (xs->arr[1]);
  number_t x6237 = (x6235) * (x6235);
  number_t x6238 = (xs->arr[2]);
  number_t x6240 = (x6234) + (x6237);
  number_t x6241 = (x6238) * (x6238);
  number_t x6242 = (x6240) + (x6241);
  number_t x6243 = sqrt(x6242);
  number_t x6245 = (1) / (x6243);
  number_t x6246 = (xs->arr[5]);
  number_t x6247 = (x6235) * (x6245);
  number_t x6250 = (xs->arr[4]);
  number_t x6251 = (x6238) * (x6245);
  number_t x6254 = (xs->arr[3]);
  number_t x6259 = (x6232) * (x6245);
  number_t x6280 = cos(x6243);
  number_t x6281 = (1) - (x6280);
  number_t x6282 = (xs->arr[9]);
  number_t x6283 = (xs->arr[10]);
  number_t x6284 = (xs->arr[6]);
  index_t x6285 = (xs)->length;
  number_t x6310 = (x6245) * (0.5);
  number_t x6315 = (x6243) * (x6243);
  number_t x6406 = sin(x6243);
  number_t x6407 = -(x6406);
  array_array_array_number_t x6689 = (array_array_array_number_t)st;
  for(int i = 0; i < x6689->length; i++){
    index_t x6286 = (i) == (0);
    index_t x6287;
    if (x6286) {
      x6287 = 1;
    } else {
      x6287 = 0;
    }
    number_t x6290 = (x6287) * (x6232);
    number_t x6291 = (x6232) * (x6287);
    number_t x6292 = (x6290) + (x6291);
    index_t x6293 = (i) == (1);
    index_t x6294;
    if (x6293) {
      x6294 = 1;
    } else {
      x6294 = 0;
    }
    number_t x6297 = (x6294) * (x6235);
    number_t x6298 = (x6235) * (x6294);
    number_t x6299 = (x6297) + (x6298);
    index_t x6300 = (i) == (2);
    index_t x6301;
    if (x6300) {
      x6301 = 1;
    } else {
      x6301 = 0;
    }
    number_t x6304 = (x6292) + (x6299);
    number_t x6305 = (x6301) * (x6238);
    number_t x6306 = (x6238) * (x6301);
    number_t x6307 = (x6305) + (x6306);
    number_t x6308 = (x6304) + (x6307);
    number_t x6311 = (x6308) * (x6310);
    number_t x6314 = -(x6311);
    number_t x6316 = (x6314) / (x6315);
    index_t x6317 = (i) == (5);
    index_t x6318;
    if (x6317) {
      x6318 = 1;
    } else {
      x6318 = 0;
    }
    number_t x6319 = (x6294) * (x6245);
    number_t x6320 = (x6235) * (x6316);
    number_t x6321 = (x6319) + (x6320);
    index_t x6327 = (i) == (4);
    index_t x6328;
    if (x6327) {
      x6328 = 1;
    } else {
      x6328 = 0;
    }
    number_t x6329 = (x6301) * (x6245);
    number_t x6330 = (x6238) * (x6316);
    number_t x6331 = (x6329) + (x6330);
    index_t x6337 = (i) == (3);
    index_t x6338;
    if (x6337) {
      x6338 = 1;
    } else {
      x6338 = 0;
    }
    number_t x6349 = (x6287) * (x6245);
    number_t x6350 = (x6232) * (x6316);
    number_t x6351 = (x6349) + (x6350);
    number_t x6408 = (x6311) * (x6407);
    number_t x6409 = -(x6408);
    index_t x6410 = (i) == (9);
    index_t x6411;
    if (x6410) {
      x6411 = 1;
    } else {
      x6411 = 0;
    }
    index_t x6412 = (i) == (10);
    index_t x6413;
    if (x6412) {
      x6413 = 1;
    } else {
      x6413 = 0;
    }
    index_t x6414 = (i) == (6);
    index_t x6415;
    if (x6414) {
      x6415 = 1;
    } else {
      x6415 = 0;
    }
    number_t x6542 = (x6311) * (x6280);
    array_array_number_t x6688 = (array_array_number_t)x6689->arr[i];
    for(int i0 = 0; i0 < x6688->length; i0++){
      index_t x6416 = (3) * (i0);
      index_t x6417 = (11) + (x6416);
      index_t x6418 = (2) + (x6417);
      number_t x6419 = (xs->arr[x6418]);
      index_t x6420 = (i) == (x6418);
      index_t x6421;
      if (x6420) {
        x6421 = 1;
      } else {
        x6421 = 0;
      }
      number_t x6422 = (x6419) - (x6246);
      index_t x6423 = (x6421) - (x6318);
      index_t x6425 = (1) + (x6417);
      number_t x6426 = (xs->arr[x6425]);
      index_t x6427 = (i) == (x6425);
      index_t x6428;
      if (x6427) {
        x6428 = 1;
      } else {
        x6428 = 0;
      }
      number_t x6429 = (x6426) - (x6250);
      index_t x6430 = (x6428) - (x6328);
      number_t x6431 = (x6247) * (x6422);
      number_t x6432 = (x6321) * (x6422);
      number_t x6433 = (x6247) * (x6423);
      number_t x6434 = (x6432) + (x6433);
      number_t x6435 = (x6251) * (x6429);
      number_t x6436 = (x6331) * (x6429);
      number_t x6437 = (x6251) * (x6430);
      number_t x6438 = (x6436) + (x6437);
      number_t x6440 = (xs->arr[x6417]);
      index_t x6441 = (i) == (x6417);
      index_t x6442;
      if (x6441) {
        x6442 = 1;
      } else {
        x6442 = 0;
      }
      number_t x6443 = (x6440) - (x6254);
      index_t x6444 = (x6442) - (x6338);
      number_t x6452 = (x6251) * (x6443);
      number_t x6453 = (x6331) * (x6443);
      number_t x6454 = (x6251) * (x6444);
      number_t x6455 = (x6453) + (x6454);
      number_t x6456 = (x6259) * (x6422);
      number_t x6457 = (x6351) * (x6422);
      number_t x6458 = (x6259) * (x6423);
      number_t x6459 = (x6457) + (x6458);
      number_t x6473 = (x6259) * (x6429);
      number_t x6474 = (x6351) * (x6429);
      number_t x6475 = (x6259) * (x6430);
      number_t x6476 = (x6474) + (x6475);
      number_t x6477 = (x6247) * (x6443);
      number_t x6478 = (x6321) * (x6443);
      number_t x6479 = (x6247) * (x6444);
      number_t x6480 = (x6478) + (x6479);
      number_t x6481 = (x6431) - (x6435);
      number_t x6482 = (x6434) - (x6438);
      tuple_number_t_number_t x6483 = (tuple_number_t_number_t){._1=x6481, ._2=x6482};
      number_t x6484 = (x6452) - (x6456);
      number_t x6485 = (x6455) - (x6459);
      tuple_number_t_number_t x6486 = (tuple_number_t_number_t){._1=x6484, ._2=x6485};
      number_t x6487 = (x6473) - (x6477);
      number_t x6488 = (x6476) - (x6480);
      tuple_number_t_number_t x6489 = (tuple_number_t_number_t){._1=x6487, ._2=x6488};
      array_tuple_number_t_number_t x6490 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6490->length=3;x6490->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x6490->arr[0] = x6483;
      x6490->arr[1] = x6486;
      x6490->arr[2] = x6489;
      number_t x6497 = (x6259) * (x6443);
      number_t x6498 = (x6351) * (x6443);
      number_t x6499 = (x6259) * (x6444);
      number_t x6500 = (x6498) + (x6499);
      number_t x6508 = (x6247) * (x6429);
      number_t x6509 = (x6321) * (x6429);
      number_t x6510 = (x6247) * (x6430);
      number_t x6511 = (x6509) + (x6510);
      number_t x6519 = (x6497) + (x6508);
      number_t x6520 = (x6500) + (x6511);
      number_t x6521 = (x6251) * (x6422);
      number_t x6522 = (x6331) * (x6422);
      number_t x6523 = (x6251) * (x6423);
      number_t x6524 = (x6522) + (x6523);
      number_t x6525 = (x6519) + (x6521);
      number_t x6526 = (x6520) + (x6524);
      number_t x6547 = (x6525) * (x6281);
      number_t x6548 = (x6526) * (x6281);
      number_t x6549 = (x6525) * (x6409);
      number_t x6550 = (x6548) + (x6549);
      array_tuple_number_t_number_t x6588 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6588->length=3;x6588->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x5843 = 0; x5843 < x6588->length; x5843++){
        index_t x6551 = (x5843) + (x6417);
        index_t x6552 = (x5843) + (3);
        number_t x6553 = (xs->arr[x6551]);
        index_t x6554 = (i) == (x6551);
        index_t x6555;
        if (x6554) {
          x6555 = 1;
        } else {
          x6555 = 0;
        }
        number_t x6556 = (xs->arr[x6552]);
        index_t x6557 = (i) == (x6552);
        index_t x6558;
        if (x6557) {
          x6558 = 1;
        } else {
          x6558 = 0;
        }
        number_t x6559 = (x6553) - (x6556);
        index_t x6560 = (x6555) - (x6558);
        tuple_number_t_number_t x6561 = (x6490->arr[x5843]);
        number_t x6562 = (x6561)._1;
        number_t x6563 = (x6561)._2;
        number_t x6564 = (x6559) * (x6280);
        number_t x6565 = (x6560) * (x6280);
        number_t x6566 = (x6559) * (x6408);
        number_t x6567 = (x6565) + (x6566);
        number_t x6568 = (x6562) * (x6406);
        number_t x6569 = (x6563) * (x6406);
        number_t x6570 = (x6562) * (x6542);
        number_t x6571 = (x6569) + (x6570);
        number_t x6572 = (xs->arr[x5843]);
        index_t x6573 = (i) == (x5843);
        index_t x6574;
        if (x6573) {
          x6574 = 1;
        } else {
          x6574 = 0;
        }
        number_t x6575 = (x6572) * (x6245);
        number_t x6576 = (x6574) * (x6245);
        number_t x6577 = (x6572) * (x6316);
        number_t x6578 = (x6576) + (x6577);
        number_t x6579 = (x6564) + (x6568);
        number_t x6580 = (x6567) + (x6571);
        number_t x6581 = (x6575) * (x6547);
        number_t x6582 = (x6578) * (x6547);
        number_t x6583 = (x6575) * (x6550);
        number_t x6584 = (x6582) + (x6583);
        number_t x6585 = (x6579) + (x6581);
        number_t x6586 = (x6580) + (x6584);
        tuple_number_t_number_t x6587 = (tuple_number_t_number_t){._1=x6585, ._2=x6586};
        x6588->arr[x5843] = x6587;
        
      }
      array_tuple_number_t_number_t x6589 = x6588;
      tuple_number_t_number_t x6590 = (x6589->arr[2]);
      number_t x6591 = (x6590)._1;
      number_t x6592 = (x6590)._2;
      tuple_number_t_number_t x6593 = (x6589->arr[0]);
      number_t x6594 = (x6593)._1;
      number_t x6595 = (x6593)._2;
      number_t x6596 = (1) / (x6591);
      number_t x6597 = -(x6592);
      number_t x6598 = (x6591) * (x6591);
      number_t x6599 = (x6597) / (x6598);
      number_t x6600 = (x6594) * (x6596);
      number_t x6601 = (x6595) * (x6596);
      number_t x6602 = (x6594) * (x6599);
      number_t x6603 = (x6601) + (x6602);
      number_t x6608 = (x6600) * (x6600);
      number_t x6609 = (x6603) * (x6600);
      number_t x6610 = (x6600) * (x6603);
      number_t x6611 = (x6609) + (x6610);
      tuple_number_t_number_t x6612 = (x6589->arr[1]);
      number_t x6613 = (x6612)._1;
      number_t x6614 = (x6612)._2;
      number_t x6619 = (x6613) * (x6596);
      number_t x6620 = (x6614) * (x6596);
      number_t x6621 = (x6613) * (x6599);
      number_t x6622 = (x6620) + (x6621);
      number_t x6627 = (x6619) * (x6619);
      number_t x6628 = (x6622) * (x6619);
      number_t x6629 = (x6619) * (x6622);
      number_t x6630 = (x6628) + (x6629);
      number_t x6631 = (x6608) + (x6627);
      number_t x6632 = (x6611) + (x6630);
      number_t x6633 = (x6282) * (x6631);
      number_t x6634 = (x6411) * (x6631);
      number_t x6635 = (x6282) * (x6632);
      number_t x6636 = (x6634) + (x6635);
      number_t x6639 = (x6283) * (x6631);
      number_t x6640 = (x6413) * (x6631);
      number_t x6641 = (x6283) * (x6632);
      number_t x6642 = (x6640) + (x6641);
      number_t x6645 = (1) + (x6633);
      number_t x6646 = (x6639) * (x6631);
      number_t x6647 = (x6642) * (x6631);
      number_t x6648 = (x6639) * (x6632);
      number_t x6649 = (x6647) + (x6648);
      number_t x6654 = (x6645) + (x6646);
      number_t x6655 = (x6636) + (x6649);
      array_tuple_number_t_number_t x6669 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6669->length=2;x6669->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x5553 = 0; x5553 < x6669->length; x5553++){
        tuple_number_t_number_t x6657 = (x6589->arr[x5553]);
        number_t x6658 = (x6657)._1;
        number_t x6659 = (x6657)._2;
        number_t x6660 = (x6658) * (x6596);
        number_t x6661 = (x6659) * (x6596);
        number_t x6662 = (x6658) * (x6599);
        number_t x6663 = (x6661) + (x6662);
        number_t x6664 = (x6660) * (x6654);
        number_t x6665 = (x6663) * (x6654);
        number_t x6666 = (x6660) * (x6655);
        number_t x6667 = (x6665) + (x6666);
        tuple_number_t_number_t x6668 = (tuple_number_t_number_t){._1=x6664, ._2=x6667};
        x6669->arr[x5553] = x6668;
        
      }
      array_tuple_number_t_number_t x6670 = x6669;
      array_number_t x6687 = x6688->arr[i0];
      for(int i00 = 0; i00 < x6687->length; i00++){
        index_t x6672 = (i00) + (7);
        tuple_number_t_number_t x6673 = (x6670->arr[i00]);
        number_t x6674 = (x6673)._1;
        number_t x6675 = (x6673)._2;
        number_t x6676 = (xs->arr[x6672]);
        index_t x6677 = (i) == (x6672);
        index_t x6678;
        if (x6677) {
          x6678 = 1;
        } else {
          x6678 = 0;
        }
        number_t x6679 = (x6674) * (x6284);
        number_t x6680 = (x6675) * (x6284);
        number_t x6681 = (x6674) * (x6415);
        number_t x6682 = (x6680) + (x6681);
        number_t x6683 = (x6676) + (x6679);
        number_t x6684 = (x6678) + (x6682);
        tuple_number_t_number_t x6685 = (tuple_number_t_number_t){._1=x6683, ._2=x6684};
        number_t x6686 = (x6685)._2;
        x6687->arr[i00] = x6686;
        
      }
      // x6688->arr[i0] = x6687;
      
    }
    // x6689->arr[i] = x6688;
    
  }
  return x6689;
}

array_array_array_number_t ba_proj_jac2_dps(storage_t st, array_number_t cam, array_number_t xs, index_t n) {
  number_t x3838 = (cam->arr[0]);
  number_t x3839 = (cam->arr[1]);
  number_t x3840 = (cam->arr[2]);
  number_t x3841 = (x3838) * (x3838);
  number_t x3842 = (x3839) * (x3839);
  number_t x3843 = (x3841) + (x3842);
  number_t x3844 = (x3840) * (x3840);
  number_t x3845 = (x3843) + (x3844);
  number_t x3846 = sqrt(x3845);
  number_t x3847 = (1) / (x3846);
  number_t x3848 = (x3839) * (x3847);
  number_t x3849 = (x3840) * (x3847);
  number_t x3850 = (x3838) * (x3847);
  number_t x3851 = cos(x3846);
  number_t x3852 = (1) - (x3851);
  number_t x3853 = (cam->arr[9]);
  number_t x3854 = (cam->arr[10]);
  number_t x3855 = (cam->arr[6]);
  number_t x3856 = sin(x3846);
  index_t x3857 = (cam)->length;
  number_t x3875 = (x3847) * (0.5);
  number_t x3878 = (x3846) * (x3846);
  number_t x3889 = -(x3856);
  number_t x3895 = (cam->arr[5]);
  number_t x3901 = (cam->arr[4]);
  number_t x3906 = (cam->arr[3]);
  array_array_array_number_t x4218 = (array_array_array_number_t)st;
  for(int i = 0; i < x4218->length; i++){
    index_t x3858 = (i) == (0);
    index_t x3859;
    if (x3858) {
      x3859 = 1;
    } else {
      x3859 = 0;
    }
    index_t x3860 = (i) == (1);
    index_t x3861;
    if (x3860) {
      x3861 = 1;
    } else {
      x3861 = 0;
    }
    index_t x3862 = (i) == (2);
    index_t x3863;
    if (x3862) {
      x3863 = 1;
    } else {
      x3863 = 0;
    }
    number_t x3864 = (x3859) * (x3838);
    number_t x3865 = (x3838) * (x3859);
    number_t x3866 = (x3864) + (x3865);
    number_t x3867 = (x3861) * (x3839);
    number_t x3868 = (x3839) * (x3861);
    number_t x3869 = (x3867) + (x3868);
    number_t x3870 = (x3866) + (x3869);
    number_t x3871 = (x3863) * (x3840);
    number_t x3872 = (x3840) * (x3863);
    number_t x3873 = (x3871) + (x3872);
    number_t x3874 = (x3870) + (x3873);
    number_t x3876 = (x3874) * (x3875);
    number_t x3877 = -(x3876);
    number_t x3879 = (x3877) / (x3878);
    number_t x3880 = (x3861) * (x3847);
    number_t x3881 = (x3839) * (x3879);
    number_t x3882 = (x3880) + (x3881);
    number_t x3883 = (x3863) * (x3847);
    number_t x3884 = (x3840) * (x3879);
    number_t x3885 = (x3883) + (x3884);
    number_t x3886 = (x3859) * (x3847);
    number_t x3887 = (x3838) * (x3879);
    number_t x3888 = (x3886) + (x3887);
    number_t x3890 = (x3876) * (x3889);
    index_t x3897 = (i) == (5);
    index_t x3898;
    if (x3897) {
      x3898 = -1;
    } else {
      x3898 = 0;
    }
    index_t x3903 = (i) == (4);
    index_t x3904;
    if (x3903) {
      x3904 = -1;
    } else {
      x3904 = 0;
    }
    index_t x3908 = (i) == (3);
    index_t x3909;
    if (x3908) {
      x3909 = -1;
    } else {
      x3909 = 0;
    }
    index_t x4129 = (i) == (9);
    index_t x4161 = (i) == (10);
    number_t x3925 = (x3848) * (x3898);
    index_t x4207 = (i) == (6);
    number_t x3928 = (x3849) * (x3904);
    number_t x3936 = (x3849) * (x3909);
    number_t x3939 = (x3850) * (x3898);
    number_t x3947 = (x3850) * (x3904);
    number_t x3950 = (x3848) * (x3909);
    number_t x4058 = (x3876) * (x3851);
    array_array_number_t x4217 = (array_array_number_t)x4218->arr[i];
    for(int i0 = 0; i0 < x4217->length; i0++){
      index_t x3891 = (3) * (i0);
      index_t x3892 = (11) + (x3891);
      index_t x3893 = (2) + (x3892);
      number_t x3894 = (xs->arr[x3893]);
      number_t x3896 = (x3894) - (x3895);
      index_t x3899 = (1) + (x3892);
      number_t x3900 = (xs->arr[x3899]);
      number_t x3902 = (x3900) - (x3901);
      number_t x3905 = (xs->arr[x3892]);
      number_t x3907 = (x3905) - (x3906);
      number_t x3910 = (x3850) * (x3907);
      number_t x3911 = (x3848) * (x3902);
      number_t x3912 = (x3910) + (x3911);
      number_t x3913 = (x3849) * (x3896);
      number_t x3914 = (x3912) + (x3913);
      number_t x3915 = (x3914) * (x3852);
      number_t x3921 = (x3848) * (x3896);
      number_t x3922 = (x3849) * (x3902);
      number_t x3923 = (x3921) - (x3922);
      number_t x3924 = (x3882) * (x3896);
      number_t x3926 = (x3924) + (x3925);
      number_t x3927 = (x3885) * (x3902);
      number_t x3929 = (x3927) + (x3928);
      number_t x3930 = (x3926) - (x3929);
      tuple_number_t_number_t x3931 = (tuple_number_t_number_t){._1=x3923, ._2=x3930};
      number_t x3932 = (x3849) * (x3907);
      number_t x3933 = (x3850) * (x3896);
      number_t x3934 = (x3932) - (x3933);
      number_t x3935 = (x3885) * (x3907);
      number_t x3937 = (x3935) + (x3936);
      number_t x3938 = (x3888) * (x3896);
      number_t x3940 = (x3938) + (x3939);
      number_t x3941 = (x3937) - (x3940);
      tuple_number_t_number_t x3942 = (tuple_number_t_number_t){._1=x3934, ._2=x3941};
      number_t x3943 = (x3850) * (x3902);
      number_t x3944 = (x3848) * (x3907);
      number_t x3945 = (x3943) - (x3944);
      number_t x3946 = (x3888) * (x3902);
      number_t x3948 = (x3946) + (x3947);
      number_t x3949 = (x3882) * (x3907);
      number_t x3951 = (x3949) + (x3950);
      number_t x3952 = (x3948) - (x3951);
      tuple_number_t_number_t x3953 = (tuple_number_t_number_t){._1=x3945, ._2=x3952};
      array_tuple_number_t_number_t x3954 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x3954->length=3;x3954->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x3954->arr[0] = x3931;
      x3954->arr[1] = x3942;
      x3954->arr[2] = x3953;
      array_tuple_number_t_number_t x4085 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x4085->length=3;x4085->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x2981 = 0; x2981 < x4085->length; x2981++){
        index_t x3916 = (x2981) + (3);
        index_t x3917 = (x2981) + (x3892);
        number_t x3918 = (xs->arr[x3917]);
        number_t x3919 = (cam->arr[x3916]);
        number_t x3920 = (x3918) - (x3919);
        tuple_number_t_number_t x3955 = (x3954->arr[x2981]);
        number_t x3956 = (x3955)._1;
        number_t x3957 = (cam->arr[x2981]);
        number_t x3958 = (x3957) * (x3847);
        number_t x3959 = (x3920) * (x3851);
        number_t x3960 = (x3956) * (x3856);
        number_t x3961 = (x3959) + (x3960);
        number_t x3962 = (x3958) * (x3915);
        number_t x3963 = (x3961) + (x3962);
        index_t x3964 = (i) == (x3916);
        index_t x4026 = (i) == (x2981);
        number_t x4055 = (x3920) * (x3890);
        number_t x4056 = (x3955)._2;
        number_t x4057 = (x4056) * (x3856);
        number_t x4059 = (x3956) * (x4058);
        number_t x4060 = (x4057) + (x4059);
        number_t x4083;
        if (x3964) {
          number_t x3996 = (-1) * (x3851);
          number_t x3998 = (x3996) + (x4055);
          number_t x4004 = (x3998) + (x4060);
          number_t x4005 = (x3957) * (x3879);
          number_t x4025;
          if (x4026) {
            number_t x3976 = (x3847) + (x4005);
            number_t x3977 = (x3976) * (x3915);
            number_t x3978 = (x3888) * (x3907);
            number_t x3979 = (x3850) * (x3909);
            number_t x3980 = (x3978) + (x3979);
            number_t x3981 = (x3882) * (x3902);
            number_t x3982 = (x3848) * (x3904);
            number_t x3983 = (x3981) + (x3982);
            number_t x3984 = (x3980) + (x3983);
            number_t x3985 = (x3885) * (x3896);
            number_t x3986 = (x3849) * (x3898);
            number_t x3987 = (x3985) + (x3986);
            number_t x3988 = (x3984) + (x3987);
            number_t x3989 = (x3988) * (x3852);
            number_t x3990 = -(x3890);
            number_t x3991 = (x3914) * (x3990);
            number_t x3992 = (x3989) + (x3991);
            number_t x3993 = (x3958) * (x3992);
            number_t x3994 = (x3977) + (x3993);
            number_t x3995 = (x4004) + (x3994);
            x4025 = x3995;
          } else {
            number_t x4006 = (x4005) * (x3915);
            number_t x4007 = (x3888) * (x3907);
            number_t x4008 = (x3850) * (x3909);
            number_t x4009 = (x4007) + (x4008);
            number_t x4010 = (x3882) * (x3902);
            number_t x4011 = (x3848) * (x3904);
            number_t x4012 = (x4010) + (x4011);
            number_t x4013 = (x4009) + (x4012);
            number_t x4014 = (x3885) * (x3896);
            number_t x4015 = (x3849) * (x3898);
            number_t x4016 = (x4014) + (x4015);
            number_t x4017 = (x4013) + (x4016);
            number_t x4018 = (x4017) * (x3852);
            number_t x4019 = -(x3890);
            number_t x4020 = (x3914) * (x4019);
            number_t x4021 = (x4018) + (x4020);
            number_t x4022 = (x3958) * (x4021);
            number_t x4023 = (x4006) + (x4022);
            number_t x4024 = (x4004) + (x4023);
            x4025 = x4024;
          }
          x4083 = x4025;
        } else {
          number_t x4061 = (x4055) + (x4060);
          number_t x4062 = (x3957) * (x3879);
          number_t x4082;
          if (x4026) {
            number_t x4035 = (x3847) + (x4062);
            number_t x4036 = (x4035) * (x3915);
            number_t x4037 = (x3888) * (x3907);
            number_t x4038 = (x3850) * (x3909);
            number_t x4039 = (x4037) + (x4038);
            number_t x4040 = (x3882) * (x3902);
            number_t x4041 = (x3848) * (x3904);
            number_t x4042 = (x4040) + (x4041);
            number_t x4043 = (x4039) + (x4042);
            number_t x4044 = (x3885) * (x3896);
            number_t x4045 = (x3849) * (x3898);
            number_t x4046 = (x4044) + (x4045);
            number_t x4047 = (x4043) + (x4046);
            number_t x4048 = (x4047) * (x3852);
            number_t x4049 = -(x3890);
            number_t x4050 = (x3914) * (x4049);
            number_t x4051 = (x4048) + (x4050);
            number_t x4052 = (x3958) * (x4051);
            number_t x4053 = (x4036) + (x4052);
            number_t x4054 = (x4061) + (x4053);
            x4082 = x4054;
          } else {
            number_t x4063 = (x4062) * (x3915);
            number_t x4064 = (x3888) * (x3907);
            number_t x4065 = (x3850) * (x3909);
            number_t x4066 = (x4064) + (x4065);
            number_t x4067 = (x3882) * (x3902);
            number_t x4068 = (x3848) * (x3904);
            number_t x4069 = (x4067) + (x4068);
            number_t x4070 = (x4066) + (x4069);
            number_t x4071 = (x3885) * (x3896);
            number_t x4072 = (x3849) * (x3898);
            number_t x4073 = (x4071) + (x4072);
            number_t x4074 = (x4070) + (x4073);
            number_t x4075 = (x4074) * (x3852);
            number_t x4076 = -(x3890);
            number_t x4077 = (x3914) * (x4076);
            number_t x4078 = (x4075) + (x4077);
            number_t x4079 = (x3958) * (x4078);
            number_t x4080 = (x4063) + (x4079);
            number_t x4081 = (x4061) + (x4080);
            x4082 = x4081;
          }
          x4083 = x4082;
        }
        tuple_number_t_number_t x4084 = (tuple_number_t_number_t){._1=x3963, ._2=x4083};
        x4085->arr[x2981] = x4084;
        
      }
      array_tuple_number_t_number_t x4086 = x4085;
      tuple_number_t_number_t x4087 = (x4086->arr[2]);
      number_t x4088 = (x4087)._1;
      tuple_number_t_number_t x4089 = (x4086->arr[0]);
      number_t x4090 = (x4089)._1;
      number_t x4091 = (1) / (x4088);
      number_t x4092 = (x4087)._2;
      number_t x4093 = -(x4092);
      number_t x4094 = (x4088) * (x4088);
      number_t x4095 = (x4093) / (x4094);
      number_t x4096 = (x4090) * (x4091);
      number_t x4097 = (x4089)._2;
      number_t x4098 = (x4097) * (x4091);
      number_t x4099 = (x4090) * (x4095);
      number_t x4100 = (x4098) + (x4099);
      tuple_number_t_number_t x4101 = (x4086->arr[1]);
      number_t x4102 = (x4101)._1;
      number_t x4103 = (x4102) * (x4091);
      number_t x4104 = (x4101)._2;
      number_t x4105 = (x4104) * (x4091);
      number_t x4106 = (x4102) * (x4095);
      number_t x4107 = (x4105) + (x4106);
      number_t x4108 = (x4096) * (x4096);
      number_t x4109 = (x4103) * (x4103);
      number_t x4110 = (x4108) + (x4109);
      number_t x4111 = (x4100) * (x4096);
      number_t x4112 = (x4096) * (x4100);
      number_t x4113 = (x4111) + (x4112);
      number_t x4114 = (x4107) * (x4103);
      number_t x4115 = (x4103) * (x4107);
      number_t x4116 = (x4114) + (x4115);
      number_t x4117 = (x4113) + (x4116);
      number_t x4118 = (x3854) * (x4110);
      number_t x4119 = (x3853) * (x4110);
      number_t x4120 = (1) + (x4119);
      number_t x4121 = (x4118) * (x4110);
      number_t x4122 = (x4120) + (x4121);
      number_t x4181 = (x3853) * (x4117);
      number_t x4182 = (x3854) * (x4117);
      array_tuple_number_t_number_t x4192 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x4192->length=2;x4192->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x2703 = 0; x2703 < x4192->length; x2703++){
        tuple_number_t_number_t x4125 = (x4086->arr[x2703]);
        number_t x4126 = (x4125)._1;
        number_t x4127 = (x4126) * (x4091);
        number_t x4128 = (x4127) * (x4122);
        number_t x4176 = (x4125)._2;
        number_t x4177 = (x4176) * (x4091);
        number_t x4178 = (x4126) * (x4095);
        number_t x4179 = (x4177) + (x4178);
        number_t x4180 = (x4179) * (x4122);
        number_t x4190;
        if (x4129) {
          number_t x4152 = (x4110) + (x4181);
          number_t x4160;
          if (x4161) {
            number_t x4139 = (x4110) + (x4182);
            number_t x4140 = (x4139) * (x4110);
            number_t x4141 = (x4118) * (x4117);
            number_t x4142 = (x4140) + (x4141);
            number_t x4143 = (x4152) + (x4142);
            number_t x4144 = (x4127) * (x4143);
            number_t x4145 = (x4180) + (x4144);
            x4160 = x4145;
          } else {
            number_t x4154 = (x4182) * (x4110);
            number_t x4155 = (x4118) * (x4117);
            number_t x4156 = (x4154) + (x4155);
            number_t x4157 = (x4152) + (x4156);
            number_t x4158 = (x4127) * (x4157);
            number_t x4159 = (x4180) + (x4158);
            x4160 = x4159;
          }
          x4190 = x4160;
        } else {
          number_t x4189;
          if (x4161) {
            number_t x4169 = (x4110) + (x4182);
            number_t x4170 = (x4169) * (x4110);
            number_t x4171 = (x4118) * (x4117);
            number_t x4172 = (x4170) + (x4171);
            number_t x4173 = (x4181) + (x4172);
            number_t x4174 = (x4127) * (x4173);
            number_t x4175 = (x4180) + (x4174);
            x4189 = x4175;
          } else {
            number_t x4183 = (x4182) * (x4110);
            number_t x4184 = (x4118) * (x4117);
            number_t x4185 = (x4183) + (x4184);
            number_t x4186 = (x4181) + (x4185);
            number_t x4187 = (x4127) * (x4186);
            number_t x4188 = (x4180) + (x4187);
            x4189 = x4188;
          }
          x4190 = x4189;
        }
        tuple_number_t_number_t x4191 = (tuple_number_t_number_t){._1=x4128, ._2=x4190};
        x4192->arr[x2703] = x4191;
        
      }
      array_tuple_number_t_number_t x4193 = x4192;
      array_number_t x4216 = (array_number_t)x4217->arr[i0];
      for(int i00 = 0; i00 < x4216->length; i00++){
        tuple_number_t_number_t x4194 = (x4193->arr[i00]);
        index_t x4195 = (i00) + (7);
        index_t x4196 = (i) == (x4195);
        number_t x4212 = (x4194)._2;
        number_t x4213 = (x4212) * (x3855);
        number_t x4215;
        if (x4196) {
          number_t x4206;
          if (x4207) {
            number_t x4200 = (x4194)._1;
            number_t x4201 = (x4213) + (x4200);
            number_t x4202 = (1) + (x4201);
            x4206 = x4202;
          } else {
            number_t x4205 = (1) + (x4213);
            x4206 = x4205;
          }
          x4215 = x4206;
        } else {
          number_t x4214;
          if (x4207) {
            number_t x4210 = (x4194)._1;
            number_t x4211 = (x4213) + (x4210);
            x4214 = x4211;
          } else {
            x4214 = x4213;
          }
          x4215 = x4214;
        }
        x4216->arr[i00] = x4215;
        
      }
      // x4217->arr[i0] = x4216;
      
    }
    // x4218->arr[i] = x4217;
    
  }
  return x4218;
}

