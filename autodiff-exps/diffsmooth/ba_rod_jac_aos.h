#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>


array_array_array_number_t ba_rod_jac(array_number_t xs, index_t n) {
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
  array_array_array_number_t x1652 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x1652->length=x1397;x1652->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x1397);
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
    array_array_number_t x1651 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x1651->length=n;x1651->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
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
      array_number_t x1650 = (array_number_t)storage_alloc(sizeof(int) * 2);x1650->length=3;x1650->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
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
      x1651->arr[i0] = x1650;
      
    }
    x1652->arr[i] = x1651;
    
  }
  return x1652;
}

array_array_array_number_t ba_proj_jac(array_number_t xs, index_t n) {
//   number_t x6230 = (xs->arr[0]);
//   number_t x6232 = (x6230) * (x6230);
//   number_t x6233 = (xs->arr[1]);
//   number_t x6235 = (x6233) * (x6233);
//   number_t x6236 = (xs->arr[2]);
//   number_t x6238 = (x6232) + (x6235);
//   number_t x6239 = (x6236) * (x6236);
//   number_t x6240 = (x6238) + (x6239);
//   number_t x6241 = sqrt(x6240);
//   number_t x6243 = (1) / (x6241);
//   number_t x6244 = (xs->arr[5]);
//   number_t x6245 = (x6233) * (x6243);
//   number_t x6248 = (xs->arr[4]);
//   number_t x6249 = (x6236) * (x6243);
//   number_t x6252 = (xs->arr[3]);
//   number_t x6257 = (x6230) * (x6243);
//   number_t x6278 = cos(x6241);
//   number_t x6279 = (1) - (x6278);
//   number_t x6280 = (xs->arr[9]);
//   number_t x6281 = (xs->arr[10]);
//   number_t x6282 = (xs->arr[6]);
//   index_t x6284 = (xs)->length;
//   number_t x6309 = (x6243) * (0.5);
//   number_t x6314 = (x6241) * (x6241);
//   number_t x6405 = sin(x6241);
//   number_t x6406 = -(x6405);
//   array_array_array_number_t x6679 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x6679->length=x6284;x6679->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x6284);
//   for(int i = 0; i < x6679->length; i++){
//     index_t x6285 = (i) == (0);
//     index_t x6286;
//     if (x6285) {
//       x6286 = 1;
//     } else {
//       x6286 = 0;
//     }
//     number_t x6289 = (x6286) * (x6230);
//     number_t x6290 = (x6230) * (x6286);
//     number_t x6291 = (x6289) + (x6290);
//     index_t x6292 = (i) == (1);
//     index_t x6293;
//     if (x6292) {
//       x6293 = 1;
//     } else {
//       x6293 = 0;
//     }
//     number_t x6296 = (x6293) * (x6233);
//     number_t x6297 = (x6233) * (x6293);
//     number_t x6298 = (x6296) + (x6297);
//     index_t x6299 = (i) == (2);
//     index_t x6300;
//     if (x6299) {
//       x6300 = 1;
//     } else {
//       x6300 = 0;
//     }
//     number_t x6303 = (x6291) + (x6298);
//     number_t x6304 = (x6300) * (x6236);
//     number_t x6305 = (x6236) * (x6300);
//     number_t x6306 = (x6304) + (x6305);
//     number_t x6307 = (x6303) + (x6306);
//     number_t x6310 = (x6307) * (x6309);
//     number_t x6313 = -(x6310);
//     number_t x6315 = (x6313) / (x6314);
//     index_t x6316 = (i) == (5);
//     index_t x6317;
//     if (x6316) {
//       x6317 = 1;
//     } else {
//       x6317 = 0;
//     }
//     number_t x6318 = (x6293) * (x6243);
//     number_t x6319 = (x6233) * (x6315);
//     number_t x6320 = (x6318) + (x6319);
//     index_t x6326 = (i) == (4);
//     index_t x6327;
//     if (x6326) {
//       x6327 = 1;
//     } else {
//       x6327 = 0;
//     }
//     number_t x6328 = (x6300) * (x6243);
//     number_t x6329 = (x6236) * (x6315);
//     number_t x6330 = (x6328) + (x6329);
//     index_t x6336 = (i) == (3);
//     index_t x6337;
//     if (x6336) {
//       x6337 = 1;
//     } else {
//       x6337 = 0;
//     }
//     number_t x6348 = (x6286) * (x6243);
//     number_t x6349 = (x6230) * (x6315);
//     number_t x6350 = (x6348) + (x6349);
//     number_t x6407 = (x6310) * (x6406);
//     number_t x6408 = -(x6407);
//     index_t x6409 = (i) == (9);
//     index_t x6410;
//     if (x6409) {
//       x6410 = 1;
//     } else {
//       x6410 = 0;
//     }
//     index_t x6411 = (i) == (10);
//     index_t x6412;
//     if (x6411) {
//       x6412 = 1;
//     } else {
//       x6412 = 0;
//     }
//     index_t x6413 = (i) == (6);
//     index_t x6414;
//     if (x6413) {
//       x6414 = 1;
//     } else {
//       x6414 = 0;
//     }
//     number_t x6543 = (x6310) * (x6278);
//     array_array_number_t x6678 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x6678->length=n;x6678->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
//     for(int i0 = 0; i0 < x6678->length; i0++){
//       index_t x6417 = (3) * (i0);
//       index_t x6418 = (11) + (x6417);
//       index_t x6419 = (2) + (x6418);
//       number_t x6420 = (xs->arr[x6419]);
//       index_t x6421 = (i) == (x6419);
//       index_t x6422;
//       if (x6421) {
//         x6422 = 1;
//       } else {
//         x6422 = 0;
//       }
//       number_t x6423 = (x6420) - (x6244);
//       index_t x6424 = (x6422) - (x6317);
//       index_t x6426 = (1) + (x6418);
//       number_t x6427 = (xs->arr[x6426]);
//       index_t x6428 = (i) == (x6426);
//       index_t x6429;
//       if (x6428) {
//         x6429 = 1;
//       } else {
//         x6429 = 0;
//       }
//       number_t x6430 = (x6427) - (x6248);
//       index_t x6431 = (x6429) - (x6327);
//       number_t x6432 = (x6245) * (x6423);
//       number_t x6433 = (x6320) * (x6423);
//       number_t x6434 = (x6245) * (x6424);
//       number_t x6435 = (x6433) + (x6434);
//       number_t x6436 = (x6249) * (x6430);
//       number_t x6437 = (x6330) * (x6430);
//       number_t x6438 = (x6249) * (x6431);
//       number_t x6439 = (x6437) + (x6438);
//       number_t x6441 = (xs->arr[x6418]);
//       index_t x6442 = (i) == (x6418);
//       index_t x6443;
//       if (x6442) {
//         x6443 = 1;
//       } else {
//         x6443 = 0;
//       }
//       number_t x6444 = (x6441) - (x6252);
//       index_t x6445 = (x6443) - (x6337);
//       number_t x6453 = (x6249) * (x6444);
//       number_t x6454 = (x6330) * (x6444);
//       number_t x6455 = (x6249) * (x6445);
//       number_t x6456 = (x6454) + (x6455);
//       number_t x6457 = (x6257) * (x6423);
//       number_t x6458 = (x6350) * (x6423);
//       number_t x6459 = (x6257) * (x6424);
//       number_t x6460 = (x6458) + (x6459);
//       number_t x6474 = (x6257) * (x6430);
//       number_t x6475 = (x6350) * (x6430);
//       number_t x6476 = (x6257) * (x6431);
//       number_t x6477 = (x6475) + (x6476);
//       number_t x6478 = (x6245) * (x6444);
//       number_t x6479 = (x6320) * (x6444);
//       number_t x6480 = (x6245) * (x6445);
//       number_t x6481 = (x6479) + (x6480);
//       number_t x6482 = (x6432) - (x6436);
//       number_t x6483 = (x6435) - (x6439);
//       tuple_number_t_number_t x6484 = (tuple_number_t_number_t){._1=x6482, ._2=x6483};
//       number_t x6485 = (x6453) - (x6457);
//       number_t x6486 = (x6456) - (x6460);
//       tuple_number_t_number_t x6487 = (tuple_number_t_number_t){._1=x6485, ._2=x6486};
//       number_t x6488 = (x6474) - (x6478);
//       number_t x6489 = (x6477) - (x6481);
//       tuple_number_t_number_t x6490 = (tuple_number_t_number_t){._1=x6488, ._2=x6489};
//       array_tuple_number_t_number_t x6491 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6491->length=3;x6491->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       x6491->arr[0] = x6484;
//       x6491->arr[1] = x6487;
//       x6491->arr[2] = x6490;
//       number_t x6498 = (x6257) * (x6444);
//       number_t x6499 = (x6350) * (x6444);
//       number_t x6500 = (x6257) * (x6445);
//       number_t x6501 = (x6499) + (x6500);
//       number_t x6509 = (x6245) * (x6430);
//       number_t x6510 = (x6320) * (x6430);
//       number_t x6511 = (x6245) * (x6431);
//       number_t x6512 = (x6510) + (x6511);
//       number_t x6520 = (x6498) + (x6509);
//       number_t x6521 = (x6501) + (x6512);
//       number_t x6522 = (x6249) * (x6423);
//       number_t x6523 = (x6330) * (x6423);
//       number_t x6524 = (x6249) * (x6424);
//       number_t x6525 = (x6523) + (x6524);
//       number_t x6526 = (x6520) + (x6522);
//       number_t x6527 = (x6521) + (x6525);
//       number_t x6548 = (x6526) * (x6279);
//       number_t x6549 = (x6527) * (x6279);
//       number_t x6550 = (x6526) * (x6408);
//       number_t x6551 = (x6549) + (x6550);
//       array_tuple_number_t_number_t x6589 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6589->length=3;x6589->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       for(int x5793 = 0; x5793 < x6589->length; x5793++){
//         index_t x6552 = (x5793) + (x6418);
//         index_t x6553 = (x5793) + (3);
//         number_t x6554 = (xs->arr[x6552]);
//         index_t x6555 = (i) == (x6552);
//         index_t x6556;
//         if (x6555) {
//           x6556 = 1;
//         } else {
//           x6556 = 0;
//         }
//         number_t x6557 = (xs->arr[x6553]);
//         index_t x6558 = (i) == (x6553);
//         index_t x6559;
//         if (x6558) {
//           x6559 = 1;
//         } else {
//           x6559 = 0;
//         }
//         number_t x6560 = (x6554) - (x6557);
//         index_t x6561 = (x6556) - (x6559);
//         tuple_number_t_number_t x6562 = (x6491->arr[x5793]);
//         number_t x6563 = (x6562)._1;
//         number_t x6564 = (x6562)._2;
//         number_t x6565 = (x6560) * (x6278);
//         number_t x6566 = (x6561) * (x6278);
//         number_t x6567 = (x6560) * (x6407);
//         number_t x6568 = (x6566) + (x6567);
//         number_t x6569 = (x6563) * (x6405);
//         number_t x6570 = (x6564) * (x6405);
//         number_t x6571 = (x6563) * (x6543);
//         number_t x6572 = (x6570) + (x6571);
//         number_t x6573 = (xs->arr[x5793]);
//         index_t x6574 = (i) == (x5793);
//         index_t x6575;
//         if (x6574) {
//           x6575 = 1;
//         } else {
//           x6575 = 0;
//         }
//         number_t x6576 = (x6573) * (x6243);
//         number_t x6577 = (x6575) * (x6243);
//         number_t x6578 = (x6573) * (x6315);
//         number_t x6579 = (x6577) + (x6578);
//         number_t x6580 = (x6565) + (x6569);
//         number_t x6581 = (x6568) + (x6572);
//         number_t x6582 = (x6576) * (x6548);
//         number_t x6583 = (x6579) * (x6548);
//         number_t x6584 = (x6576) * (x6551);
//         number_t x6585 = (x6583) + (x6584);
//         number_t x6586 = (x6580) + (x6582);
//         number_t x6587 = (x6581) + (x6585);
//         tuple_number_t_number_t x6588 = (tuple_number_t_number_t){._1=x6586, ._2=x6587};
//         x6589->arr[x5793] = x6588;
        
//       }
//       array_tuple_number_t_number_t x6590 = x6589;
//       tuple_number_t_number_t x6591 = (x6590->arr[2]);
//       number_t x6592 = (x6591)._1;
//       number_t x6593 = (x6591)._2;
//       tuple_number_t_number_t x6594 = (x6590->arr[0]);
//       number_t x6595 = (x6594)._1;
//       number_t x6596 = (x6594)._2;
//       number_t x6597 = (1) / (x6592);
//       number_t x6598 = -(x6593);
//       number_t x6599 = (x6592) * (x6592);
//       number_t x6600 = (x6598) / (x6599);
//       number_t x6601 = (x6595) * (x6597);
//       number_t x6602 = (x6596) * (x6597);
//       number_t x6603 = (x6595) * (x6600);
//       number_t x6604 = (x6602) + (x6603);
//       number_t x6609 = (x6601) * (x6601);
//       number_t x6610 = (x6604) * (x6601);
//       number_t x6611 = (x6601) * (x6604);
//       number_t x6612 = (x6610) + (x6611);
//       tuple_number_t_number_t x6613 = (x6590->arr[1]);
//       number_t x6614 = (x6613)._1;
//       number_t x6615 = (x6613)._2;
//       number_t x6620 = (x6614) * (x6597);
//       number_t x6621 = (x6615) * (x6597);
//       number_t x6622 = (x6614) * (x6600);
//       number_t x6623 = (x6621) + (x6622);
//       number_t x6628 = (x6620) * (x6620);
//       number_t x6629 = (x6623) * (x6620);
//       number_t x6630 = (x6620) * (x6623);
//       number_t x6631 = (x6629) + (x6630);
//       number_t x6632 = (x6609) + (x6628);
//       number_t x6633 = (x6612) + (x6631);
//       number_t x6634 = (x6280) * (x6632);
//       number_t x6635 = (x6410) * (x6632);
//       number_t x6636 = (x6280) * (x6633);
//       number_t x6637 = (x6635) + (x6636);
//       number_t x6640 = (x6281) * (x6632);
//       number_t x6641 = (x6412) * (x6632);
//       number_t x6642 = (x6281) * (x6633);
//       number_t x6643 = (x6641) + (x6642);
//       number_t x6646 = (1) + (x6634);
//       number_t x6647 = (x6640) * (x6632);
//       number_t x6648 = (x6643) * (x6632);
//       number_t x6649 = (x6640) * (x6633);
//       number_t x6650 = (x6648) + (x6649);
//       number_t x6651 = (x6646) + (x6647);
//       number_t x6652 = (x6637) + (x6650);
//       array_number_t x6677 = (array_number_t)storage_alloc(sizeof(int) * 2);x6677->length=2;x6677->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
//       for(int i00 = 0; i00 < x6677->length; i00++){
//         index_t x6654 = (i00) + (7);
//         tuple_number_t_number_t x6655 = (x6590->arr[i00]);
//         number_t x6656 = (x6655)._1;
//         number_t x6657 = (x6655)._2;
//         number_t x6658 = (x6656) * (x6282);
//         number_t x6659 = (x6657) * (x6282);
//         number_t x6660 = (x6656) * (x6414);
//         number_t x6661 = (x6659) + (x6660);
//         number_t x6662 = (x6658) * (x6651);
//         number_t x6663 = (x6661) * (x6651);
//         number_t x6664 = (x6658) * (x6652);
//         number_t x6665 = (x6663) + (x6664);
//         number_t x6666 = (xs->arr[x6654]);
//         index_t x6667 = (i) == (x6654);
//         index_t x6668;
//         if (x6667) {
//           x6668 = 1;
//         } else {
//           x6668 = 0;
//         }
//         number_t x6669 = (x6662) * (x6282);
//         number_t x6670 = (x6665) * (x6282);
//         number_t x6671 = (x6662) * (x6414);
//         number_t x6672 = (x6670) + (x6671);
//         number_t x6673 = (x6666) + (x6669);
//         number_t x6674 = (x6668) + (x6672);
//         tuple_number_t_number_t x6675 = (tuple_number_t_number_t){._1=x6673, ._2=x6674};
//         number_t x6676 = (x6675)._2;
//         x6677->arr[i00] = x6676;
        
//       }
//       x6678->arr[i0] = x6677;
      
//     }
//     x6679->arr[i] = x6678;
    
//   }
//   return x6679;
// }
//   array_array_array_tuple_number_t_number_t m = (array_array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m->length=(xs)->length;m->arr = (array_array_tuple_number_t_number_t*)storage_alloc(sizeof(array_array_tuple_number_t_number_t) * (xs)->length);
//   for(int ii = 0; ii < m->length; ii++){
//     index_t n0 = (xs)->length;
//     array_index_t v2 = (array_index_t)storage_alloc(sizeof(int) * 2);v2->length=n0;v2->arr = (index_t*)storage_alloc(sizeof(index_t) * n0);
//     for(int j = 0; j < v2->length; j++){
//       index_t x6230;
//       if ((ii) == (j)) {
//         x6230 = 1;
//       } else {
//         x6230 = 0;
//       }
//       v2->arr[j] = x6230;
      
//     }
//     array_tuple_number_t_index_t xs_d = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);xs_d->length=(xs)->length;xs_d->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (xs)->length);
//     for(int j = 0; j < xs_d->length; j++){
//       tuple_number_t_index_t x6231 = (tuple_number_t_index_t){._1=(xs->arr[j]), ._2=(v2->arr[j])};
//       xs_d->arr[j] = x6231;
      
//     }
//     index_t n_d = n;
//     array_array_tuple_number_t_number_t x6255 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6255->length=n_d;x6255->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * n_d);
//     for(int x5469 = 0; x5469 < x6255->length; x5469++){
//       tuple_index_t_index_t idx = (tuple_index_t_index_t){._1=x5469, ._2=0};
//       tuple_index_t_index_t x5476 = (tuple_index_t_index_t){._1=11, ._2=0};
//       tuple_index_t_index_t x5488 = (tuple_index_t_index_t){._1=3, ._2=0};
//       index_t x5492 = (x5488)._1;
//       index_t x5490 = (x5488)._2;
//       index_t x5493 = (idx)._1;
//       index_t x5491 = (idx)._2;
//       tuple_index_t_index_t x5477 = (tuple_index_t_index_t){._1=(x5492) * (x5493), ._2=((x5490) * (x5493)) + ((x5492) * (x5491))};
//       index_t x5480 = (x5476)._1;
//       index_t x5478 = (x5476)._2;
//       index_t x5481 = (x5477)._1;
//       index_t x5479 = (x5477)._2;
//       tuple_index_t_index_t offset = (tuple_index_t_index_t){._1=(x5480) + (x5481), ._2=(x5478) + (x5479)};
//       tuple_index_t_index_t x6232 = (tuple_index_t_index_t){._1=3, ._2=0};
//       tuple_index_t_index_t l = (tuple_index_t_index_t){._1=(x6232)._1, ._2=0};
//       tuple_number_t_number_t x6234 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t sqtheta = x6234;
//       for (int x5509 = 0; x5509 < (l)._1; x5509++) {
//         tuple_number_t_number_t x5508 = sqtheta;
//         tuple_index_t_index_t idx0 = (tuple_index_t_index_t){._1=x5509, ._2=0};
//         // tuple_number_t_number_t x10 = (xs_d->arr[(idx0)._1]);
//         number_t x5622 = (xs_d->arr[(idx0)._1])._1;
//         index_t x5620 = (xs_d->arr[(idx0)._1])._2;
//         number_t x5623 = (xs_d->arr[(idx0)._1])._1;
//         index_t x5621 = (xs_d->arr[(idx0)._1])._2;
//         tuple_number_t_number_t cur = (tuple_number_t_number_t){._1=(x5622) * (x5623), ._2=((x5620) * (x5623)) + ((x5622) * (x5621))};
//         number_t x5634 = (x5508)._1;
//         number_t x5632 = (x5508)._2;
//         number_t x5635 = (cur)._1;
//         number_t x5633 = (cur)._2;
//         tuple_number_t_number_t x6233 = (tuple_number_t_number_t){._1=(x5634) + (x5635), ._2=(x5632) + (x5633)};
//         x5508 = x6233;
//         sqtheta = x5508;
//       }
      
//       number_t x5517 = sqrt((sqtheta)._1);
//       tuple_number_t_number_t theta = (tuple_number_t_number_t){._1=x5517, ._2=((sqtheta)._2) / ((2) * (x5517))};
//       // printf("theta %f, %f\n", theta._1, theta._2);
//       number_t x5533 = (theta)._1;
//       tuple_number_t_number_t costheta = (tuple_number_t_number_t){._1=cos(x5533), ._2=((theta)._2) * (-(sin(x5533)))};
//       number_t x5585 = (theta)._1;
//       tuple_number_t_number_t sintheta = (tuple_number_t_number_t){._1=sin(x5585), ._2=((theta)._2) * (cos(x5585))};
//       tuple_index_t_index_t x5606 = (tuple_index_t_index_t){._1=1, ._2=0};
//       index_t x5610 = (x5606)._1;
//       index_t x5608 = (x5606)._2;
//       number_t x5611 = (theta)._1;
//       number_t x5609 = (theta)._2;
//       tuple_number_t_number_t theta_inv = (tuple_number_t_number_t){._1=(x5610) / (x5611), ._2=(((x5608) * (x5611)) - ((x5610) * (x5609))) / ((x5611) * (x5611))};
//       tuple_index_t_index_t i1 = (tuple_index_t_index_t){._1=1, ._2=0};
//       tuple_number_t_index_t xi = (xs_d->arr[(i1)._1]);
//       number_t x5904 = (xi)._1;
//       index_t x5902 = (xi)._2;
//       number_t x5905 = (theta_inv)._1;
//       number_t x5903 = (theta_inv)._2;
//       tuple_number_t_number_t x5738 = (tuple_number_t_number_t){._1=(x5904) * (x5905), ._2=((x5902) * (x5905)) + ((x5904) * (x5903))};
//       tuple_index_t_index_t x5828 = (tuple_index_t_index_t){._1=2, ._2=0};
//       index_t x5832 = (x5828)._1;
//       index_t x5830 = (x5828)._2;
//       index_t x5833 = (offset)._1;
//       index_t x5831 = (offset)._2;
//       tuple_index_t_index_t x6235 = (tuple_index_t_index_t){._1=(x5832) + (x5833), ._2=(x5830) + (x5831)};
//       tuple_number_t_index_t x00 = (xs_d->arr[(x6235)._1]);
//       tuple_index_t_index_t i10 = (tuple_index_t_index_t){._1=5, ._2=0};
//       tuple_number_t_index_t y0 = (xs_d->arr[(i10)._1]);
//       number_t x6000 = (x00)._1;
//       index_t x5998 = (x00)._2;
//       number_t x6001 = (y0)._1;
//       index_t x5999 = (y0)._2;
//       tuple_number_t_index_t x5739 = (tuple_number_t_index_t){._1=(x6000) - (x6001), ._2=(x5998) - (x5999)};
//       number_t x5742 = (x5738)._1;
//       number_t x5740 = (x5738)._2;
//       number_t x5743 = (x5739)._1;
//       index_t x5741 = (x5739)._2;
//       tuple_number_t_number_t x5678 = (tuple_number_t_number_t){._1=(x5742) * (x5743), ._2=((x5740) * (x5743)) + ((x5742) * (x5741))};
//       tuple_index_t_index_t i100 = (tuple_index_t_index_t){._1=2, ._2=0};
//       tuple_number_t_index_t xi0 = (xs_d->arr[(i100)._1]);
//       number_t x5892 = (xi0)._1;
//       index_t x5890 = (xi0)._2;
//       number_t x5893 = (theta_inv)._1;
//       number_t x5891 = (theta_inv)._2;
//       tuple_number_t_number_t x5726 = (tuple_number_t_number_t){._1=(x5892) * (x5893), ._2=((x5890) * (x5893)) + ((x5892) * (x5891))};
//       tuple_index_t_index_t x5816 = (tuple_index_t_index_t){._1=1, ._2=0};
//       index_t x5820 = (x5816)._1;
//       index_t x5818 = (x5816)._2;
//       index_t x5821 = (offset)._1;
//       index_t x5819 = (offset)._2;
//       tuple_index_t_index_t x6236 = (tuple_index_t_index_t){._1=(x5820) + (x5821), ._2=(x5818) + (x5819)};
//       tuple_number_t_index_t x000 = (xs_d->arr[(x6236)._1]);
//       tuple_index_t_index_t i11 = (tuple_index_t_index_t){._1=4, ._2=0};
//       tuple_number_t_index_t y00 = (xs_d->arr[(i11)._1]);
//       number_t x5988 = (x000)._1;
//       index_t x5986 = (x000)._2;
//       number_t x5989 = (y00)._1;
//       index_t x5987 = (y00)._2;
//       tuple_number_t_index_t x5727 = (tuple_number_t_index_t){._1=(x5988) - (x5989), ._2=(x5986) - (x5987)};
//       number_t x5730 = (x5726)._1;
//       number_t x5728 = (x5726)._2;
//       number_t x5731 = (x5727)._1;
//       index_t x5729 = (x5727)._2;
//       tuple_number_t_number_t x5679 = (tuple_number_t_number_t){._1=(x5730) * (x5731), ._2=((x5728) * (x5731)) + ((x5730) * (x5729))};
//       number_t x5682 = (x5678)._1;
//       number_t x5680 = (x5678)._2;
//       number_t x5683 = (x5679)._1;
//       number_t x5681 = (x5679)._2;
//       tuple_number_t_number_t x6237 = (tuple_number_t_number_t){._1=(x5682) - (x5683), ._2=(x5680) - (x5681)};
//       tuple_index_t_index_t i12 = (tuple_index_t_index_t){._1=2, ._2=0};
//       tuple_number_t_index_t xi1 = (xs_d->arr[(i12)._1]);
//       number_t x5928 = (xi1)._1;
//       index_t x5926 = (xi1)._2;
//       number_t x5929 = (theta_inv)._1;
//       number_t x5927 = (theta_inv)._2;
//       tuple_number_t_number_t x5762 = (tuple_number_t_number_t){._1=(x5928) * (x5929), ._2=((x5926) * (x5929)) + ((x5928) * (x5927))};
//       tuple_number_t_index_t x001 = (xs_d->arr[(offset)._1]);
//       tuple_index_t_index_t i101 = (tuple_index_t_index_t){._1=3, ._2=0};
//       tuple_number_t_index_t y01 = (xs_d->arr[(i101)._1]);
//       number_t x6024 = (x001)._1;
//       index_t x6022 = (x001)._2;
//       number_t x6025 = (y01)._1;
//       index_t x6023 = (y01)._2;
//       tuple_number_t_index_t x5763 = (tuple_number_t_index_t){._1=(x6024) - (x6025), ._2=(x6022) - (x6023)};
//       number_t x5766 = (x5762)._1;
//       number_t x5764 = (x5762)._2;
//       number_t x5767 = (x5763)._1;
//       index_t x5765 = (x5763)._2;
//       tuple_number_t_number_t x5690 = (tuple_number_t_number_t){._1=(x5766) * (x5767), ._2=((x5764) * (x5767)) + ((x5766) * (x5765))};
//       tuple_index_t_index_t i1000 = (tuple_index_t_index_t){._1=0, ._2=0};
//       tuple_number_t_index_t xi00 = (xs_d->arr[(i1000)._1]);
//       number_t x5916 = (xi00)._1;
//       index_t x5914 = (xi00)._2;
//       number_t x5917 = (theta_inv)._1;
//       number_t x5915 = (theta_inv)._2;
//       tuple_number_t_number_t x5750 = (tuple_number_t_number_t){._1=(x5916) * (x5917), ._2=((x5914) * (x5917)) + ((x5916) * (x5915))};
//       tuple_index_t_index_t x5840 = (tuple_index_t_index_t){._1=2, ._2=0};
//       index_t x5844 = (x5840)._1;
//       index_t x5842 = (x5840)._2;
//       index_t x5845 = (offset)._1;
//       index_t x5843 = (offset)._2;
//       tuple_index_t_index_t x6238 = (tuple_index_t_index_t){._1=(x5844) + (x5845), ._2=(x5842) + (x5843)};
//       tuple_number_t_index_t x0000 = (xs_d->arr[(x6238)._1]);
//       tuple_index_t_index_t i110 = (tuple_index_t_index_t){._1=5, ._2=0};
//       tuple_number_t_index_t y000 = (xs_d->arr[(i110)._1]);
//       number_t x6012 = (x0000)._1;
//       index_t x6010 = (x0000)._2;
//       number_t x6013 = (y000)._1;
//       index_t x6011 = (y000)._2;
//       tuple_number_t_index_t x5751 = (tuple_number_t_index_t){._1=(x6012) - (x6013), ._2=(x6010) - (x6011)};
//       number_t x5754 = (x5750)._1;
//       number_t x5752 = (x5750)._2;
//       number_t x5755 = (x5751)._1;
//       index_t x5753 = (x5751)._2;
//       tuple_number_t_number_t x5691 = (tuple_number_t_number_t){._1=(x5754) * (x5755), ._2=((x5752) * (x5755)) + ((x5754) * (x5753))};
//       number_t x5694 = (x5690)._1;
//       number_t x5692 = (x5690)._2;
//       number_t x5695 = (x5691)._1;
//       number_t x5693 = (x5691)._2;
//       tuple_number_t_number_t x6239 = (tuple_number_t_number_t){._1=(x5694) - (x5695), ._2=(x5692) - (x5693)};
//       tuple_index_t_index_t i13 = (tuple_index_t_index_t){._1=0, ._2=0};
//       tuple_number_t_index_t xi2 = (xs_d->arr[(i13)._1]);
//       number_t x5952 = (xi2)._1;
//       index_t x5950 = (xi2)._2;
//       number_t x5953 = (theta_inv)._1;
//       number_t x5951 = (theta_inv)._2;
//       tuple_number_t_number_t x5786 = (tuple_number_t_number_t){._1=(x5952) * (x5953), ._2=((x5950) * (x5953)) + ((x5952) * (x5951))};
//       tuple_index_t_index_t x5852 = (tuple_index_t_index_t){._1=1, ._2=0};
//       index_t x5856 = (x5852)._1;
//       index_t x5854 = (x5852)._2;
//       index_t x5857 = (offset)._1;
//       index_t x5855 = (offset)._2;
//       tuple_index_t_index_t x6240 = (tuple_index_t_index_t){._1=(x5856) + (x5857), ._2=(x5854) + (x5855)};
//       tuple_number_t_index_t x002 = (xs_d->arr[(x6240)._1]);
//       tuple_index_t_index_t i102 = (tuple_index_t_index_t){._1=4, ._2=0};
//       tuple_number_t_index_t y02 = (xs_d->arr[(i102)._1]);
//       number_t x6048 = (x002)._1;
//       index_t x6046 = (x002)._2;
//       number_t x6049 = (y02)._1;
//       index_t x6047 = (y02)._2;
//       tuple_number_t_index_t x5787 = (tuple_number_t_index_t){._1=(x6048) - (x6049), ._2=(x6046) - (x6047)};
//       number_t x5790 = (x5786)._1;
//       number_t x5788 = (x5786)._2;
//       number_t x5791 = (x5787)._1;
//       index_t x5789 = (x5787)._2;
//       tuple_number_t_number_t x5702 = (tuple_number_t_number_t){._1=(x5790) * (x5791), ._2=((x5788) * (x5791)) + ((x5790) * (x5789))};
//       tuple_index_t_index_t i1001 = (tuple_index_t_index_t){._1=1, ._2=0};
//       tuple_number_t_index_t xi01 = (xs_d->arr[(i1001)._1]);
//       number_t x5940 = (xi01)._1;
//       index_t x5938 = (xi01)._2;
//       number_t x5941 = (theta_inv)._1;
//       number_t x5939 = (theta_inv)._2;
//       tuple_number_t_number_t x5774 = (tuple_number_t_number_t){._1=(x5940) * (x5941), ._2=((x5938) * (x5941)) + ((x5940) * (x5939))};
//       tuple_number_t_index_t x0001 = (xs_d->arr[(offset)._1]);
//       tuple_index_t_index_t i111 = (tuple_index_t_index_t){._1=3, ._2=0};
//       tuple_number_t_index_t y001 = (xs_d->arr[(i111)._1]);
//       number_t x6036 = (x0001)._1;
//       index_t x6034 = (x0001)._2;
//       number_t x6037 = (y001)._1;
//       index_t x6035 = (y001)._2;
//       tuple_number_t_index_t x5775 = (tuple_number_t_index_t){._1=(x6036) - (x6037), ._2=(x6034) - (x6035)};
//       number_t x5778 = (x5774)._1;
//       number_t x5776 = (x5774)._2;
//       number_t x5779 = (x5775)._1;
//       index_t x5777 = (x5775)._2;
//       tuple_number_t_number_t x5703 = (tuple_number_t_number_t){._1=(x5778) * (x5779), ._2=((x5776) * (x5779)) + ((x5778) * (x5777))};
//       number_t x5706 = (x5702)._1;
//       number_t x5704 = (x5702)._2;
//       number_t x5707 = (x5703)._1;
//       number_t x5705 = (x5703)._2;
//       tuple_number_t_number_t x6241 = (tuple_number_t_number_t){._1=(x5706) - (x5707), ._2=(x5704) - (x5705)};
//       array_tuple_number_t_number_t w_cross_X = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       w_cross_X->arr[0] = x6237;
//       w_cross_X->arr[1] = x6239;
//       w_cross_X->arr[2] = x6241;
//       // array_tuple_print(w_cross_X);
//       tuple_index_t_index_t x6242 = (tuple_index_t_index_t){._1=3, ._2=0};
//       tuple_index_t_index_t l0 = (tuple_index_t_index_t){._1=(x6242)._1, ._2=0};
//       tuple_number_t_number_t x6245 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t x5714 = x6245;
//       // printf("thetai %f\n", (theta_inv)._2);
//       for (int x5809 = 0; x5809 < (l0)._1; x5809++) {
//         tuple_number_t_number_t x5808 = x5714;
//         tuple_index_t_index_t idx0 = (tuple_index_t_index_t){._1=x5809, ._2=0};
//         // tuple_number_t_number_t xi10 = (xs_d->arr[(idx0)._1]);
//         number_t x6096 = (xs_d->arr[(idx0)._1])._1;
//         index_t x6094 = (xs_d->arr[(idx0)._1])._2;
//         number_t x6097 = (theta_inv)._1;
//         number_t x6095 = (theta_inv)._2;
//         tuple_number_t_number_t x0010 = (tuple_number_t_number_t){._1=(x6096) * (x6097), ._2=((x6094) * (x6097)) + ((x6096) * (x6095))};
//         index_t x6120 = (idx0)._1;
//         index_t x6118 = (idx0)._2;
//         index_t x6121 = (offset)._1;
//         index_t x6119 = (offset)._2;
//         tuple_index_t_index_t x6243 = (tuple_index_t_index_t){._1=(x6120) + (x6121), ._2=(x6118) + (x6119)};
//         // tuple_number_t_number_t x00000 = (xs_d->arr[(x6243)._1]);
//         tuple_index_t_index_t x6129 = (tuple_index_t_index_t){._1=3, ._2=0};
//         index_t x6132 = (idx0)._1;
//         index_t x6130 = (idx0)._2;
//         index_t x6133 = (x6129)._1;
//         index_t x6131 = (x6129)._2;
//         tuple_index_t_index_t i20 = (tuple_index_t_index_t){._1=(x6132) + (x6133), ._2=(x6130) + (x6131)};
//         tuple_number_t_index_t y010 = (xs_d->arr[(i20)._1]);
//         number_t x6168 = (xs_d->arr[(x6243)._1])._1;
//         index_t x6166 = (xs_d->arr[(x6243)._1])._2;
//         number_t x6169 = (y010)._1;
//         index_t x6167 = (y010)._2;
//         tuple_number_t_number_t y0000 = (tuple_number_t_number_t){._1=(x6168) - (x6169), ._2=(x6166) - (x6167)};
//         // printf("sub %f, %f\n", y0000._1, y0000._2);
//         // printf("w %f\n", ((x6094) * (x6097)) + ((x6096) * (x6095)));
//         // printf("rot %f, %d\n", x6096, x6094);
//         number_t x6180 = (x0010)._1;
//         number_t x6178 = (x0010)._2;
//         number_t x6181 = (y0000)._1;
//         index_t x6179 = (y0000)._2;
//         tuple_number_t_number_t cur = (tuple_number_t_number_t){._1=(x6180) * (x6181), ._2=((x6178) * (x6181)) + ((x6180) * (x6179))};
//         number_t x6192 = (x5808)._1;
//         number_t x6190 = (x5808)._2;
//         number_t x6193 = (cur)._1;
//         number_t x6191 = (cur)._2;
//         tuple_number_t_number_t x6244 = (tuple_number_t_number_t){._1=(x6192) + (x6193), ._2=(x6190) + (x6191)};
//         x5808 = x6244;
//         x5714 = x5808;
//       }
//       // printf("dot %f, %f\n", x5714._1, x5714._2);
//       // printf("tmp %f, %f\n", tmp, tmpd);
      
//       tuple_index_t_index_t x5800 = (tuple_index_t_index_t){._1=1, ._2=0};
//       index_t x5804 = (x5800)._1;
//       index_t x5802 = (x5800)._2;
//       number_t x5805 = (costheta)._1;
//       number_t x5803 = (costheta)._2;
//       tuple_number_t_number_t x5715 = (tuple_number_t_number_t){._1=(x5804) - (x5805), ._2=(x5802) - (x5803)};
//       number_t x5718 = (x5714)._1;
//       number_t x5716 = (x5714)._2;
//       number_t x5719 = (x5715)._1;
//       number_t x5717 = (x5715)._2;
//       tuple_number_t_number_t tmp = (tuple_number_t_number_t){._1=(x5718) * (x5719), ._2=((x5716) * (x5719)) + ((x5718) * (x5717))};
//       array_tuple_number_t_number_t x6248 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6248->length=3;x6248->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       for(int x5793 = 0; x5793 < x6248->length; x5793++){
//         tuple_index_t_index_t i = (tuple_index_t_index_t){._1=x5793, ._2=0};
//         index_t x5880 = (i)._1;
//         index_t x5878 = (i)._2;
//         index_t x5881 = (offset)._1;
//         index_t x5879 = (offset)._2;
//         tuple_index_t_index_t x6246 = (tuple_index_t_index_t){._1=(x5880) + (x5881), ._2=(x5878) + (x5879)};
//         tuple_number_t_index_t x0010 = (xs_d->arr[(x6246)._1]);
//         tuple_index_t_index_t x5961 = (tuple_index_t_index_t){._1=3, ._2=0};
//         index_t x5964 = (i)._1;
//         index_t x5962 = (i)._2;
//         index_t x5965 = (x5961)._1;
//         index_t x5963 = (x5961)._2;
//         tuple_index_t_index_t i4 = (tuple_index_t_index_t){._1=(x5964) + (x5965), ._2=(x5962) + (x5963)};
//         tuple_number_t_index_t y010 = (xs_d->arr[(i4)._1]);
//         number_t x6084 = (x0010)._1;
//         index_t x6082 = (x0010)._2;
//         number_t x6085 = (y010)._1;
//         index_t x6083 = (y010)._2;
//         tuple_number_t_number_t xi10 = (tuple_number_t_number_t){._1=(x6084) - (x6085), ._2=(x6082) - (x6083)};
//         number_t x6108 = (xi10)._1;
//         index_t x6106 = (xi10)._2;
//         number_t x6109 = (costheta)._1;
//         number_t x6107 = (costheta)._2;
//         tuple_number_t_number_t x00000 = (tuple_number_t_number_t){._1=(x6108) * (x6109), ._2=((x6106) * (x6109)) + ((x6108) * (x6107))};
//         tuple_number_t_number_t xi000 = (w_cross_X->arr[(i)._1]);
//         number_t x6144 = (xi000)._1;
//         number_t x6142 = (xi000)._2;
//         number_t x6145 = (sintheta)._1;
//         number_t x6143 = (sintheta)._2;
//         tuple_number_t_number_t y0000 = (tuple_number_t_number_t){._1=(x6144) * (x6145), ._2=((x6142) * (x6145)) + ((x6144) * (x6143))};
//         number_t x6156 = (x00000)._1;
//         number_t x6154 = (x00000)._2;
//         number_t x6157 = (y0000)._1;
//         number_t x6155 = (y0000)._2;
//         tuple_number_t_number_t x00100 = (tuple_number_t_number_t){._1=(x6156) + (x6157), ._2=(x6154) + (x6155)};
//         tuple_number_t_index_t xi100 = (xs_d->arr[(i)._1]);
//         number_t x6204 = (xi100)._1;
//         index_t x6202 = (xi100)._2;
//         number_t x6205 = (theta_inv)._1;
//         number_t x6203 = (theta_inv)._2;
//         tuple_number_t_number_t xi0000 = (tuple_number_t_number_t){._1=(x6204) * (x6205), ._2=((x6202) * (x6205)) + ((x6204) * (x6203))};
//         number_t x6216 = (xi0000)._1;
//         number_t x6214 = (xi0000)._2;
//         number_t x6217 = (tmp)._1;
//         number_t x6215 = (tmp)._2;
//         tuple_number_t_number_t y0100 = (tuple_number_t_number_t){._1=(x6216) * (x6217), ._2=((x6214) * (x6217)) + ((x6216) * (x6215))};
//         number_t x6228 = (x00100)._1;
//         number_t x6226 = (x00100)._2;
//         number_t x6229 = (y0100)._1;
//         number_t x6227 = (y0100)._2;
//         tuple_number_t_number_t x6247 = (tuple_number_t_number_t){._1=(x6228) + (x6229), ._2=(x6226) + (x6227)};
//         x6248->arr[x5793] = x6247;
        
//       }
//       array_tuple_number_t_number_t Xcam = x6248;
//       // array_tuple_print(Xcam);
//       // array_print(array_tuple_2(xs_d));
//       // printf("Xcam created!\t");
//       tuple_index_t_index_t x5500 = (tuple_index_t_index_t){._1=1, ._2=0};
//       tuple_index_t_index_t x6249 = (tuple_index_t_index_t){._1=2, ._2=0};
//       tuple_number_t_number_t x5501 = (Xcam->arr[(x6249)._1]);
//       index_t x5504 = (x5500)._1;
//       index_t x5502 = (x5500)._2;
//       number_t x5505 = (x5501)._1;
//       number_t x5503 = (x5501)._2;
//       tuple_number_t_number_t y = (tuple_number_t_number_t){._1=(x5504) / (x5505), ._2=(((x5502) * (x5505)) - ((x5504) * (x5503))) / ((x5505) * (x5505))};
//       tuple_index_t_index_t x6250 = (tuple_index_t_index_t){._1=2, ._2=0};
//       tuple_index_t_index_t l1 = (tuple_index_t_index_t){._1=(x6250)._1, ._2=0};
//       tuple_number_t_number_t x6252 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t rsq = x6252;
//       for (int x5513 = 0; x5513 < (l1)._1; x5513++) {
//         tuple_number_t_number_t x5512 = rsq;
//         tuple_index_t_index_t idx0 = (tuple_index_t_index_t){._1=x5513, ._2=0};
//         tuple_number_t_number_t xi10 = (Xcam->arr[(idx0)._1]);
//         number_t x5598 = (xi10)._1;
//         number_t x5596 = (xi10)._2;
//         number_t x5599 = (y)._1;
//         number_t x5597 = (y)._2;
//         tuple_number_t_number_t x10 = (tuple_number_t_number_t){._1=(x5598) * (x5599), ._2=((x5596) * (x5599)) + ((x5598) * (x5597))};
//         number_t x5646 = (x10)._1;
//         number_t x5644 = (x10)._2;
//         number_t x5647 = (x10)._1;
//         number_t x5645 = (x10)._2;
//         tuple_number_t_number_t cur = (tuple_number_t_number_t){._1=(x5646) * (x5647), ._2=((x5644) * (x5647)) + ((x5646) * (x5645))};
//         number_t x5670 = (x5512)._1;
//         number_t x5668 = (x5512)._2;
//         number_t x5671 = (cur)._1;
//         number_t x5669 = (cur)._2;
//         tuple_number_t_number_t x6251 = (tuple_number_t_number_t){._1=(x5670) + (x5671), ._2=(x5668) + (x5669)};
//         x5512 = x6251;
//         rsq = x5512;
//       }
//       // printf("rsq %f, %f\n", rsq._1, rsq._2);
//       // printf("rsq created!\t");
//       tuple_index_t_index_t x5552 = (tuple_index_t_index_t){._1=1, ._2=0};
//       tuple_index_t_index_t i0 = (tuple_index_t_index_t){._1=9, ._2=0};
//       tuple_number_t_index_t x5576 = (xs_d->arr[(i0)._1]);
//       number_t x5580 = (x5576)._1;
//       index_t x5578 = (x5576)._2;
//       number_t x5581 = (rsq)._1;
//       number_t x5579 = (rsq)._2;
//       tuple_number_t_number_t x5553 = (tuple_number_t_number_t){._1=(x5580) * (x5581), ._2=((x5578) * (x5581)) + ((x5580) * (x5579))};
//       index_t x5556 = (x5552)._1;
//       index_t x5554 = (x5552)._2;
//       number_t x5557 = (x5553)._1;
//       number_t x5555 = (x5553)._2;
//       tuple_number_t_number_t x5524 = (tuple_number_t_number_t){._1=(x5556) + (x5557), ._2=(x5554) + (x5555)};
//       tuple_index_t_index_t i00 = (tuple_index_t_index_t){._1=10, ._2=0};
//       tuple_number_t_index_t x5564 = (xs_d->arr[(i00)._1]);
//       number_t x5568 = (x5564)._1;
//       index_t x5566 = (x5564)._2;
//       number_t x5569 = (rsq)._1;
//       number_t x5567 = (rsq)._2;
//       tuple_number_t_number_t x5540 = (tuple_number_t_number_t){._1=(x5568) * (x5569), ._2=((x5566) * (x5569)) + ((x5568) * (x5567))};
//       number_t x5544 = (x5540)._1;
//       number_t x5542 = (x5540)._2;
//       number_t x5545 = (rsq)._1;
//       number_t x5543 = (rsq)._2;
//       tuple_number_t_number_t x5525 = (tuple_number_t_number_t){._1=(x5544) * (x5545), ._2=((x5542) * (x5545)) + ((x5544) * (x5543))};
//       number_t x5528 = (x5524)._1;
//       number_t x5526 = (x5524)._2;
//       number_t x5529 = (x5525)._1;
//       number_t x5527 = (x5525)._2;
//       tuple_number_t_number_t L = (tuple_number_t_number_t){._1=(x5528) + (x5529), ._2=(x5526) + (x5527)};
//       tuple_index_t_index_t x6253 = (tuple_index_t_index_t){._1=6, ._2=0};
//       tuple_number_t_index_t y010 = (xs_d->arr[(x6253)._1]);
//       // printf("L %f, %f\n", L._1, L._2);
//       array_tuple_number_t_number_t m2 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m2->length=2;m2->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
//       for(int x5587 = 0; x5587 < m2->length; x5587++){
//         tuple_index_t_index_t i = (tuple_index_t_index_t){._1=x5587, ._2=0};
//         tuple_index_t_index_t x5655 = (tuple_index_t_index_t){._1=7, ._2=0};
//         index_t x5658 = (i)._1;
//         index_t x5656 = (i)._2;
//         index_t x5659 = (x5655)._1;
//         index_t x5657 = (x5655)._2;
//         tuple_index_t_index_t i120 = (tuple_index_t_index_t){._1=(x5658) + (x5659), ._2=(x5656) + (x5657)};
//         tuple_number_t_index_t x0010 = (xs_d->arr[(i120)._1]);
//         tuple_number_t_number_t xi10 = (Xcam->arr[(i)._1]);
//         number_t x5868 = (xi10)._1;
//         number_t x5866 = (xi10)._2;
//         number_t x5869 = (y010)._1;
//         index_t x5867 = (y010)._2;
//         tuple_number_t_number_t xi000 = (tuple_number_t_number_t){._1=(x5868) * (x5869), ._2=((x5866) * (x5869)) + ((x5868) * (x5867))};
//         number_t x5976 = (xi000)._1;
//         number_t x5974 = (xi000)._2;
//         number_t x5977 = (L)._1;
//         number_t x5975 = (L)._2;
//         tuple_number_t_number_t xi0000 = (tuple_number_t_number_t){._1=(x5976) * (x5977), ._2=((x5974) * (x5977)) + ((x5976) * (x5975))};
//         number_t x6060 = (xi0000)._1;
//         number_t x6058 = (xi0000)._2;
//         number_t x6061 = (y010)._1;
//         index_t x6059 = (y010)._2;
//         tuple_number_t_number_t y0000 = (tuple_number_t_number_t){._1=(x6060) * (x6061), ._2=((x6058) * (x6061)) + ((x6060) * (x6059))};
//         number_t x6072 = (x0010)._1;
//         index_t x6070 = (x0010)._2;
//         number_t x6073 = (y0000)._1;
//         number_t x6071 = (y0000)._2;
//         tuple_number_t_number_t x6254 = (tuple_number_t_number_t){._1=(x6072) + (x6073), ._2=(x6070) + (x6071)};
//         m2->arr[x5587] = x6254;
        
//       }
//       array_tuple_print(m2);
//       // printf("m2 created!\n");
//       x6255->arr[x5469] = m2;
//     }
//     // printf("m computed!\n");
//     m->arr[ii] = x6255;
//     // printf("m assigned!\n");
//   }
//   // printf("here!\n");
//   array_array_array_number_t x6258 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x6258->length=(m)->length;x6258->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (m)->length);
//   for(int i = 0; i < x6258->length; i++){
//     array_array_tuple_number_t_number_t m0 = (m->arr[i]);
//     array_array_number_t x6257 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x6257->length=(m0)->length;x6257->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m0)->length);
//     for(int i0 = 0; i0 < x6257->length; i0++){
//       array_tuple_number_t_number_t v = (m0->arr[i0]);
//       array_number_t x6256 = (array_number_t)storage_alloc(sizeof(int) * 2);x6256->length=(v)->length;x6256->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
//       for(int i00 = 0; i00 < x6256->length; i00++){
//         tuple_number_t_number_t s = (v->arr[i00]);
//         x6256->arr[i00] = (s)._2;
        
//       }
//       x6257->arr[i0] = x6256;
      
//     }
//     x6258->arr[i] = x6257;
    
//   }
//   return x6258;
// }
//   array_array_array_tuple_number_t_number_t m = (array_array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m->length=(xs)->length;m->arr = (array_array_tuple_number_t_number_t*)storage_alloc(sizeof(array_array_tuple_number_t_number_t) * (xs)->length);
//   for(int ii = 0; ii < m->length; ii++){
//     index_t x6281 = (xs)->length;
//     array_index_t x6331 = (array_index_t)storage_alloc(sizeof(int) * 2);x6331->length=x6281;x6331->arr = (index_t*)storage_alloc(sizeof(index_t) * x6281);
//     for(int j = 0; j < x6331->length; j++){
//       index_t x7230;
//       if ((ii) == (j)) {
//         x7230 = 1;
//       } else {
//         x7230 = 0;
//       }
//       x6331->arr[j] = x7230;
      
//     }
//     array_tuple_number_t_index_t x6345 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x6345->length=(xs)->length;x6345->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (xs)->length);
//     for(int j = 0; j < x6345->length; j++){
//       tuple_number_t_index_t x7231 = (tuple_number_t_index_t){._1=(xs->arr[j]), ._2=(x6331->arr[j])};
//       x6345->arr[j] = x7231;
      
//     }
//     index_t n_d = n;
//     array_array_tuple_number_t_number_t x7252 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x7252->length=n_d;x7252->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * n_d);
//     for(int x5469 = 0; x5469 < x7252->length; x5469++){
//       index_t x5481 = (3) * (x5469);
//       index_t x5479 = ((0) * (x5469)) + ((3) * (0));
//       tuple_number_t_number_t x7233 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t x6279 = x7233;
//       for (int x5509 = 0; x5509 < 3; x5509++) {
//         tuple_number_t_number_t x5508 = x6279;
//         tuple_number_t_index_t x10 = (x6345->arr[x5509]);
//         number_t x5624 = (x10)._1;
//         index_t x5622 = (x10)._2;
//         number_t x5625 = (x10)._1;
//         index_t x5623 = (x10)._2;
//         number_t x5636 = (x5508)._1;
//         number_t x5634 = (x5508)._2;
//         number_t x5637 = (x5624) * (x5625);
//         number_t x5635 = ((x5622) * (x5625)) + ((x5624) * (x5623));
//         tuple_number_t_number_t x7232 = (tuple_number_t_number_t){._1=(x5636) + (x5637), ._2=(x5634) + (x5635)};
//         x5508 = x7232;
//         x6279 = x5508;
//       }
      
//       number_t x6329 = sqrt((x6279)._1);
//       number_t x6343 = ((x6279)._2) / ((2) * (x6329));
//       tuple_number_t_index_t x6357 = (x6345->arr[1]);
//       number_t x6369 = (x6357)._1;
//       index_t x6381 = (x6357)._2;
//       number_t x6393 = (1) / (x6329);
//       number_t x6405 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       index_t x6417 = (11) + (x5481);
//       index_t x6429 = (0) + (x5479);
//       tuple_index_t_index_t x7234 = (tuple_index_t_index_t){._1=(2) + (x6417), ._2=(0) + (x6429)};
//       tuple_number_t_index_t x6441 = (x6345->arr[(x7234)._1]);
//       tuple_number_t_index_t x6453 = (x6345->arr[5]);
//       number_t x6465 = (x6441)._1;
//       index_t x6477 = (x6441)._2;
//       number_t x6489 = (x6453)._1;
//       index_t x6501 = (x6453)._2;
//       number_t x6513 = (x6369) * (x6393);
//       number_t x6525 = ((x6381) * (x6393)) + ((x6369) * (x6405));
//       number_t x6537 = (x6465) - (x6489);
//       index_t x6549 = (x6477) - (x6501);
//       tuple_number_t_index_t x6561 = (x6345->arr[2]);
//       number_t x6573 = (x6561)._1;
//       index_t x6585 = (x6561)._2;
//       number_t x6597 = (1) / (x6329);
//       number_t x6605 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       index_t x6613 = (11) + (x5481);
//       index_t x6621 = (0) + (x5479);
//       tuple_index_t_index_t x7235 = (tuple_index_t_index_t){._1=(1) + (x6613), ._2=(0) + (x6621)};
//       tuple_number_t_index_t x6629 = (x6345->arr[(x7235)._1]);
//       tuple_number_t_index_t x6637 = (x6345->arr[4]);
//       number_t x6645 = (x6629)._1;
//       index_t x6653 = (x6629)._2;
//       number_t x6661 = (x6637)._1;
//       index_t x6669 = (x6637)._2;
//       number_t x6677 = (x6573) * (x6597);
//       number_t x6685 = ((x6585) * (x6597)) + ((x6573) * (x6605));
//       number_t x6693 = (x6645) - (x6661);
//       index_t x6701 = (x6653) - (x6669);
//       number_t x6709 = (x6513) * (x6537);
//       number_t x6717 = ((x6525) * (x6537)) + ((x6513) * (x6549));
//       number_t x6725 = (x6677) * (x6693);
//       number_t x6733 = ((x6685) * (x6693)) + ((x6677) * (x6701));
//       tuple_number_t_index_t x6741 = (x6345->arr[2]);
//       number_t x6749 = (x6741)._1;
//       index_t x6757 = (x6741)._2;
//       number_t x6765 = (1) / (x6329);
//       number_t x6773 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       tuple_number_t_index_t x6781 = (x6345->arr[(11) + (x5481)]);
//       tuple_number_t_index_t x6789 = (x6345->arr[3]);
//       number_t x6797 = (x6781)._1;
//       index_t x6805 = (x6781)._2;
//       number_t x6813 = (x6789)._1;
//       index_t x6821 = (x6789)._2;
//       number_t x6829 = (x6749) * (x6765);
//       number_t x6837 = ((x6757) * (x6765)) + ((x6749) * (x6773));
//       number_t x6845 = (x6797) - (x6813);
//       index_t x6853 = (x6805) - (x6821);
//       tuple_number_t_index_t x6861 = (x6345->arr[0]);
//       number_t x6869 = (x6861)._1;
//       index_t x6877 = (x6861)._2;
//       number_t x6885 = (1) / (x6329);
//       number_t x6893 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       index_t x6901 = (11) + (x5481);
//       index_t x6909 = (0) + (x5479);
//       tuple_index_t_index_t x7236 = (tuple_index_t_index_t){._1=(2) + (x6901), ._2=(0) + (x6909)};
//       tuple_number_t_index_t x6917 = (x6345->arr[(x7236)._1]);
//       tuple_number_t_index_t x6925 = (x6345->arr[5]);
//       number_t x6933 = (x6917)._1;
//       index_t x6941 = (x6917)._2;
//       number_t x6949 = (x6925)._1;
//       index_t x6957 = (x6925)._2;
//       number_t x6965 = (x6869) * (x6885);
//       number_t x6973 = ((x6877) * (x6885)) + ((x6869) * (x6893));
//       number_t x6981 = (x6933) - (x6949);
//       index_t x6989 = (x6941) - (x6957);
//       number_t x6997 = (x6829) * (x6845);
//       number_t x7005 = ((x6837) * (x6845)) + ((x6829) * (x6853));
//       number_t x7013 = (x6965) * (x6981);
//       number_t x7021 = ((x6973) * (x6981)) + ((x6965) * (x6989));
//       tuple_number_t_index_t x7029 = (x6345->arr[0]);
//       number_t x7037 = (x7029)._1;
//       index_t x7045 = (x7029)._2;
//       number_t x7053 = (1) / (x6329);
//       number_t x7061 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       index_t x7069 = (11) + (x5481);
//       index_t x7077 = (0) + (x5479);
//       tuple_index_t_index_t x7237 = (tuple_index_t_index_t){._1=(1) + (x7069), ._2=(0) + (x7077)};
//       tuple_number_t_index_t x7085 = (x6345->arr[(x7237)._1]);
//       tuple_number_t_index_t x7093 = (x6345->arr[4]);
//       number_t x7101 = (x7085)._1;
//       index_t x7109 = (x7085)._2;
//       number_t x7117 = (x7093)._1;
//       index_t x7125 = (x7093)._2;
//       number_t x7133 = (x7037) * (x7053);
//       number_t x7141 = ((x7045) * (x7053)) + ((x7037) * (x7061));
//       number_t x7149 = (x7101) - (x7117);
//       index_t x7157 = (x7109) - (x7125);
//       tuple_number_t_index_t x7165 = (x6345->arr[1]);
//       number_t x7173 = (x7165)._1;
//       index_t x7181 = (x7165)._2;
//       number_t x7189 = (1) / (x6329);
//       number_t x7197 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//       tuple_number_t_index_t x7205 = (x6345->arr[(11) + (x5481)]);
//       tuple_number_t_index_t x7213 = (x6345->arr[3]);
//       number_t x7221 = (x7205)._1;
//       index_t x7201 = (x7205)._2;
//       number_t x7209 = (x7213)._1;
//       index_t x7217 = (x7213)._2;
//       tuple_number_t_number_t x7238 = (tuple_number_t_number_t){._1=(x6709) - (x6725), ._2=(x6717) - (x6733)};
//       tuple_number_t_number_t x7239 = (tuple_number_t_number_t){._1=(x6997) - (x7013), ._2=(x7005) - (x7021)};
//       number_t x5804 = (x7173) * (x7189);
//       number_t x5802 = ((x7181) * (x7189)) + ((x7173) * (x7197));
//       number_t x5805 = (x7221) - (x7209);
//       index_t x5803 = (x7201) - (x7217);
//       number_t x5696 = (x7133) * (x7149);
//       number_t x5694 = ((x7141) * (x7149)) + ((x7133) * (x7157));
//       number_t x5697 = (x5804) * (x5805);
//       number_t x5695 = ((x5802) * (x5805)) + ((x5804) * (x5803));
//       tuple_number_t_number_t x7240 = (tuple_number_t_number_t){._1=(x5696) - (x5697), ._2=(x5694) - (x5695)};
//       array_tuple_number_t_number_t w_cross_X = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       w_cross_X->arr[0] = x7238;
//       w_cross_X->arr[1] = x7239;
//       w_cross_X->arr[2] = x7240;
//       tuple_number_t_number_t x7243 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t x5740 = x7243;
//       for (int x5859 = 0; x5859 < 3; x5859++) {
//         tuple_number_t_number_t x5858 = x5740;
//         number_t x6098 = (x6345->arr[x5859])._1;
//         index_t x6096 = (x6345->arr[x5859])._2;
//         number_t x6099 = (1) / (x6329);
//         number_t x6097 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//         index_t x6247 = (11) + (x5481);
//         index_t x6297 = (0) + (x5479);
//         tuple_index_t_index_t x7241 = (tuple_index_t_index_t){._1=(x5859) + (x6247), ._2=(0) + (x6297)};
//         tuple_number_t_index_t x000 = (x6345->arr[(x7241)._1]);
//         index_t x6132 = 0;
//         index_t x6133 = 0;
//         tuple_number_t_index_t y0 = (x6345->arr[(x5859) + (3)]);
//         number_t x6170 = (x000)._1;
//         index_t x6168 = (x000)._2;
//         number_t x6171 = (y0)._1;
//         index_t x6169 = (y0)._2;
//         number_t x6182 = (x6098) * (x6099);
//         number_t x6180 = ((x6096) * (x6099)) + ((x6098) * (x6097));
//         number_t x6183 = (x6170) - (x6171);
//         index_t x6181 = (x6168) - (x6169);
//         number_t x6194 = (x5858)._1;
//         number_t x6192 = (x5858)._2;
//         number_t x6195 = (x6182) * (x6183);
//         number_t x6193 = ((x6180) * (x6183)) + ((x6182) * (x6181));
//         tuple_number_t_number_t x7242 = (tuple_number_t_number_t){._1=(x6194) + (x6195), ._2=(x6192) + (x6193)};
//         x5858 = x7242;
//         x5740 = x5858;
//       }
      
//       number_t x5855 = cos(x6329);
//       number_t x5853 = (((x6279)._2) / ((2) * (x6329))) * (-(sin(x6329)));
//       number_t x5744 = (x5740)._1;
//       number_t x5742 = (x5740)._2;
//       number_t x5745 = (1) - (x5855);
//       number_t x5743 = (0) - (x5853);
//       array_tuple_number_t_number_t x7246 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x7246->length=3;x7246->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       for(int x5843 = 0; x5843 < x7246->length; x5843++){
//         index_t x6241 = (11) + (x5481);
//         index_t x6291 = (0) + (x5479);
//         tuple_index_t_index_t x7244 = (tuple_index_t_index_t){._1=(x5843) + (x6241), ._2=(0) + (x6291)};
//         tuple_number_t_index_t x00 = (x6345->arr[(x7244)._1]);
//         index_t x6000 = 0;
//         index_t x6001 = 0;
//         tuple_number_t_index_t y0 = (x6345->arr[(x5843) + (3)]);
//         number_t x6086 = (x00)._1;
//         index_t x6084 = (x00)._2;
//         number_t x6087 = (y0)._1;
//         index_t x6085 = (y0)._2;
//         number_t x6110 = (x6086) - (x6087);
//         index_t x6108 = (x6084) - (x6085);
//         number_t x6111 = cos(x6329);
//         number_t x6109 = (((x6279)._2) / ((2) * (x6329))) * (-(sin(x6329)));
//         tuple_number_t_number_t xi0 = (w_cross_X->arr[x5843]);
//         number_t x6146 = (xi0)._1;
//         number_t x6144 = (xi0)._2;
//         number_t x6147 = sin(x6329);
//         number_t x6145 = (((x6279)._2) / ((2) * (x6329))) * (cos(x6329));
//         number_t x6158 = (x6110) * (x6111);
//         number_t x6156 = ((x6108) * (x6111)) + ((x6110) * (x6109));
//         number_t x6159 = (x6146) * (x6147);
//         number_t x6157 = ((x6144) * (x6147)) + ((x6146) * (x6145));
//         tuple_number_t_index_t xi1 = (x6345->arr[x5843]);
//         number_t x6206 = (xi1)._1;
//         index_t x6204 = (xi1)._2;
//         number_t x6207 = (1) / (x6329);
//         number_t x6205 = (((0) * (x6329)) - ((1) * (x6343))) / ((x6329) * (x6329));
//         number_t x6218 = (x6206) * (x6207);
//         number_t x6216 = ((x6204) * (x6207)) + ((x6206) * (x6205));
//         number_t x6219 = (x5744) * (x5745);
//         number_t x6217 = ((x5742) * (x5745)) + ((x5744) * (x5743));
//         number_t x6230 = (x6158) + (x6159);
//         number_t x6228 = (x6156) + (x6157);
//         number_t x6231 = (x6218) * (x6219);
//         number_t x6229 = ((x6216) * (x6219)) + ((x6218) * (x6217));
//         tuple_number_t_number_t x7245 = (tuple_number_t_number_t){._1=(x6230) + (x6231), ._2=(x6228) + (x6229)};
//         x7246->arr[x5843] = x7245;
        
//       }
//       array_tuple_number_t_number_t Xcam = x7246;
//       tuple_number_t_number_t x6235 = (Xcam->arr[2]);
//       number_t x6285 = (x6235)._1;
//       number_t x6335 = (x6235)._2;
//       tuple_number_t_number_t x7248 = (tuple_number_t_number_t){._1=0, ._2=0};
//       tuple_number_t_number_t x6349 = x7248;
//       for (int x5519 = 0; x5519 < 2; x5519++) {
//         tuple_number_t_number_t x5518 = x6349;
//         tuple_number_t_number_t xi = (Xcam->arr[x5519]);
//         number_t x5648 = (xi)._1;
//         number_t x5646 = (xi)._2;
//         number_t x5649 = (1) / (x6285);
//         number_t x5647 = (((0) * (x6285)) - ((1) * (x6335))) / ((x6285) * (x6285));
//         number_t x5732 = (x5648) * (x5649);
//         number_t x5730 = ((x5646) * (x5649)) + ((x5648) * (x5647));
//         number_t x5733 = (x5648) * (x5649);
//         number_t x5731 = ((x5646) * (x5649)) + ((x5648) * (x5647));
//         number_t x5840 = (x5518)._1;
//         number_t x5838 = (x5518)._2;
//         number_t x5841 = (x5732) * (x5733);
//         number_t x5839 = ((x5730) * (x5733)) + ((x5732) * (x5731));
//         tuple_number_t_number_t x7247 = (tuple_number_t_number_t){._1=(x5840) + (x5841), ._2=(x5838) + (x5839)};
//         x5518 = x7247;
//         x6349 = x5518;
//       }
      
//       tuple_number_t_index_t x6361 = (x6345->arr[9]);
//       number_t x6373 = (x6361)._1;
//       index_t x6385 = (x6361)._2;
//       number_t x6397 = (x6349)._1;
//       number_t x6409 = (x6349)._2;
//       number_t x6421 = (x6373) * (x6397);
//       number_t x6433 = ((x6385) * (x6397)) + ((x6373) * (x6409));
//       tuple_number_t_index_t x6445 = (x6345->arr[10]);
//       number_t x6457 = (x6445)._1;
//       index_t x6469 = (x6445)._2;
//       number_t x6481 = (x6349)._1;
//       number_t x6493 = (x6349)._2;
//       number_t x6505 = (x6457) * (x6481);
//       number_t x6517 = ((x6469) * (x6481)) + ((x6457) * (x6493));
//       number_t x6529 = (x6349)._1;
//       number_t x6541 = (x6349)._2;
//       number_t x6553 = (1) + (x6421);
//       number_t x6565 = (0) + (x6433);
//       number_t x6577 = (x6505) * (x6529);
//       number_t x6589 = ((x6517) * (x6529)) + ((x6505) * (x6541));
//       array_tuple_number_t_number_t x7250 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x7250->length=2;x7250->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
//       for(int x5553 = 0; x5553 < x7250->length; x5553++){
//         tuple_number_t_number_t xi = (Xcam->arr[x5553]);
//         number_t x5720 = (xi)._1;
//         number_t x5718 = (xi)._2;
//         number_t x5721 = (1) / (x6285);
//         number_t x5719 = (((0) * (x6285)) - ((1) * (x6335))) / ((x6285) * (x6285));
//         number_t x5828 = (x5720) * (x5721);
//         number_t x5826 = ((x5718) * (x5721)) + ((x5720) * (x5719));
//         number_t x5829 = (x6553) + (x6577);
//         number_t x5827 = (x6565) + (x6589);
//         tuple_number_t_number_t x7249 = (tuple_number_t_number_t){._1=(x5828) * (x5829), ._2=((x5826) * (x5829)) + ((x5828) * (x5827))};
//         x7250->arr[x5553] = x7249;
        
//       }
//       array_tuple_number_t_number_t distorted = x7250;
//       tuple_number_t_index_t y = (x6345->arr[6]);
//       array_tuple_number_t_number_t m2 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m2->length=2;m2->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
//       for(int x5511 = 0; x5511 < m2->length; x5511++){
//         index_t x5532 = 0;
//         index_t x5533 = 0;
//         tuple_number_t_index_t x00 = (x6345->arr[(x5511) + (7)]);
//         tuple_number_t_number_t xi = (distorted->arr[x5511]);
//         number_t x5660 = (xi)._1;
//         number_t x5658 = (xi)._2;
//         number_t x5661 = (y)._1;
//         index_t x5659 = (y)._2;
//         number_t x5708 = (x00)._1;
//         index_t x5706 = (x00)._2;
//         number_t x5709 = (x5660) * (x5661);
//         number_t x5707 = ((x5658) * (x5661)) + ((x5660) * (x5659));
//         tuple_number_t_number_t x7251 = (tuple_number_t_number_t){._1=(x5708) + (x5709), ._2=(x5706) + (x5707)};
//         m2->arr[x5511] = x7251;
        
//       }
//       x7252->arr[x5469] = m2;
      
//     }
//     m->arr[ii] = x7252;
    
//   }
//   array_array_array_number_t x7255 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x7255->length=(m)->length;x7255->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (m)->length);
//   for(int i = 0; i < x7255->length; i++){
//     array_array_tuple_number_t_number_t m0 = (m->arr[i]);
//     array_array_number_t x7254 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x7254->length=(m0)->length;x7254->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m0)->length);
//     for(int i0 = 0; i0 < x7254->length; i0++){
//       array_tuple_number_t_number_t v = (m0->arr[i0]);
//       array_number_t x7253 = (array_number_t)storage_alloc(sizeof(int) * 2);x7253->length=(v)->length;x7253->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
//       for(int i00 = 0; i00 < x7253->length; i00++){
//         tuple_number_t_number_t s = (v->arr[i00]);
//         x7253->arr[i00] = (s)._2;
        
//       }
//       x7254->arr[i0] = x7253;
      
//     }
//     x7255->arr[i] = x7254;
    
//   }
//   return x7255;
// }
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
  array_array_array_number_t x6689 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x6689->length=x6285;x6689->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x6285);
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
    array_array_number_t x6688 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x6688->length=n;x6688->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
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
      array_number_t x6687 = (array_number_t)storage_alloc(sizeof(int) * 2);x6687->length=2;x6687->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
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
      x6688->arr[i0] = x6687;
      
    }
    x6689->arr[i] = x6688;
    
  }
  return x6689;
}
//   number_t x2093 = (xs->arr[0]);
//   number_t x2094 = (xs->arr[1]);
//   number_t x2095 = (xs->arr[2]);
//   number_t x2096 = (x2093) * (x2093);
//   number_t x2097 = (x2094) * (x2094);
//   number_t x2098 = (x2096) + (x2097);
//   number_t x2099 = (x2095) * (x2095);
//   number_t x2100 = (x2098) + (x2099);
//   number_t x2101 = sqrt(x2100);
//   number_t x2102 = (1) / (x2101);
//   number_t x2103 = (x2094) * (x2102);
//   number_t x2104 = (x2095) * (x2102);
//   number_t x2105 = (x2093) * (x2102);
//   number_t x2106 = cos(x2101);
//   number_t x2107 = (1) - (x2106);
//   number_t x2108 = (xs->arr[9]);
//   number_t x2109 = (xs->arr[10]);
//   number_t x2110 = (xs->arr[6]);
//   number_t x2111 = sin(x2101);
//   index_t x2112 = (xs)->length;
//   number_t x2130 = (x2102) * (0.5);
//   number_t x2133 = (x2101) * (x2101);
//   number_t x2144 = -(x2111);
//   number_t x2150 = (xs->arr[5]);
//   number_t x2160 = (xs->arr[4]);
//   number_t x2169 = (xs->arr[3]);
//   array_array_array_number_t x2605 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x2605->length=x2112;x2605->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x2112);
//   for(int i = 0; i < x2605->length; i++){
//     index_t x2113 = (i) == (0);
//     index_t x2114;
//     if (x2113) {
//       x2114 = 1;
//     } else {
//       x2114 = 0;
//     }
//     index_t x2115 = (i) == (1);
//     index_t x2116;
//     if (x2115) {
//       x2116 = 1;
//     } else {
//       x2116 = 0;
//     }
//     index_t x2117 = (i) == (2);
//     index_t x2118;
//     if (x2117) {
//       x2118 = 1;
//     } else {
//       x2118 = 0;
//     }
//     number_t x2119 = (x2114) * (x2093);
//     number_t x2120 = (x2093) * (x2114);
//     number_t x2121 = (x2119) + (x2120);
//     number_t x2122 = (x2116) * (x2094);
//     number_t x2123 = (x2094) * (x2116);
//     number_t x2124 = (x2122) + (x2123);
//     number_t x2125 = (x2121) + (x2124);
//     number_t x2126 = (x2118) * (x2095);
//     number_t x2127 = (x2095) * (x2118);
//     number_t x2128 = (x2126) + (x2127);
//     number_t x2129 = (x2125) + (x2128);
//     number_t x2131 = (x2129) * (x2130);
//     number_t x2132 = -(x2131);
//     number_t x2134 = (x2132) / (x2133);
//     number_t x2135 = (x2116) * (x2102);
//     number_t x2136 = (x2094) * (x2134);
//     number_t x2137 = (x2135) + (x2136);
//     number_t x2138 = (x2118) * (x2102);
//     number_t x2139 = (x2095) * (x2134);
//     number_t x2140 = (x2138) + (x2139);
//     number_t x2141 = (x2114) * (x2102);
//     number_t x2142 = (x2093) * (x2134);
//     number_t x2143 = (x2141) + (x2142);
//     number_t x2145 = (x2131) * (x2144);
//     index_t x2155 = (i) == (5);
//     index_t x2165 = (i) == (4);
//     index_t x2174 = (i) == (3);
//     index_t x2516 = (i) == (9);
//     index_t x2548 = (i) == (10);
//     index_t x2594 = (i) == (6);
//     array_array_number_t x2604 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x2604->length=n;x2604->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
//     for(int i0 = 0; i0 < x2604->length; i0++){
//       index_t x2146 = (3) * (i0);
//       index_t x2147 = (11) + (x2146);
//       index_t x2148 = (2) + (x2147);
//       number_t x2149 = (xs->arr[x2148]);
//       number_t x2151 = (x2149) - (x2150);
//       index_t x2152 = (i) == (x2148);
//       index_t x2157;
//       if (x2152) {
//         index_t x2154;
//         if (x2155) {
//           x2154 = 0;
//         } else {
//           x2154 = 1;
//         }
//         x2157 = x2154;
//       } else {
//         index_t x2156;
//         if (x2155) {
//           x2156 = -1;
//         } else {
//           x2156 = 0;
//         }
//         x2157 = x2156;
//       }
//       index_t x2158 = (1) + (x2147);
//       number_t x2159 = (xs->arr[x2158]);
//       number_t x2161 = (x2159) - (x2160);
//       index_t x2162 = (i) == (x2158);
//       index_t x2167;
//       if (x2162) {
//         index_t x2164;
//         if (x2165) {
//           x2164 = 0;
//         } else {
//           x2164 = 1;
//         }
//         x2167 = x2164;
//       } else {
//         index_t x2166;
//         if (x2165) {
//           x2166 = -1;
//         } else {
//           x2166 = 0;
//         }
//         x2167 = x2166;
//       }
//       number_t x2168 = (xs->arr[x2147]);
//       number_t x2170 = (x2168) - (x2169);
//       index_t x2171 = (i) == (x2147);
//       index_t x2176;
//       if (x2171) {
//         index_t x2173;
//         if (x2174) {
//           x2173 = 0;
//         } else {
//           x2173 = 1;
//         }
//         x2176 = x2173;
//       } else {
//         index_t x2175;
//         if (x2174) {
//           x2175 = -1;
//         } else {
//           x2175 = 0;
//         }
//         x2176 = x2175;
//       }
//       number_t x2177 = (x2105) * (x2170);
//       number_t x2178 = (x2103) * (x2161);
//       number_t x2179 = (x2177) + (x2178);
//       number_t x2180 = (x2104) * (x2151);
//       number_t x2181 = (x2179) + (x2180);
//       number_t x2182 = (x2181) * (x2107);
//       number_t x2188 = (x2103) * (x2151);
//       number_t x2189 = (x2104) * (x2161);
//       number_t x2190 = (x2188) - (x2189);
//       number_t x2191 = (x2137) * (x2151);
//       number_t x2192 = (x2103) * (x2157);
//       number_t x2193 = (x2191) + (x2192);
//       number_t x2194 = (x2140) * (x2161);
//       number_t x2195 = (x2104) * (x2167);
//       number_t x2196 = (x2194) + (x2195);
//       number_t x2197 = (x2193) - (x2196);
//       tuple_number_t_number_t x2198 = (tuple_number_t_number_t){._1=x2190, ._2=x2197};
//       number_t x2199 = (x2104) * (x2170);
//       number_t x2200 = (x2105) * (x2151);
//       number_t x2201 = (x2199) - (x2200);
//       number_t x2202 = (x2140) * (x2170);
//       number_t x2203 = (x2104) * (x2176);
//       number_t x2204 = (x2202) + (x2203);
//       number_t x2205 = (x2143) * (x2151);
//       number_t x2206 = (x2105) * (x2157);
//       number_t x2207 = (x2205) + (x2206);
//       number_t x2208 = (x2204) - (x2207);
//       tuple_number_t_number_t x2209 = (tuple_number_t_number_t){._1=x2201, ._2=x2208};
//       number_t x2210 = (x2105) * (x2161);
//       number_t x2211 = (x2103) * (x2170);
//       number_t x2212 = (x2210) - (x2211);
//       number_t x2213 = (x2143) * (x2161);
//       number_t x2214 = (x2105) * (x2167);
//       number_t x2215 = (x2213) + (x2214);
//       number_t x2216 = (x2137) * (x2170);
//       number_t x2217 = (x2103) * (x2176);
//       number_t x2218 = (x2216) + (x2217);
//       number_t x2219 = (x2215) - (x2218);
//       tuple_number_t_number_t x2220 = (tuple_number_t_number_t){._1=x2212, ._2=x2219};
//       array_tuple_number_t_number_t x2221 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x2221->length=3;x2221->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       x2221->arr[0] = x2198;
//       x2221->arr[1] = x2209;
//       x2221->arr[2] = x2220;
//       array_tuple_number_t_number_t x2472 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x2472->length=3;x2472->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
//       for(int x1246 = 0; x1246 < x2472->length; x1246++){
//         index_t x2183 = (x1246) + (x2147);
//         index_t x2184 = (x1246) + (3);
//         number_t x2185 = (xs->arr[x2183]);
//         number_t x2186 = (xs->arr[x2184]);
//         number_t x2187 = (x2185) - (x2186);
//         tuple_number_t_number_t x2222 = (x2221->arr[x1246]);
//         number_t x2223 = (x2222)._1;
//         number_t x2224 = (xs->arr[x1246]);
//         number_t x2225 = (x2224) * (x2102);
//         number_t x2226 = (x2187) * (x2106);
//         number_t x2227 = (x2223) * (x2111);
//         number_t x2228 = (x2226) + (x2227);
//         number_t x2229 = (x2225) * (x2182);
//         number_t x2230 = (x2228) + (x2229);
//         index_t x2231 = (i) == (x2183);
//         index_t x2350 = (i) == (x2184);
//         index_t x2412 = (i) == (x1246);
//         number_t x2441 = (x2187) * (x2145);
//         number_t x2470;
//         if (x2231) {
//           number_t x2349;
//           if (x2350) {
//             number_t x2263 = (x2222)._2;
//             number_t x2264 = (x2263) * (x2111);
//             number_t x2265 = (x2131) * (x2106);
//             number_t x2266 = (x2223) * (x2265);
//             number_t x2267 = (x2264) + (x2266);
//             number_t x2268 = (x2441) + (x2267);
//             number_t x2269 = (x2224) * (x2134);
//             number_t x2289;
//             if (x2412) {
//               number_t x2242 = (x2102) + (x2269);
//               number_t x2243 = (x2242) * (x2182);
//               number_t x2244 = (x2143) * (x2170);
//               number_t x2245 = (x2105) * (x2176);
//               number_t x2246 = (x2244) + (x2245);
//               number_t x2247 = (x2137) * (x2161);
//               number_t x2248 = (x2103) * (x2167);
//               number_t x2249 = (x2247) + (x2248);
//               number_t x2250 = (x2246) + (x2249);
//               number_t x2251 = (x2140) * (x2151);
//               number_t x2252 = (x2104) * (x2157);
//               number_t x2253 = (x2251) + (x2252);
//               number_t x2254 = (x2250) + (x2253);
//               number_t x2255 = (x2254) * (x2107);
//               number_t x2256 = -(x2145);
//               number_t x2257 = (x2181) * (x2256);
//               number_t x2258 = (x2255) + (x2257);
//               number_t x2259 = (x2225) * (x2258);
//               number_t x2260 = (x2243) + (x2259);
//               number_t x2261 = (x2268) + (x2260);
//               x2289 = x2261;
//             } else {
//               number_t x2270 = (x2269) * (x2182);
//               number_t x2271 = (x2143) * (x2170);
//               number_t x2272 = (x2105) * (x2176);
//               number_t x2273 = (x2271) + (x2272);
//               number_t x2274 = (x2137) * (x2161);
//               number_t x2275 = (x2103) * (x2167);
//               number_t x2276 = (x2274) + (x2275);
//               number_t x2277 = (x2273) + (x2276);
//               number_t x2278 = (x2140) * (x2151);
//               number_t x2279 = (x2104) * (x2157);
//               number_t x2280 = (x2278) + (x2279);
//               number_t x2281 = (x2277) + (x2280);
//               number_t x2282 = (x2281) * (x2107);
//               number_t x2283 = -(x2145);
//               number_t x2284 = (x2181) * (x2283);
//               number_t x2285 = (x2282) + (x2284);
//               number_t x2286 = (x2225) * (x2285);
//               number_t x2287 = (x2270) + (x2286);
//               number_t x2288 = (x2268) + (x2287);
//               x2289 = x2288;
//             }
//             x2349 = x2289;
//           } else {
//             number_t x2321 = (x2106) + (x2441);
//             number_t x2322 = (x2222)._2;
//             number_t x2323 = (x2322) * (x2111);
//             number_t x2324 = (x2131) * (x2106);
//             number_t x2325 = (x2223) * (x2324);
//             number_t x2326 = (x2323) + (x2325);
//             number_t x2327 = (x2321) + (x2326);
//             number_t x2328 = (x2224) * (x2134);
//             number_t x2348;
//             if (x2412) {
//               number_t x2300 = (x2102) + (x2328);
//               number_t x2301 = (x2300) * (x2182);
//               number_t x2302 = (x2143) * (x2170);
//               number_t x2303 = (x2105) * (x2176);
//               number_t x2304 = (x2302) + (x2303);
//               number_t x2305 = (x2137) * (x2161);
//               number_t x2306 = (x2103) * (x2167);
//               number_t x2307 = (x2305) + (x2306);
//               number_t x2308 = (x2304) + (x2307);
//               number_t x2309 = (x2140) * (x2151);
//               number_t x2310 = (x2104) * (x2157);
//               number_t x2311 = (x2309) + (x2310);
//               number_t x2312 = (x2308) + (x2311);
//               number_t x2313 = (x2312) * (x2107);
//               number_t x2314 = -(x2145);
//               number_t x2315 = (x2181) * (x2314);
//               number_t x2316 = (x2313) + (x2315);
//               number_t x2317 = (x2225) * (x2316);
//               number_t x2318 = (x2301) + (x2317);
//               number_t x2319 = (x2327) + (x2318);
//               x2348 = x2319;
//             } else {
//               number_t x2329 = (x2328) * (x2182);
//               number_t x2330 = (x2143) * (x2170);
//               number_t x2331 = (x2105) * (x2176);
//               number_t x2332 = (x2330) + (x2331);
//               number_t x2333 = (x2137) * (x2161);
//               number_t x2334 = (x2103) * (x2167);
//               number_t x2335 = (x2333) + (x2334);
//               number_t x2336 = (x2332) + (x2335);
//               number_t x2337 = (x2140) * (x2151);
//               number_t x2338 = (x2104) * (x2157);
//               number_t x2339 = (x2337) + (x2338);
//               number_t x2340 = (x2336) + (x2339);
//               number_t x2341 = (x2340) * (x2107);
//               number_t x2342 = -(x2145);
//               number_t x2343 = (x2181) * (x2342);
//               number_t x2344 = (x2341) + (x2343);
//               number_t x2345 = (x2225) * (x2344);
//               number_t x2346 = (x2329) + (x2345);
//               number_t x2347 = (x2327) + (x2346);
//               x2348 = x2347;
//             }
//             x2349 = x2348;
//           }
//           x2470 = x2349;
//         } else {
//           number_t x2442 = (x2222)._2;
//           number_t x2443 = (x2442) * (x2111);
//           number_t x2444 = (x2131) * (x2106);
//           number_t x2445 = (x2223) * (x2444);
//           number_t x2446 = (x2443) + (x2445);
//           number_t x2469;
//           if (x2350) {
//             number_t x2382 = (-1) * (x2106);
//             number_t x2384 = (x2382) + (x2441);
//             number_t x2390 = (x2384) + (x2446);
//             number_t x2391 = (x2224) * (x2134);
//             number_t x2411;
//             if (x2412) {
//               number_t x2362 = (x2102) + (x2391);
//               number_t x2363 = (x2362) * (x2182);
//               number_t x2364 = (x2143) * (x2170);
//               number_t x2365 = (x2105) * (x2176);
//               number_t x2366 = (x2364) + (x2365);
//               number_t x2367 = (x2137) * (x2161);
//               number_t x2368 = (x2103) * (x2167);
//               number_t x2369 = (x2367) + (x2368);
//               number_t x2370 = (x2366) + (x2369);
//               number_t x2371 = (x2140) * (x2151);
//               number_t x2372 = (x2104) * (x2157);
//               number_t x2373 = (x2371) + (x2372);
//               number_t x2374 = (x2370) + (x2373);
//               number_t x2375 = (x2374) * (x2107);
//               number_t x2376 = -(x2145);
//               number_t x2377 = (x2181) * (x2376);
//               number_t x2378 = (x2375) + (x2377);
//               number_t x2379 = (x2225) * (x2378);
//               number_t x2380 = (x2363) + (x2379);
//               number_t x2381 = (x2390) + (x2380);
//               x2411 = x2381;
//             } else {
//               number_t x2392 = (x2391) * (x2182);
//               number_t x2393 = (x2143) * (x2170);
//               number_t x2394 = (x2105) * (x2176);
//               number_t x2395 = (x2393) + (x2394);
//               number_t x2396 = (x2137) * (x2161);
//               number_t x2397 = (x2103) * (x2167);
//               number_t x2398 = (x2396) + (x2397);
//               number_t x2399 = (x2395) + (x2398);
//               number_t x2400 = (x2140) * (x2151);
//               number_t x2401 = (x2104) * (x2157);
//               number_t x2402 = (x2400) + (x2401);
//               number_t x2403 = (x2399) + (x2402);
//               number_t x2404 = (x2403) * (x2107);
//               number_t x2405 = -(x2145);
//               number_t x2406 = (x2181) * (x2405);
//               number_t x2407 = (x2404) + (x2406);
//               number_t x2408 = (x2225) * (x2407);
//               number_t x2409 = (x2392) + (x2408);
//               number_t x2410 = (x2390) + (x2409);
//               x2411 = x2410;
//             }
//             x2469 = x2411;
//           } else {
//             number_t x2447 = (x2441) + (x2446);
//             number_t x2448 = (x2224) * (x2134);
//             number_t x2468;
//             if (x2412) {
//               number_t x2421 = (x2102) + (x2448);
//               number_t x2422 = (x2421) * (x2182);
//               number_t x2423 = (x2143) * (x2170);
//               number_t x2424 = (x2105) * (x2176);
//               number_t x2425 = (x2423) + (x2424);
//               number_t x2426 = (x2137) * (x2161);
//               number_t x2427 = (x2103) * (x2167);
//               number_t x2428 = (x2426) + (x2427);
//               number_t x2429 = (x2425) + (x2428);
//               number_t x2430 = (x2140) * (x2151);
//               number_t x2431 = (x2104) * (x2157);
//               number_t x2432 = (x2430) + (x2431);
//               number_t x2433 = (x2429) + (x2432);
//               number_t x2434 = (x2433) * (x2107);
//               number_t x2435 = -(x2145);
//               number_t x2436 = (x2181) * (x2435);
//               number_t x2437 = (x2434) + (x2436);
//               number_t x2438 = (x2225) * (x2437);
//               number_t x2439 = (x2422) + (x2438);
//               number_t x2440 = (x2447) + (x2439);
//               x2468 = x2440;
//             } else {
//               number_t x2449 = (x2448) * (x2182);
//               number_t x2450 = (x2143) * (x2170);
//               number_t x2451 = (x2105) * (x2176);
//               number_t x2452 = (x2450) + (x2451);
//               number_t x2453 = (x2137) * (x2161);
//               number_t x2454 = (x2103) * (x2167);
//               number_t x2455 = (x2453) + (x2454);
//               number_t x2456 = (x2452) + (x2455);
//               number_t x2457 = (x2140) * (x2151);
//               number_t x2458 = (x2104) * (x2157);
//               number_t x2459 = (x2457) + (x2458);
//               number_t x2460 = (x2456) + (x2459);
//               number_t x2461 = (x2460) * (x2107);
//               number_t x2462 = -(x2145);
//               number_t x2463 = (x2181) * (x2462);
//               number_t x2464 = (x2461) + (x2463);
//               number_t x2465 = (x2225) * (x2464);
//               number_t x2466 = (x2449) + (x2465);
//               number_t x2467 = (x2447) + (x2466);
//               x2468 = x2467;
//             }
//             x2469 = x2468;
//           }
//           x2470 = x2469;
//         }
//         tuple_number_t_number_t x2471 = (tuple_number_t_number_t){._1=x2230, ._2=x2470};
//         x2472->arr[x1246] = x2471;
        
