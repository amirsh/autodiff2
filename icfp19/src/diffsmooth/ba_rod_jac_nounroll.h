#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba_rod_jac(array_number_t xs, index_t n) {
index_t x1353 = (xs)->length;
  array_array_array_number_t x1603 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x1603->length=x1353;x1603->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x1353);
  for(int i = 0; i < x1603->length; i++){
    array_array_number_t x1602 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x1602->length=n;x1602->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x1602->length; i0++){
      index_t x1354 = (3) * (i0);
      tuple_number_t_number_t x1604 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x1371 = x1604;
      for (int x914 = 0; x914 < 3; x914++) {
        tuple_number_t_number_t x913 = x1371;
        number_t x1355 = (xs->arr[x914]);
        index_t x1356 = (i) == (x914);
        index_t x1357;
        if (x1356) {
          x1357 = 1;
        } else {
          x1357 = 0;
        }
        number_t x1361 = (x913)._1;
        number_t x1362 = (x913)._2;
        number_t x1363 = (x1355) * (x1355);
        number_t x1364 = (x1357) * (x1355);
        number_t x1365 = (x1355) * (x1357);
        number_t x1366 = (x1364) + (x1365);
        number_t x1367 = (x1361) + (x1363);
        number_t x1368 = (x1362) + (x1366);
        tuple_number_t_number_t x1369 = (tuple_number_t_number_t){._1=x1367, ._2=x1368};
        x913 = x1369;
        x1371 = x913;
      }
      
      number_t x1372 = (x1371)._1;
      number_t x1373 = sqrt(x1372);
      number_t x1374 = (x1371)._2;
      number_t x1375 = (1) / (x1373);
      number_t x1376 = (x1375) * (0.5);
      number_t x1377 = (x1374) * (x1376);
      number_t x1378 = (xs->arr[1]);
      index_t x1379 = (i) == (1);
      index_t x1380;
      if (x1379) {
        x1380 = 1;
      } else {
        x1380 = 0;
      }
      number_t x1382 = -(x1377);
      number_t x1383 = (x1373) * (x1373);
      number_t x1384 = (x1382) / (x1383);
      index_t x1385 = (11) + (x1354);
      index_t x1386 = (2) + (x1385);
      number_t x1387 = (x1378) * (x1375);
      number_t x1388 = (x1380) * (x1375);
      number_t x1389 = (x1378) * (x1384);
      number_t x1390 = (x1388) + (x1389);
      number_t x1391 = (xs->arr[x1386]);
      index_t x1392 = (i) == (x1386);
      index_t x1393;
      if (x1392) {
        x1393 = 1;
      } else {
        x1393 = 0;
      }
      number_t x1394 = (xs->arr[2]);
      index_t x1395 = (i) == (2);
      index_t x1396;
      if (x1395) {
        x1396 = 1;
      } else {
        x1396 = 0;
      }
      index_t x1402 = (1) + (x1385);
      number_t x1403 = (x1394) * (x1375);
      number_t x1404 = (x1396) * (x1375);
      number_t x1405 = (x1394) * (x1384);
      number_t x1406 = (x1404) + (x1405);
      number_t x1407 = (xs->arr[x1402]);
      index_t x1408 = (i) == (x1402);
      index_t x1409;
      if (x1408) {
        x1409 = 1;
      } else {
        x1409 = 0;
      }
      number_t x1410 = (x1387) * (x1391);
      number_t x1411 = (x1390) * (x1391);
      number_t x1412 = (x1387) * (x1393);
      number_t x1413 = (x1411) + (x1412);
      number_t x1414 = (x1403) * (x1407);
      number_t x1415 = (x1406) * (x1407);
      number_t x1416 = (x1403) * (x1409);
      number_t x1417 = (x1415) + (x1416);
      number_t x1430 = (xs->arr[x1385]);
      index_t x1431 = (i) == (x1385);
      index_t x1432;
      if (x1431) {
        x1432 = 1;
      } else {
        x1432 = 0;
      }
      number_t x1433 = (xs->arr[0]);
      index_t x1434 = (i) == (0);
      index_t x1435;
      if (x1434) {
        x1435 = 1;
      } else {
        x1435 = 0;
      }
      number_t x1442 = (x1433) * (x1375);
      number_t x1443 = (x1435) * (x1375);
      number_t x1444 = (x1433) * (x1384);
      number_t x1445 = (x1443) + (x1444);
      number_t x1449 = (x1403) * (x1430);
      number_t x1450 = (x1406) * (x1430);
      number_t x1451 = (x1403) * (x1432);
      number_t x1452 = (x1450) + (x1451);
      number_t x1453 = (x1442) * (x1391);
      number_t x1454 = (x1445) * (x1391);
      number_t x1455 = (x1442) * (x1393);
      number_t x1456 = (x1454) + (x1455);
      number_t x1488 = (x1442) * (x1407);
      number_t x1489 = (x1445) * (x1407);
      number_t x1490 = (x1442) * (x1409);
      number_t x1491 = (x1489) + (x1490);
      number_t x1492 = (x1387) * (x1430);
      number_t x1493 = (x1390) * (x1430);
      number_t x1494 = (x1387) * (x1432);
      number_t x1495 = (x1493) + (x1494);
      number_t x1496 = (x1410) - (x1414);
      number_t x1497 = (x1413) - (x1417);
      tuple_number_t_number_t x1498 = (tuple_number_t_number_t){._1=x1496, ._2=x1497};
      number_t x1499 = (x1449) - (x1453);
      number_t x1500 = (x1452) - (x1456);
      tuple_number_t_number_t x1501 = (tuple_number_t_number_t){._1=x1499, ._2=x1500};
      number_t x1502 = (x1488) - (x1492);
      number_t x1503 = (x1491) - (x1495);
      tuple_number_t_number_t x1504 = (tuple_number_t_number_t){._1=x1502, ._2=x1503};
      array_tuple_number_t_number_t x1505 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1505->length=3;x1505->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x1505->arr[0] = x1498;
      x1505->arr[1] = x1501;
      x1505->arr[2] = x1504;
      tuple_number_t_number_t x1605 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x1532 = x1605;
      for (int x1098 = 0; x1098 < 3; x1098++) {
        tuple_number_t_number_t x1097 = x1532;
        number_t x1506 = (xs->arr[x1098]);
        index_t x1507 = (i) == (x1098);
        index_t x1508;
        if (x1507) {
          x1508 = 1;
        } else {
          x1508 = 0;
        }
        index_t x1514 = (x1098) + (x1385);
        number_t x1515 = (x1506) * (x1375);
        number_t x1516 = (x1508) * (x1375);
        number_t x1517 = (x1506) * (x1384);
        number_t x1518 = (x1516) + (x1517);
        number_t x1519 = (xs->arr[x1514]);
        index_t x1520 = (i) == (x1514);
        index_t x1521;
        if (x1520) {
          x1521 = 1;
        } else {
          x1521 = 0;
        }
        number_t x1522 = (x1097)._1;
        number_t x1523 = (x1097)._2;
        number_t x1524 = (x1515) * (x1519);
        number_t x1525 = (x1518) * (x1519);
        number_t x1526 = (x1515) * (x1521);
        number_t x1527 = (x1525) + (x1526);
        number_t x1528 = (x1522) + (x1524);
        number_t x1529 = (x1523) + (x1527);
        tuple_number_t_number_t x1530 = (tuple_number_t_number_t){._1=x1528, ._2=x1529};
        x1097 = x1530;
        x1532 = x1097;
      }
      
      number_t x1533 = cos(x1373);
      number_t x1538 = sin(x1373);
      number_t x1539 = -(x1538);
      number_t x1540 = (x1377) * (x1539);
      number_t x1541 = (x1532)._1;
      number_t x1542 = (x1532)._2;
      number_t x1543 = (1) - (x1533);
      number_t x1544 = -(x1540);
      array_number_t x1601 = (array_number_t)storage_alloc(sizeof(int) * 2);x1601->length=3;x1601->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
      for(int i00 = 0; i00 < x1601->length; i00++){
        index_t x1546 = (i00) + (x1385);
        number_t x1547 = (xs->arr[x1546]);
        index_t x1548 = (i) == (x1546);
        index_t x1549;
        if (x1548) {
          x1549 = 1;
        } else {
          x1549 = 0;
        }
        tuple_number_t_number_t x1558 = (x1505->arr[i00]);
        number_t x1559 = (x1558)._1;
        number_t x1560 = (x1558)._2;
        number_t x1567 = (x1377) * (x1533);
        number_t x1568 = (x1547) * (x1533);
        number_t x1569 = (x1549) * (x1533);
        number_t x1570 = (x1547) * (x1540);
        number_t x1571 = (x1569) + (x1570);
        number_t x1572 = (x1559) * (x1538);
        number_t x1573 = (x1560) * (x1538);
        number_t x1574 = (x1559) * (x1567);
        number_t x1575 = (x1573) + (x1574);
        number_t x1576 = (xs->arr[i00]);
        index_t x1577 = (i) == (i00);
        index_t x1578;
        if (x1577) {
          x1578 = 1;
        } else {
          x1578 = 0;
        }
        number_t x1583 = (x1576) * (x1375);
        number_t x1584 = (x1578) * (x1375);
        number_t x1585 = (x1576) * (x1384);
        number_t x1586 = (x1584) + (x1585);
        number_t x1587 = (x1541) * (x1543);
        number_t x1588 = (x1542) * (x1543);
        number_t x1589 = (x1541) * (x1544);
        number_t x1590 = (x1588) + (x1589);
        number_t x1591 = (x1568) + (x1572);
        number_t x1592 = (x1571) + (x1575);
        number_t x1593 = (x1583) * (x1587);
        number_t x1594 = (x1586) * (x1587);
        number_t x1595 = (x1583) * (x1590);
        number_t x1596 = (x1594) + (x1595);
        number_t x1597 = (x1591) + (x1593);
        number_t x1598 = (x1592) + (x1596);
        tuple_number_t_number_t x1599 = (tuple_number_t_number_t){._1=x1597, ._2=x1598};
        number_t x1600 = (x1599)._2;
        x1601->arr[i00] = x1600;
        
      }
      x1602->arr[i0] = x1601;
      
    }
    x1603->arr[i] = x1602;
    
  }
  return x1603;
}
