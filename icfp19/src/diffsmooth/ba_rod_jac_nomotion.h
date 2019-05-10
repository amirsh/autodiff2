#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba_rod_jac(array_number_t xs, index_t n) {
  index_t x1353 = (xs)->length;
  array_array_array_number_t x1652 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x1652->length=x1353;x1652->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x1353);
  for(int i = 0; i < x1652->length; i++){
    array_array_number_t x1651 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x1651->length=n;x1651->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x1651->length; i0++){
      index_t x1354 = (3) * (i0);
      number_t x1355 = (xs->arr[0]);
      index_t x1356 = (i) == (0);
      index_t x1357;
      if (x1356) {
        x1357 = 1;
      } else {
        x1357 = 0;
      }
      number_t x1361 = (x1355) * (x1355);
      number_t x1362 = (x1357) * (x1355);
      number_t x1363 = (x1355) * (x1357);
      number_t x1364 = (x1362) + (x1363);
      number_t x1365 = (xs->arr[1]);
      index_t x1366 = (i) == (1);
      index_t x1367;
      if (x1366) {
        x1367 = 1;
      } else {
        x1367 = 0;
      }
      number_t x1371 = (x1365) * (x1365);
      number_t x1372 = (x1367) * (x1365);
      number_t x1373 = (x1365) * (x1367);
      number_t x1374 = (x1372) + (x1373);
      number_t x1375 = (xs->arr[2]);
      index_t x1376 = (i) == (2);
      index_t x1377;
      if (x1376) {
        x1377 = 1;
      } else {
        x1377 = 0;
      }
      number_t x1381 = (x1361) + (x1371);
      number_t x1382 = (x1364) + (x1374);
      number_t x1383 = (x1375) * (x1375);
      number_t x1384 = (x1377) * (x1375);
      number_t x1385 = (x1375) * (x1377);
      number_t x1386 = (x1384) + (x1385);
      number_t x1387 = (x1381) + (x1383);
      number_t x1388 = sqrt(x1387);
      number_t x1389 = (x1382) + (x1386);
      number_t x1390 = (1) / (x1388);
      number_t x1391 = (x1390) * (0.5);
      number_t x1392 = (x1389) * (x1391);
      number_t x1397 = -(x1392);
      number_t x1398 = (x1388) * (x1388);
      number_t x1399 = (x1397) / (x1398);
      index_t x1400 = (11) + (x1354);
      index_t x1401 = (2) + (x1400);
      number_t x1402 = (x1365) * (x1390);
      number_t x1403 = (x1367) * (x1390);
      number_t x1404 = (x1365) * (x1399);
      number_t x1405 = (x1403) + (x1404);
      number_t x1406 = (xs->arr[x1401]);
      index_t x1407 = (i) == (x1401);
      index_t x1408;
      if (x1407) {
        x1408 = 1;
      } else {
        x1408 = 0;
      }
      index_t x1417 = (1) + (x1400);
      number_t x1418 = (x1375) * (x1390);
      number_t x1419 = (x1377) * (x1390);
      number_t x1420 = (x1375) * (x1399);
      number_t x1421 = (x1419) + (x1420);
      number_t x1422 = (xs->arr[x1417]);
      index_t x1423 = (i) == (x1417);
      index_t x1424;
      if (x1423) {
        x1424 = 1;
      } else {
        x1424 = 0;
      }
      number_t x1425 = (x1402) * (x1406);
      number_t x1426 = (x1405) * (x1406);
      number_t x1427 = (x1402) * (x1408);
      number_t x1428 = (x1426) + (x1427);
      number_t x1429 = (x1418) * (x1422);
      number_t x1430 = (x1421) * (x1422);
      number_t x1431 = (x1418) * (x1424);
      number_t x1432 = (x1430) + (x1431);
      number_t x1445 = (xs->arr[x1400]);
      index_t x1446 = (i) == (x1400);
      index_t x1447;
      if (x1446) {
        x1447 = 1;
      } else {
        x1447 = 0;
      }
      number_t x1457 = (x1355) * (x1390);
      number_t x1458 = (x1357) * (x1390);
      number_t x1459 = (x1355) * (x1399);
      number_t x1460 = (x1458) + (x1459);
      number_t x1464 = (x1418) * (x1445);
      number_t x1465 = (x1421) * (x1445);
      number_t x1466 = (x1418) * (x1447);
      number_t x1467 = (x1465) + (x1466);
      number_t x1468 = (x1457) * (x1406);
      number_t x1469 = (x1460) * (x1406);
      number_t x1470 = (x1457) * (x1408);
      number_t x1471 = (x1469) + (x1470);
      number_t x1503 = (x1457) * (x1422);
      number_t x1504 = (x1460) * (x1422);
      number_t x1505 = (x1457) * (x1424);
      number_t x1506 = (x1504) + (x1505);
      number_t x1507 = (x1402) * (x1445);
      number_t x1508 = (x1405) * (x1445);
      number_t x1509 = (x1402) * (x1447);
      number_t x1510 = (x1508) + (x1509);
      number_t x1511 = (x1425) - (x1429);
      number_t x1512 = (x1428) - (x1432);
      tuple_number_t_number_t x1513 = (tuple_number_t_number_t){._1=x1511, ._2=x1512};
      number_t x1514 = (x1464) - (x1468);
      number_t x1515 = (x1467) - (x1471);
      tuple_number_t_number_t x1516 = (tuple_number_t_number_t){._1=x1514, ._2=x1515};
      number_t x1517 = (x1503) - (x1507);
      number_t x1518 = (x1506) - (x1510);
      tuple_number_t_number_t x1519 = (tuple_number_t_number_t){._1=x1517, ._2=x1518};
      array_tuple_number_t_number_t x1520 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1520->length=3;x1520->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x1520->arr[0] = x1513;
      x1520->arr[1] = x1516;
      x1520->arr[2] = x1519;
      number_t x1536 = (x1457) * (x1445);
      number_t x1537 = (x1460) * (x1445);
      number_t x1538 = (x1457) * (x1447);
      number_t x1539 = (x1537) + (x1538);
      number_t x1556 = (x1402) * (x1422);
      number_t x1557 = (x1405) * (x1422);
      number_t x1558 = (x1402) * (x1424);
      number_t x1559 = (x1557) + (x1558);
      number_t x1576 = (x1536) + (x1556);
      number_t x1577 = (x1539) + (x1559);
      number_t x1578 = (x1418) * (x1406);
      number_t x1579 = (x1421) * (x1406);
      number_t x1580 = (x1418) * (x1408);
      number_t x1581 = (x1579) + (x1580);
      number_t x1582 = cos(x1388);
      number_t x1587 = sin(x1388);
      number_t x1588 = -(x1587);
      number_t x1589 = (x1392) * (x1588);
      number_t x1590 = (x1576) + (x1578);
      number_t x1591 = (x1577) + (x1581);
      number_t x1592 = (1) - (x1582);
      number_t x1593 = -(x1589);
      array_number_t x1650 = (array_number_t)storage_alloc(sizeof(int) * 2);x1650->length=3;x1650->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
      for(int i00 = 0; i00 < x1650->length; i00++){
        index_t x1595 = (i00) + (x1400);
        number_t x1596 = (xs->arr[x1595]);
        index_t x1597 = (i) == (x1595);
        index_t x1598;
        if (x1597) {
          x1598 = 1;
        } else {
          x1598 = 0;
        }
        tuple_number_t_number_t x1607 = (x1520->arr[i00]);
        number_t x1608 = (x1607)._1;
        number_t x1609 = (x1607)._2;
        number_t x1616 = (x1392) * (x1582);
        number_t x1617 = (x1596) * (x1582);
        number_t x1618 = (x1598) * (x1582);
        number_t x1619 = (x1596) * (x1589);
        number_t x1620 = (x1618) + (x1619);
        number_t x1621 = (x1608) * (x1587);
        number_t x1622 = (x1609) * (x1587);
        number_t x1623 = (x1608) * (x1616);
        number_t x1624 = (x1622) + (x1623);
        number_t x1625 = (xs->arr[i00]);
        index_t x1626 = (i) == (i00);
        index_t x1627;
        if (x1626) {
          x1627 = 1;
        } else {
          x1627 = 0;
        }
        number_t x1632 = (x1625) * (x1390);
        number_t x1633 = (x1627) * (x1390);
        number_t x1634 = (x1625) * (x1399);
        number_t x1635 = (x1633) + (x1634);
        number_t x1636 = (x1590) * (x1592);
        number_t x1637 = (x1591) * (x1592);
        number_t x1638 = (x1590) * (x1593);
        number_t x1639 = (x1637) + (x1638);
        number_t x1640 = (x1617) + (x1621);
        number_t x1641 = (x1620) + (x1624);
        number_t x1642 = (x1632) * (x1636);
        number_t x1643 = (x1635) * (x1636);
        number_t x1644 = (x1632) * (x1639);
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
  array_array_array_number_t x6242 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x6242->length=(xs)->length;x6242->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (xs)->length);
  for(int i = 0; i < x6242->length; i++){
    array_array_number_t x6241 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x6241->length=n;x6241->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x6241->length; i0++){
      index_t x5481 = (3) * (i0);
      number_t x5624 = (xs->arr[0]);
      index_t x5622;
      if ((i) == (0)) {
        x5622 = 1;
      } else {
        x5622 = 0;
      }
      number_t x5625 = (xs->arr[0]);
      index_t x5623;
      if ((i) == (0)) {
        x5623 = 1;
      } else {
        x5623 = 0;
      }
      number_t x5637 = (x5624) * (x5625);
      number_t x5635 = ((x5622) * (x5625)) + ((x5624) * (x5623));
      number_t x56240 = (xs->arr[1]);
      index_t x56220;
      if ((i) == (1)) {
        x56220 = 1;
      } else {
        x56220 = 0;
      }
      number_t x56250 = (xs->arr[1]);
      index_t x56230;
      if ((i) == (1)) {
        x56230 = 1;
      } else {
        x56230 = 0;
      }
      number_t x56360 = (0) + (x5637);
      number_t x56340 = (0) + (x5635);
      number_t x56370 = (x56240) * (x56250);
      number_t x56350 = ((x56220) * (x56250)) + ((x56240) * (x56230));
      number_t x56241 = (xs->arr[2]);
      index_t x56221;
      if ((i) == (2)) {
        x56221 = 1;
      } else {
        x56221 = 0;
      }
      number_t x56251 = (xs->arr[2]);
      index_t x56231;
      if ((i) == (2)) {
        x56231 = 1;
      } else {
        x56231 = 0;
      }
      number_t x56361 = (x56360) + (x56370);
      number_t x56341 = (x56340) + (x56350);
      number_t x56371 = (x56241) * (x56251);
      number_t x56351 = ((x56221) * (x56251)) + ((x56241) * (x56231));
      number_t x5515 = sqrt((x56361) + (x56371));
      number_t x5611 = ((x56341) + (x56351)) * (((1) / (x5515)) * (0.5));
      number_t x5942 = (xs->arr[1]);
      index_t x5940;
      if ((i) == (1)) {
        x5940 = 1;
      } else {
        x5940 = 0;
      }
      number_t x5943 = (1) / (x5515);
      number_t x5941 = (-(x5611)) / ((x5515) * (x5515));
      index_t x5883 = (11) + (x5481);
      index_t j0 = (2) + (x5883);
      number_t x6026 = (xs->arr[j0]);
      index_t x6024;
      if ((i) == (j0)) {
        x6024 = 1;
      } else {
        x6024 = 0;
      }
      number_t x6027 = (xs->arr[5]);
      index_t x6025;
      if ((i) == (5)) {
        x6025 = 1;
      } else {
        x6025 = 0;
      }
      number_t x5768 = (x5942) * (x5943);
      number_t x5766 = ((x5940) * (x5943)) + ((x5942) * (x5941));
      number_t x5769 = (x6026) - (x6027);
      index_t x5767 = (x6024) - (x6025);
      number_t x5930 = (xs->arr[2]);
      index_t x5928;
      if ((i) == (2)) {
        x5928 = 1;
      } else {
        x5928 = 0;
      }
      number_t x5931 = (1) / (x5515);
      number_t x5929 = (-(x5611)) / ((x5515) * (x5515));
      index_t x5871 = (11) + (x5481);
      index_t j10 = (1) + (x5871);
      number_t x6014 = (xs->arr[j10]);
      index_t x6012;
      if ((i) == (j10)) {
        x6012 = 1;
      } else {
        x6012 = 0;
      }
      number_t x6015 = (xs->arr[4]);
      index_t x6013;
      if ((i) == (4)) {
        x6013 = 1;
      } else {
        x6013 = 0;
      }
      number_t x5756 = (x5930) * (x5931);
      number_t x5754 = ((x5928) * (x5931)) + ((x5930) * (x5929));
      number_t x5757 = (x6014) - (x6015);
      index_t x5755 = (x6012) - (x6013);
      number_t x5672 = (x5768) * (x5769);
      number_t x5670 = ((x5766) * (x5769)) + ((x5768) * (x5767));
      number_t x5673 = (x5756) * (x5757);
      number_t x5671 = ((x5754) * (x5757)) + ((x5756) * (x5755));
      number_t x5966 = (xs->arr[2]);
      index_t x5964;
      if ((i) == (2)) {
        x5964 = 1;
      } else {
        x5964 = 0;
      }
      number_t x5967 = (1) / (x5515);
      number_t x5965 = (-(x5611)) / ((x5515) * (x5515));
      index_t j00 = (11) + (x5481);
      number_t x6050 = (xs->arr[j00]);
      index_t x6048;
      if ((i) == (j00)) {
        x6048 = 1;
      } else {
        x6048 = 0;
      }
      number_t x6051 = (xs->arr[3]);
      index_t x6049;
      if ((i) == (3)) {
        x6049 = 1;
      } else {
        x6049 = 0;
      }
      number_t x5792 = (x5966) * (x5967);
      number_t x5790 = ((x5964) * (x5967)) + ((x5966) * (x5965));
      number_t x5793 = (x6050) - (x6051);
      index_t x5791 = (x6048) - (x6049);
      number_t x5954 = (xs->arr[0]);
      index_t x5952;
      if ((i) == (0)) {
        x5952 = 1;
      } else {
        x5952 = 0;
      }
      number_t x5955 = (1) / (x5515);
      number_t x5953 = (-(x5611)) / ((x5515) * (x5515));
      index_t x5895 = (11) + (x5481);
      index_t j100 = (2) + (x5895);
      number_t x6038 = (xs->arr[j100]);
      index_t x6036;
      if ((i) == (j100)) {
        x6036 = 1;
      } else {
        x6036 = 0;
      }
      number_t x6039 = (xs->arr[5]);
      index_t x6037;
      if ((i) == (5)) {
        x6037 = 1;
      } else {
        x6037 = 0;
      }
      number_t x5780 = (x5954) * (x5955);
      number_t x5778 = ((x5952) * (x5955)) + ((x5954) * (x5953));
      number_t x5781 = (x6038) - (x6039);
      index_t x5779 = (x6036) - (x6037);
      number_t x5684 = (x5792) * (x5793);
      number_t x5682 = ((x5790) * (x5793)) + ((x5792) * (x5791));
      number_t x5685 = (x5780) * (x5781);
      number_t x5683 = ((x5778) * (x5781)) + ((x5780) * (x5779));
      number_t x5990 = (xs->arr[0]);
      index_t x5988;
      if ((i) == (0)) {
        x5988 = 1;
      } else {
        x5988 = 0;
      }
      number_t x5991 = (1) / (x5515);
      number_t x5989 = (-(x5611)) / ((x5515) * (x5515));
      index_t x5907 = (11) + (x5481);
      index_t j01 = (1) + (x5907);
      number_t x6074 = (xs->arr[j01]);
      index_t x6072;
      if ((i) == (j01)) {
        x6072 = 1;
      } else {
        x6072 = 0;
      }
      number_t x6075 = (xs->arr[4]);
      index_t x6073;
      if ((i) == (4)) {
        x6073 = 1;
      } else {
        x6073 = 0;
      }
      number_t x5816 = (x5990) * (x5991);
      number_t x5814 = ((x5988) * (x5991)) + ((x5990) * (x5989));
      number_t x5817 = (x6074) - (x6075);
      index_t x5815 = (x6072) - (x6073);
      number_t x5978 = (xs->arr[1]);
      index_t x5976;
      if ((i) == (1)) {
        x5976 = 1;
      } else {
        x5976 = 0;
      }
      number_t x5979 = (1) / (x5515);
      number_t x5977 = (-(x5611)) / ((x5515) * (x5515));
      index_t j101 = (11) + (x5481);
      number_t x6062 = (xs->arr[j101]);
      index_t x6060;
      if ((i) == (j101)) {
        x6060 = 1;
      } else {
        x6060 = 0;
      }
      number_t x6063 = (xs->arr[3]);
      index_t x6061;
      if ((i) == (3)) {
        x6061 = 1;
      } else {
        x6061 = 0;
      }
      number_t x5804 = (x5978) * (x5979);
      number_t x5802 = ((x5976) * (x5979)) + ((x5978) * (x5977));
      number_t x5805 = (x6062) - (x6063);
      index_t x5803 = (x6060) - (x6061);
      number_t x5696 = (x5816) * (x5817);
      number_t x5694 = ((x5814) * (x5817)) + ((x5816) * (x5815));
      number_t x5697 = (x5804) * (x5805);
      number_t x5695 = ((x5802) * (x5805)) + ((x5804) * (x5803));
      tuple_number_t_number_t x6232 = (tuple_number_t_number_t){._1=(x5672) - (x5673), ._2=(x5670) - (x5671)};
      tuple_number_t_number_t x6233 = (tuple_number_t_number_t){._1=(x5684) - (x5685), ._2=(x5682) - (x5683)};
      tuple_number_t_number_t x6234 = (tuple_number_t_number_t){._1=(x5696) - (x5697), ._2=(x5694) - (x5695)};
      array_tuple_number_t_number_t w_cross_X = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      w_cross_X->arr[0] = x6232;
      w_cross_X->arr[1] = x6233;
      w_cross_X->arr[2] = x6234;
      number_t x6098 = (xs->arr[0]);
      index_t x6096;
      if ((i) == (0)) {
        x6096 = 1;
      } else {
        x6096 = 0;
      }
      number_t x6099 = (1) / (x5515);
      number_t x6097 = (-(x5611)) / ((x5515) * (x5515));
      index_t x6123 = (11) + (x5481);
      index_t j000 = (0) + (x6123);
      index_t j1 = (0) + (3);
      number_t x6170 = (xs->arr[j000]);
      index_t x6168;
      if ((i) == (j000)) {
        x6168 = 1;
      } else {
        x6168 = 0;
      }
      number_t x6171 = (xs->arr[j1]);
      index_t x6169;
      if ((i) == (j1)) {
        x6169 = 1;
      } else {
        x6169 = 0;
      }
      number_t x6182 = (x6098) * (x6099);
      number_t x6180 = ((x6096) * (x6099)) + ((x6098) * (x6097));
      number_t x6183 = (x6170) - (x6171);
      index_t x6181 = (x6168) - (x6169);
      number_t x6195 = (x6182) * (x6183);
      number_t x6193 = ((x6180) * (x6183)) + ((x6182) * (x6181));
      number_t x60980 = (xs->arr[1]);
      index_t x60960;
      if ((i) == (1)) {
        x60960 = 1;
      } else {
        x60960 = 0;
      }
      number_t x60990 = (1) / (x5515);
      number_t x60970 = (-(x5611)) / ((x5515) * (x5515));
      index_t x61230 = (11) + (x5481);
      index_t j010 = (1) + (x61230);
      index_t j11 = (1) + (3);
      number_t x61700 = (xs->arr[j010]);
      index_t x61680;
      if ((i) == (j010)) {
        x61680 = 1;
      } else {
        x61680 = 0;
      }
      number_t x61710 = (xs->arr[j11]);
      index_t x61690;
      if ((i) == (j11)) {
        x61690 = 1;
      } else {
        x61690 = 0;
      }
      number_t x61820 = (x60980) * (x60990);
      number_t x61800 = ((x60960) * (x60990)) + ((x60980) * (x60970));
      number_t x61830 = (x61700) - (x61710);
      index_t x61810 = (x61680) - (x61690);
      number_t x61940 = (0) + (x6195);
      number_t x61920 = (0) + (x6193);
      number_t x61950 = (x61820) * (x61830);
      number_t x61930 = ((x61800) * (x61830)) + ((x61820) * (x61810));
      number_t x60981 = (xs->arr[2]);
      index_t x60961;
      if ((i) == (2)) {
        x60961 = 1;
      } else {
        x60961 = 0;
      }
      number_t x60991 = (1) / (x5515);
      number_t x60971 = (-(x5611)) / ((x5515) * (x5515));
      index_t x61231 = (11) + (x5481);
      index_t j0000 = (2) + (x61231);
      index_t j12 = (2) + (3);
      number_t x61701 = (xs->arr[j0000]);
      index_t x61681;
      if ((i) == (j0000)) {
        x61681 = 1;
      } else {
        x61681 = 0;
      }
      number_t x61711 = (xs->arr[j12]);
      index_t x61691;
      if ((i) == (j12)) {
        x61691 = 1;
      } else {
        x61691 = 0;
      }
      number_t x61821 = (x60981) * (x60991);
      number_t x61801 = ((x60961) * (x60991)) + ((x60981) * (x60971));
      number_t x61831 = (x61701) - (x61711);
      index_t x61811 = (x61681) - (x61691);
      number_t x61941 = (x61940) + (x61950);
      number_t x61921 = (x61920) + (x61930);
      number_t x61951 = (x61821) * (x61831);
      number_t x61931 = ((x61801) * (x61831)) + ((x61821) * (x61811));
      number_t x5855 = cos(x5515);
      number_t x5853 = (((x56341) + (x56351)) * (((1) / (x5515)) * (0.5))) * (-(sin(x5515)));
      number_t x5744 = (x61941) + (x61951);
      number_t x5742 = (x61921) + (x61931);
      number_t x5745 = (1) - (x5855);
      number_t x5743 = -(x5853);
      array_tuple_number_t_number_t x6236 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6236->length=3;x6236->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x5843 = 0; x5843 < x6236->length; x5843++){
        index_t x5919 = (11) + (x5481);
        index_t j = (x5843) + (x5919);
        index_t j0100 = (x5843) + (3);
        number_t x6086 = (xs->arr[j]);
        index_t x6084;
        if ((i) == (j)) {
          x6084 = 1;
        } else {
          x6084 = 0;
        }
        number_t x6087 = (xs->arr[j0100]);
        index_t x6085;
        if ((i) == (j0100)) {
          x6085 = 1;
        } else {
          x6085 = 0;
        }
        number_t x6110 = (x6086) - (x6087);
        index_t x6108 = (x6084) - (x6085);
        number_t x6111 = cos(x5515);
        number_t x6109 = (((x56341) + (x56351)) * (((1) / (x5515)) * (0.5))) * (-(sin(x5515)));
        tuple_number_t_number_t xi0 = (w_cross_X->arr[x5843]);
        number_t x6146 = (xi0)._1;
        number_t x6144 = (xi0)._2;
        number_t x6147 = sin(x5515);
        number_t x6145 = (((x56341) + (x56351)) * (((1) / (x5515)) * (0.5))) * (cos(x5515));
        number_t x6158 = (x6110) * (x6111);
        number_t x6156 = ((x6108) * (x6111)) + ((x6110) * (x6109));
        number_t x6159 = (x6146) * (x6147);
        number_t x6157 = ((x6144) * (x6147)) + ((x6146) * (x6145));
        number_t x6206 = (xs->arr[x5843]);
        index_t x6204;
        if ((i) == (x5843)) {
          x6204 = 1;
        } else {
          x6204 = 0;
        }
        number_t x6207 = (1) / (x5515);
        number_t x6205 = (-(x5611)) / ((x5515) * (x5515));
        number_t x6218 = (x6206) * (x6207);
        number_t x6216 = ((x6204) * (x6207)) + ((x6206) * (x6205));
        number_t x6219 = (x5744) * (x5745);
        number_t x6217 = ((x5742) * (x5745)) + ((x5744) * (x5743));
        number_t x6230 = (x6158) + (x6159);
        number_t x6228 = (x6156) + (x6157);
        number_t x6231 = (x6218) * (x6219);
        number_t x6229 = ((x6216) * (x6219)) + ((x6218) * (x6217));
        tuple_number_t_number_t x6235 = (tuple_number_t_number_t){._1=(x6230) + (x6231), ._2=(x6228) + (x6229)};
        x6236->arr[x5843] = x6235;
        
      }
      array_tuple_number_t_number_t Xcam = x6236;
      tuple_number_t_number_t x5501 = (Xcam->arr[2]);
      number_t x5505 = (x5501)._1;
      number_t x5503 = (x5501)._2;
      tuple_number_t_number_t xi = (Xcam->arr[0]);
      number_t x5648 = (xi)._1;
      number_t x5646 = (xi)._2;
      number_t x5649 = (1) / (x5505);
      number_t x5647 = (-(x5503)) / ((x5505) * (x5505));
      number_t x5732 = (x5648) * (x5649);
      number_t x5730 = ((x5646) * (x5649)) + ((x5648) * (x5647));
      number_t x5733 = (x5648) * (x5649);
      number_t x5731 = ((x5646) * (x5649)) + ((x5648) * (x5647));
      number_t x5841 = (x5732) * (x5733);
      number_t x5839 = ((x5730) * (x5733)) + ((x5732) * (x5731));
      tuple_number_t_number_t xi0 = (Xcam->arr[1]);
      number_t x56480 = (xi0)._1;
      number_t x56460 = (xi0)._2;
      number_t x56490 = (1) / (x5505);
      number_t x56470 = (-(x5503)) / ((x5505) * (x5505));
      number_t x57320 = (x56480) * (x56490);
      number_t x57300 = ((x56460) * (x56490)) + ((x56480) * (x56470));
      number_t x57330 = (x56480) * (x56490);
      number_t x57310 = ((x56460) * (x56490)) + ((x56480) * (x56470));
      number_t x58400 = (0) + (x5841);
      number_t x58380 = (0) + (x5839);
      number_t x58410 = (x57320) * (x57330);
      number_t x58390 = ((x57300) * (x57330)) + ((x57320) * (x57310));
      number_t x5600 = (xs->arr[9]);
      index_t x5598;
      if ((i) == (9)) {
        x5598 = 1;
      } else {
        x5598 = 0;
      }
      number_t x5601 = (x58400) + (x58410);
      number_t x5599 = (x58380) + (x58390);
      number_t x5577 = (x5600) * (x5601);
      number_t x5575 = ((x5598) * (x5601)) + ((x5600) * (x5599));
      number_t x5588 = (xs->arr[10]);
      index_t x5586;
      if ((i) == (10)) {
        x5586 = 1;
      } else {
        x5586 = 0;
      }
      number_t x5589 = (x58400) + (x58410);
      number_t x5587 = (x58380) + (x58390);
      number_t x5564 = (x5588) * (x5589);
      number_t x5562 = ((x5586) * (x5589)) + ((x5588) * (x5587));
      number_t x5565 = (x58400) + (x58410);
      number_t x5563 = (x58380) + (x58390);
      number_t x5546 = (1) + (x5577);
      number_t x5547 = (x5564) * (x5565);
      number_t x5545 = ((x5562) * (x5565)) + ((x5564) * (x5563));
      array_tuple_number_t_number_t x6238 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x6238->length=2;x6238->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x5553 = 0; x5553 < x6238->length; x5553++){
        tuple_number_t_number_t xi1 = (Xcam->arr[x5553]);
        number_t x5720 = (xi1)._1;
        number_t x5718 = (xi1)._2;
        number_t x5721 = (1) / (x5505);
        number_t x5719 = (-(x5503)) / ((x5505) * (x5505));
        number_t x5828 = (x5720) * (x5721);
        number_t x5826 = ((x5718) * (x5721)) + ((x5720) * (x5719));
        number_t x5829 = (x5546) + (x5547);
        number_t x5827 = (x5575) + (x5545);
        tuple_number_t_number_t x6237 = (tuple_number_t_number_t){._1=(x5828) * (x5829), ._2=((x5826) * (x5829)) + ((x5828) * (x5827))};
        x6238->arr[x5553] = x6237;
        
      }
      array_tuple_number_t_number_t distorted = x6238;
      array_tuple_number_t_number_t m = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m->length=2;m->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x5511 = 0; x5511 < m->length; x5511++){
        index_t j0100 = (x5511) + (7);
        tuple_number_t_number_t xi1 = (distorted->arr[x5511]);
        number_t x5660 = (xi1)._1;
        number_t x5658 = (xi1)._2;
        number_t x5661 = (xs->arr[6]);
        index_t x5659;
        if ((i) == (6)) {
          x5659 = 1;
        } else {
          x5659 = 0;
        }
        number_t x5708 = (xs->arr[j0100]);
        index_t x5706;
        if ((i) == (j0100)) {
          x5706 = 1;
        } else {
          x5706 = 0;
        }
        number_t x5709 = (x5660) * (x5661);
        number_t x5707 = ((x5658) * (x5661)) + ((x5660) * (x5659));
        tuple_number_t_number_t x6239 = (tuple_number_t_number_t){._1=(x5708) + (x5709), ._2=(x5706) + (x5707)};
        m->arr[x5511] = x6239;
        
      }
      array_number_t x6240 = (array_number_t)storage_alloc(sizeof(int) * 2);x6240->length=(m)->length;x6240->arr = (number_t*)storage_alloc(sizeof(number_t) * (m)->length);
      for(int i00 = 0; i00 < x6240->length; i00++){
        tuple_number_t_number_t s = (m->arr[i00]);
        x6240->arr[i00] = (s)._2;
        
      }
      x6241->arr[i0] = x6240;
      
    }
    x6242->arr[i] = x6241;
    
  }
  return x6242;
}