//       }
//       array_tuple_number_t_number_t x2473 = x2472;
//       tuple_number_t_number_t x2474 = (x2473->arr[2]);
//       number_t x2475 = (x2474)._1;
//       tuple_number_t_number_t x2476 = (x2473->arr[0]);
//       number_t x2477 = (x2476)._1;
//       number_t x2478 = (1) / (x2475);
//       number_t x2479 = (x2474)._2;
//       number_t x2480 = -(x2479);
//       number_t x2481 = (x2475) * (x2475);
//       number_t x2482 = (x2480) / (x2481);
//       number_t x2483 = (x2477) * (x2478);
//       number_t x2484 = (x2476)._2;
//       number_t x2485 = (x2484) * (x2478);
//       number_t x2486 = (x2477) * (x2482);
//       number_t x2487 = (x2485) + (x2486);
//       tuple_number_t_number_t x2488 = (x2473->arr[1]);
//       number_t x2489 = (x2488)._1;
//       number_t x2490 = (x2489) * (x2478);
//       number_t x2491 = (x2488)._2;
//       number_t x2492 = (x2491) * (x2478);
//       number_t x2493 = (x2489) * (x2482);
//       number_t x2494 = (x2492) + (x2493);
//       number_t x2495 = (x2483) * (x2483);
//       number_t x2496 = (x2490) * (x2490);
//       number_t x2497 = (x2495) + (x2496);
//       number_t x2498 = (x2487) * (x2483);
//       number_t x2499 = (x2483) * (x2487);
//       number_t x2500 = (x2498) + (x2499);
//       number_t x2501 = (x2494) * (x2490);
//       number_t x2502 = (x2490) * (x2494);
//       number_t x2503 = (x2501) + (x2502);
//       number_t x2504 = (x2500) + (x2503);
//       number_t x2505 = (x2109) * (x2497);
//       number_t x2506 = (x2108) * (x2497);
//       number_t x2507 = (1) + (x2506);
//       number_t x2508 = (x2505) * (x2497);
//       number_t x2509 = (x2507) + (x2508);
//       number_t x2568 = (x2108) * (x2504);
//       number_t x2569 = (x2109) * (x2504);
//       array_tuple_number_t_number_t x2579 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x2579->length=2;x2579->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
//       for(int x968 = 0; x968 < x2579->length; x968++){
//         tuple_number_t_number_t x2512 = (x2473->arr[x968]);
//         number_t x2513 = (x2512)._1;
//         number_t x2514 = (x2513) * (x2478);
//         number_t x2515 = (x2514) * (x2509);
//         number_t x2563 = (x2512)._2;
//         number_t x2564 = (x2563) * (x2478);
//         number_t x2565 = (x2513) * (x2482);
//         number_t x2566 = (x2564) + (x2565);
//         number_t x2567 = (x2566) * (x2509);
//         number_t x2577;
//         if (x2516) {
//           number_t x2539 = (x2497) + (x2568);
//           number_t x2547;
//           if (x2548) {
//             number_t x2526 = (x2497) + (x2569);
//             number_t x2527 = (x2526) * (x2497);
//             number_t x2528 = (x2505) * (x2504);
//             number_t x2529 = (x2527) + (x2528);
//             number_t x2530 = (x2539) + (x2529);
//             number_t x2531 = (x2514) * (x2530);
//             number_t x2532 = (x2567) + (x2531);
//             x2547 = x2532;
//           } else {
//             number_t x2541 = (x2569) * (x2497);
//             number_t x2542 = (x2505) * (x2504);
//             number_t x2543 = (x2541) + (x2542);
//             number_t x2544 = (x2539) + (x2543);
//             number_t x2545 = (x2514) * (x2544);
//             number_t x2546 = (x2567) + (x2545);
//             x2547 = x2546;
//           }
//           x2577 = x2547;
//         } else {
//           number_t x2576;
//           if (x2548) {
//             number_t x2556 = (x2497) + (x2569);
//             number_t x2557 = (x2556) * (x2497);
//             number_t x2558 = (x2505) * (x2504);
//             number_t x2559 = (x2557) + (x2558);
//             number_t x2560 = (x2568) + (x2559);
//             number_t x2561 = (x2514) * (x2560);
//             number_t x2562 = (x2567) + (x2561);
//             x2576 = x2562;
//           } else {
//             number_t x2570 = (x2569) * (x2497);
//             number_t x2571 = (x2505) * (x2504);
//             number_t x2572 = (x2570) + (x2571);
//             number_t x2573 = (x2568) + (x2572);
//             number_t x2574 = (x2514) * (x2573);
//             number_t x2575 = (x2567) + (x2574);
//             x2576 = x2575;
//           }
//           x2577 = x2576;
//         }
//         tuple_number_t_number_t x2578 = (tuple_number_t_number_t){._1=x2515, ._2=x2577};
//         x2579->arr[x968] = x2578;
        
//       }
//       array_tuple_number_t_number_t x2580 = x2579;
//       array_number_t x2603 = (array_number_t)storage_alloc(sizeof(int) * 2);x2603->length=2;x2603->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
//       for(int i00 = 0; i00 < x2603->length; i00++){
//         tuple_number_t_number_t x2581 = (x2580->arr[i00]);
//         index_t x2582 = (i00) + (7);
//         index_t x2583 = (i) == (x2582);
//         number_t x2599 = (x2581)._2;
//         number_t x2600 = (x2599) * (x2110);
//         number_t x2602;
//         if (x2583) {
//           number_t x2593;
//           if (x2594) {
//             number_t x2587 = (x2581)._1;
//             number_t x2588 = (x2600) + (x2587);
//             number_t x2589 = (1) + (x2588);
//             x2593 = x2589;
//           } else {
//             number_t x2592 = (1) + (x2600);
//             x2593 = x2592;
//           }
//           x2602 = x2593;
//         } else {
//           number_t x2601;
//           if (x2594) {
//             number_t x2597 = (x2581)._1;
//             number_t x2598 = (x2600) + (x2597);
//             x2601 = x2598;
//           } else {
//             x2601 = x2600;
//           }
//           x2602 = x2601;
//         }
//         x2603->arr[i00] = x2602;
        
//       }
//       x2604->arr[i0] = x2603;
      
//     }
//     x2605->arr[i] = x2604;
    
//   }
//   return x2605;
// }