array_array_array_number_t ba_proj_jac2(array_number_t cam, array_number_t xs, index_t n) {
  array_array_array_number_t x786 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x786->length=(cam)->length;x786->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (cam)->length);
  for(int i = 0; i < x786->length; i++){
    array_array_number_t x785 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x785->length=n;x785->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x785->length; i0++){
      index_t x14 = (3) * (i0);
      number_t x83 = (cam->arr[0]);
      index_t x81;
      if ((i) == (0)) {
        x81 = 1;
      } else {
        x81 = 0;
      }
      number_t x84 = (cam->arr[0]);
      index_t x82;
      if ((i) == (0)) {
        x82 = 1;
      } else {
        x82 = 0;
      }
      number_t x134 = (x83) * (x84);
      number_t x132 = ((x81) * (x84)) + ((x83) * (x82));
      number_t x830 = (cam->arr[1]);
      index_t x810;
      if ((i) == (1)) {
        x810 = 1;
      } else {
        x810 = 0;
      }
      number_t x840 = (cam->arr[1]);
      index_t x820;
      if ((i) == (1)) {
        x820 = 1;
      } else {
        x820 = 0;
      }
      number_t x1330 = (0) + (x134);
      number_t x1310 = (0) + (x132);
      number_t x1340 = (x830) * (x840);
      number_t x1320 = ((x810) * (x840)) + ((x830) * (x820));
      number_t x831 = (cam->arr[2]);
      index_t x811;
      if ((i) == (2)) {
        x811 = 1;
      } else {
        x811 = 0;
      }
      number_t x841 = (cam->arr[2]);
      index_t x821;
      if ((i) == (2)) {
        x821 = 1;
      } else {
        x821 = 0;
      }
      number_t x1331 = (x1330) + (x1340);
      number_t x1311 = (x1310) + (x1320);
      number_t x1341 = (x831) * (x841);
      number_t x1321 = ((x811) * (x841)) + ((x831) * (x821));
      number_t x46 = sqrt((x1331) + (x1341));
      number_t x168 = ((x1311) + (x1321)) * (((1) / (x46)) * (0.5));
      number_t x439 = (cam->arr[1]);
      index_t x437;
      if ((i) == (1)) {
        x437 = 1;
      } else {
        x437 = 0;
      }
      number_t x440 = (1) / (x46);
      number_t x438 = (-(x168)) / ((x46) * (x46));
      index_t x428 = (11) + (x14);
      index_t j = (2) + (x428);
      tuple_number_t_index_t x00 = (tuple_number_t_index_t){._1=(xs->arr[j]), ._2=0};
      number_t x547 = (x00)._1;
      index_t x545 = (x00)._2;
      number_t x548 = (cam->arr[5]);
      index_t x546;
      if ((i) == (5)) {
        x546 = 1;
      } else {
        x546 = 0;
      }
      number_t x301 = (x439) * (x440);
      number_t x299 = ((x437) * (x440)) + ((x439) * (x438));
      number_t x302 = (x547) - (x548);
      index_t x300 = (x545) - (x546);
      number_t x415 = (cam->arr[2]);
      index_t x413;
      if ((i) == (2)) {
        x413 = 1;
      } else {
        x413 = 0;
      }
      number_t x416 = (1) / (x46);
      number_t x414 = (-(x168)) / ((x46) * (x46));
      index_t x404 = (11) + (x14);
      index_t j0 = (1) + (x404);
      tuple_number_t_index_t x000 = (tuple_number_t_index_t){._1=(xs->arr[j0]), ._2=0};
      number_t x535 = (x000)._1;
      index_t x533 = (x000)._2;
      number_t x536 = (cam->arr[4]);
      index_t x534;
      if ((i) == (4)) {
        x534 = 1;
      } else {
        x534 = 0;
      }
      number_t x289 = (x415) * (x416);
      number_t x287 = ((x413) * (x416)) + ((x415) * (x414));
      number_t x2901 = (x535) - (x536);
      index_t x288 = (x533) - (x534);
      number_t x217 = (x301) * (x302);
      number_t x215 = ((x299) * (x302)) + ((x301) * (x300));
      number_t x218 = (x289) * (x2901);
      number_t x216 = ((x287) * (x2901)) + ((x289) * (x288));
      number_t x475 = (cam->arr[2]);
      index_t x473;
      if ((i) == (2)) {
        x473 = 1;
      } else {
        x473 = 0;
      }
      number_t x476 = (1) / (x46);
      number_t x474 = (-(x168)) / ((x46) * (x46));
      index_t j1 = (11) + (x14);
      tuple_number_t_index_t x001 = (tuple_number_t_index_t){._1=(xs->arr[j1]), ._2=0};
      number_t x571 = (x001)._1;
      index_t x569 = (x001)._2;
      number_t x572 = (cam->arr[3]);
      index_t x570;
      if ((i) == (3)) {
        x570 = 1;
      } else {
        x570 = 0;
      }
      number_t x325 = (x475) * (x476);
      number_t x323 = ((x473) * (x476)) + ((x475) * (x474));
      number_t x326 = (x571) - (x572);
      index_t x324 = (x569) - (x570);
      number_t x463 = (cam->arr[0]);
      index_t x461;
      if ((i) == (0)) {
        x461 = 1;
      } else {
        x461 = 0;
      }
      number_t x464 = (1) / (x46);
      number_t x462 = (-(x168)) / ((x46) * (x46));
      index_t x452 = (11) + (x14);
      index_t j00 = (2) + (x452);
      tuple_number_t_index_t x0000 = (tuple_number_t_index_t){._1=(xs->arr[j00]), ._2=0};
      number_t x559 = (x0000)._1;
      index_t x557 = (x0000)._2;
      number_t x560 = (cam->arr[5]);
      index_t x558;
      if ((i) == (5)) {
        x558 = 1;
      } else {
        x558 = 0;
      }
      number_t x313 = (x463) * (x464);
      number_t x311 = ((x461) * (x464)) + ((x463) * (x462));
      number_t x314 = (x559) - (x560);
      index_t x312 = (x557) - (x558);
      number_t x229 = (x325) * (x326);
      number_t x227 = ((x323) * (x326)) + ((x325) * (x324));
      number_t x230 = (x313) * (x314);
      number_t x228 = ((x311) * (x314)) + ((x313) * (x312));
      number_t x511 = (cam->arr[0]);
      index_t x509;
      if ((i) == (0)) {
        x509 = 1;
      } else {
        x509 = 0;
      }
      number_t x512 = (1) / (x46);
      number_t x510 = (-(x168)) / ((x46) * (x46));
      index_t x500 = (11) + (x14);
      index_t j10 = (1) + (x500);
      tuple_number_t_index_t x002 = (tuple_number_t_index_t){._1=(xs->arr[j10]), ._2=0};
      number_t x595 = (x002)._1;
      index_t x593 = (x002)._2;
      number_t x596 = (cam->arr[4]);
      index_t x594;
      if ((i) == (4)) {
        x594 = 1;
      } else {
        x594 = 0;
      }
      number_t x349 = (x511) * (x512);
      number_t x347 = ((x509) * (x512)) + ((x511) * (x510));
      number_t x350 = (x595) - (x596);
      index_t x348 = (x593) - (x594);
      number_t x487 = (cam->arr[1]);
      index_t x485;
      if ((i) == (1)) {
        x485 = 1;
      } else {
        x485 = 0;
      }
      number_t x488 = (1) / (x46);
      number_t x486 = (-(x168)) / ((x46) * (x46));
      index_t j01 = (11) + (x14);
      tuple_number_t_index_t x0001 = (tuple_number_t_index_t){._1=(xs->arr[j01]), ._2=0};
      number_t x583 = (x0001)._1;
      index_t x581 = (x0001)._2;
      number_t x584 = (cam->arr[3]);
      index_t x582;
      if ((i) == (3)) {
        x582 = 1;
      } else {
        x582 = 0;
      }
      number_t x337 = (x487) * (x488);
      number_t x335 = ((x485) * (x488)) + ((x487) * (x486));
      number_t x338 = (x583) - (x584);
      index_t x336 = (x581) - (x582);
      number_t x241 = (x349) * (x350);
      number_t x239 = ((x347) * (x350)) + ((x349) * (x348));
      number_t x242 = (x337) * (x338);
      number_t x240 = ((x335) * (x338)) + ((x337) * (x336));
      tuple_number_t_number_t x776 = (tuple_number_t_number_t){._1=(x217) - (x218), ._2=(x215) - (x216)};
      tuple_number_t_number_t x777 = (tuple_number_t_number_t){._1=(x229) - (x230), ._2=(x227) - (x228)};
      tuple_number_t_number_t x778 = (tuple_number_t_number_t){._1=(x241) - (x242), ._2=(x239) - (x240)};
      array_tuple_number_t_number_t w_cross_X = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      w_cross_X->arr[0] = x776;
      w_cross_X->arr[1] = x777;
      w_cross_X->arr[2] = x778;
      number_t x619 = (cam->arr[0]);
      index_t x617;
      if ((i) == (0)) {
        x617 = 1;
      } else {
        x617 = 0;
      }
      number_t x620 = (1) / (x46);
      number_t x618 = (-(x168)) / ((x46) * (x46));
      index_t x656 = (11) + (x14);
      index_t j11 = (0) + (x656);
      tuple_number_t_index_t x00000 = (tuple_number_t_index_t){._1=(xs->arr[j11]), ._2=0};
      index_t j000 = (0) + (3);
      number_t x679 = (x00000)._1;
      index_t x677 = (x00000)._2;
      number_t x680 = (cam->arr[j000]);
      index_t x678;
      if ((i) == (j000)) {
        x678 = 1;
      } else {
        x678 = 0;
      }
      number_t x703 = (x619) * (x620);
      number_t x701 = ((x617) * (x620)) + ((x619) * (x618));
      number_t x704 = (x679) - (x680);
      index_t x702 = (x677) - (x678);
      number_t x728 = (x703) * (x704);
      number_t x726 = ((x701) * (x704)) + ((x703) * (x702));
      number_t x6190 = (cam->arr[1]);
      index_t x6170;
      if ((i) == (1)) {
        x6170 = 1;
      } else {
        x6170 = 0;
      }
      number_t x6200 = (1) / (x46);
      number_t x6180 = (-(x168)) / ((x46) * (x46));
      index_t x6560 = (11) + (x14);
      index_t j2 = (1) + (x6560);
      tuple_number_t_index_t x00010 = (tuple_number_t_index_t){._1=(xs->arr[j2]), ._2=0};
      index_t j0000 = (1) + (3);
      number_t x6790 = (x00010)._1;
      index_t x6770 = (x00010)._2;
      number_t x6800 = (cam->arr[j0000]);
      index_t x6780;
      if ((i) == (j0000)) {
        x6780 = 1;
      } else {
        x6780 = 0;
      }
      number_t x7030 = (x6190) * (x6200);
      number_t x7010 = ((x6170) * (x6200)) + ((x6190) * (x6180));
      number_t x7040 = (x6790) - (x6800);
      index_t x7020 = (x6770) - (x6780);
      number_t x7270 = (0) + (x728);
      number_t x7250 = (0) + (x726);
      number_t x7280 = (x7030) * (x7040);
      number_t x7260 = ((x7010) * (x7040)) + ((x7030) * (x7020));
      number_t x6191 = (cam->arr[2]);
      index_t x6171;
      if ((i) == (2)) {
        x6171 = 1;
      } else {
        x6171 = 0;
      }
      number_t x6201 = (1) / (x46);
      number_t x6181 = (-(x168)) / ((x46) * (x46));
      index_t x6561 = (11) + (x14);
      index_t j100 = (2) + (x6561);
      tuple_number_t_index_t x00001 = (tuple_number_t_index_t){._1=(xs->arr[j100]), ._2=0};
      index_t j010 = (2) + (3);
      number_t x6791 = (x00001)._1;
      index_t x6771 = (x00001)._2;
      number_t x6801 = (cam->arr[j010]);
      index_t x6781;
      if ((i) == (j010)) {
        x6781 = 1;
      } else {
        x6781 = 0;
      }
      number_t x7031 = (x6191) * (x6201);
      number_t x7011 = ((x6171) * (x6201)) + ((x6191) * (x6181));
      number_t x7041 = (x6791) - (x6801);
      index_t x7021 = (x6771) - (x6781);
      number_t x7271 = (x7270) + (x7280);
      number_t x7251 = (x7250) + (x7260);
      number_t x7281 = (x7031) * (x7041);
      number_t x7261 = ((x7011) * (x7041)) + ((x7031) * (x7021));
      number_t x388 = cos(x46);
      number_t x386 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (-(sin(x46)));
      number_t x277 = (x7271) + (x7281);
      number_t x275 = (x7251) + (x7261);
      number_t x278 = (1) - (x388);
      number_t x276 = -(x386);
      array_tuple_number_t_number_t x780 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x780->length=3;x780->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x376 = 0; x376 < x780->length; x376++){
        index_t x524 = (11) + (x14);
        index_t j20 = (x376) + (x524);
        tuple_number_t_index_t x0010 = (tuple_number_t_index_t){._1=(xs->arr[j20]), ._2=0};
        index_t j110 = (x376) + (3);
        number_t x631 = (x0010)._1;
        index_t x629 = (x0010)._2;
        number_t x632 = (cam->arr[j110]);
        index_t x630;
        if ((i) == (j110)) {
          x630 = 1;
        } else {
          x630 = 0;
        }
        number_t x643 = (x631) - (x632);
        index_t x641 = (x629) - (x630);
        number_t x644 = cos(x46);
        number_t x642 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (-(sin(x46)));
        tuple_number_t_number_t xi0 = (w_cross_X->arr[x376]);
        number_t x691 = (xi0)._1;
        number_t x689 = (xi0)._2;
        number_t x692 = sin(x46);
        number_t x690 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (cos(x46));
        number_t x715 = (x643) * (x644);
        number_t x713 = ((x641) * (x644)) + ((x643) * (x642));
        number_t x716 = (x691) * (x692);
        number_t x714 = ((x689) * (x692)) + ((x691) * (x690));
        number_t x739 = (cam->arr[x376]);
        index_t x737;
        if ((i) == (x376)) {
          x737 = 1;
        } else {
          x737 = 0;
        }
        number_t x740 = (1) / (x46);
        number_t x738 = (-(x168)) / ((x46) * (x46));
        number_t x751 = (x739) * (x740);
        number_t x749 = ((x737) * (x740)) + ((x739) * (x738));
        number_t x752 = (x277) * (x278);
        number_t x750 = ((x275) * (x278)) + ((x277) * (x276));
        number_t x763 = (x715) + (x716);
        number_t x761 = (x713) + (x714);
        number_t x764 = (x751) * (x752);
        number_t x762 = ((x749) * (x752)) + ((x751) * (x750));
        tuple_number_t_number_t x779 = (tuple_number_t_number_t){._1=(x763) + (x764), ._2=(x761) + (x762)};
        x780->arr[x376] = x779;
        
      }
      array_tuple_number_t_number_t Xcam = x780;
      tuple_number_t_number_t x38 = (Xcam->arr[2]);
      number_t x42 = (x38)._1;
      number_t x40 = (x38)._2;
      tuple_number_t_number_t xi = (Xcam->arr[0]);
      number_t x193 = (xi)._1;
      number_t x191 = (xi)._2;
      number_t x194 = (1) / (x42);
      number_t x192 = (-(x40)) / ((x42) * (x42));
      number_t x265 = (x193) * (x194);
      number_t x263 = ((x191) * (x194)) + ((x193) * (x192));
      number_t x266 = (x193) * (x194);
      number_t x264 = ((x191) * (x194)) + ((x193) * (x192));
      number_t x374 = (x265) * (x266);
      number_t x372 = ((x263) * (x266)) + ((x265) * (x264));
      tuple_number_t_number_t xi0 = (Xcam->arr[1]);
      number_t x1930 = (xi0)._1;
      number_t x1910 = (xi0)._2;
      number_t x1940 = (1) / (x42);
      number_t x1920 = (-(x40)) / ((x42) * (x42));
      number_t x2650 = (x1930) * (x1940);
      number_t x2630 = ((x1910) * (x1940)) + ((x1930) * (x1920));
      number_t x2660 = (x1930) * (x1940);
      number_t x2640 = ((x1910) * (x1940)) + ((x1930) * (x1920));
      number_t x3730 = (0) + (x374);
      number_t x3710 = (0) + (x372);
      number_t x3740 = (x2650) * (x2660);
      number_t x3720 = ((x2630) * (x2660)) + ((x2650) * (x2640));
      number_t x157 = (cam->arr[9]);
      index_t x155;
      if ((i) == (9)) {
        x155 = 1;
      } else {
        x155 = 0;
      }
      number_t x158 = (x3730) + (x3740);
      number_t x156 = (x3710) + (x3720);
      number_t x122 = (x157) * (x158);
      number_t x120 = ((x155) * (x158)) + ((x157) * (x156));
      number_t x145 = (cam->arr[10]);
      index_t x143;
      if ((i) == (10)) {
        x143 = 1;
      } else {
        x143 = 0;
      }
      number_t x146 = (x3730) + (x3740);
      number_t x144 = (x3710) + (x3720);
      number_t x109 = (x145) * (x146);
      number_t x107 = ((x143) * (x146)) + ((x145) * (x144));
      number_t x110 = (x3730) + (x3740);
      number_t x108 = (x3710) + (x3720);
      number_t x67 = (1) + (x122);
      number_t x68 = (x109) * (x110);
      number_t x66 = ((x107) * (x110)) + ((x109) * (x108));
      array_tuple_number_t_number_t x782 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x782->length=2;x782->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x98 = 0; x98 < x782->length; x98++){
        tuple_number_t_number_t xi1 = (Xcam->arr[x98]);
        number_t x253 = (xi1)._1;
        number_t x251 = (xi1)._2;
        number_t x254 = (1) / (x42);
        number_t x252 = (-(x40)) / ((x42) * (x42));
        number_t x361 = (x253) * (x254);
        number_t x359 = ((x251) * (x254)) + ((x253) * (x252));
        number_t x362 = (x67) + (x68);
        number_t x360 = (x120) + (x66);
        tuple_number_t_number_t x781 = (tuple_number_t_number_t){._1=(x361) * (x362), ._2=((x359) * (x362)) + ((x361) * (x360))};
        x782->arr[x98] = x781;
        
      }
      array_tuple_number_t_number_t distorted = x782;
      array_tuple_number_t_number_t v = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);v->length=2;v->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x48 = 0; x48 < v->length; x48++){
        index_t j00000 = (x48) + (7);
        tuple_number_t_number_t xi1 = (distorted->arr[x48]);
        number_t x181 = (xi1)._1;
        number_t x179 = (xi1)._2;
        number_t x182 = (cam->arr[6]);
        index_t x180;
        if ((i) == (6)) {
          x180 = 1;
        } else {
          x180 = 0;
        }
        number_t x205 = (cam->arr[j00000]);
        index_t x203;
        if ((i) == (j00000)) {
          x203 = 1;
        } else {
          x203 = 0;
        }
        number_t x206 = (x181) * (x182);
        number_t x204 = ((x179) * (x182)) + ((x181) * (x180));
        tuple_number_t_number_t x783 = (tuple_number_t_number_t){._1=(x205) + (x206), ._2=(x203) + (x204)};
        v->arr[x48] = x783;
        
      }
      array_number_t x784 = (array_number_t)storage_alloc(sizeof(int) * 2);x784->length=(v)->length;x784->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
      for(int i00 = 0; i00 < x784->length; i00++){
        tuple_number_t_number_t s = (v->arr[i00]);
        x784->arr[i00] = (s)._2;
        
      }
      x785->arr[i0] = x784;
      
    }
    x786->arr[i] = x785;
    
  }
  return x786;
}
