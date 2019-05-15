#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba(array_number_t cam, array_number_t xs, index_t n) {
  number_t x1233 = (cam->arr[0]);
  number_t x1234 = (cam->arr[1]);
  number_t x1235 = (cam->arr[2]);
  number_t x1236 = (x1233) * (x1233);
  number_t x1237 = (x1234) * (x1234);
  number_t x1238 = (x1236) + (x1237);
  number_t x1239 = (x1235) * (x1235);
  number_t x1240 = (x1238) + (x1239);
  number_t x1241 = sqrt(x1240);
  number_t x1242 = (1) / (x1241);
  number_t x1243 = (x1234) * (x1242);
  number_t x1244 = (x1235) * (x1242);
  number_t x1245 = (x1233) * (x1242);
  number_t x1246 = cos(x1241);
  number_t x1247 = (1) - (x1246);
  number_t x1248 = (cam->arr[9]);
  number_t x1249 = (cam->arr[10]);
  number_t x1250 = (cam->arr[6]);
  number_t x1251 = sin(x1241);
  index_t x1252 = (cam)->length;
  number_t x1270 = (x1242) * (0.5);
  number_t x1273 = (x1241) * (x1241);
  number_t x1284 = -(x1251);
  number_t x1290 = (cam->arr[5]);
  number_t x1296 = (cam->arr[4]);
  number_t x1301 = (cam->arr[3]);
  array_array_array_number_t x1613 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x1613->length=x1252;x1613->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * x1252);
  for(int i = 0; i < x1613->length; i++){
    index_t x1253 = (i) == (0);
    index_t x1254;
    if (x1253) {
      x1254 = 1;
    } else {
      x1254 = 0;
    }
    index_t x1255 = (i) == (1);
    index_t x1256;
    if (x1255) {
      x1256 = 1;
    } else {
      x1256 = 0;
    }
    number_t x1257 = (x1256) * (x1234);
    number_t x1258 = (x1257) * (x1256);
    index_t x1259 = (i) == (2);
    index_t x1260;
    if (x1259) {
      x1260 = 1;
    } else {
      x1260 = 0;
    }
    number_t x1261 = (x1254) * (x1233);
    number_t x1262 = (x1233) * (x1254);
    number_t x1263 = (x1261) + (x1262);
    number_t x1264 = (x1257) + (x1258);
    number_t x1265 = (x1263) + (x1264);
    number_t x1266 = (x1260) * (x1235);
    number_t x1267 = (x1258) * (x1260);
    number_t x1268 = (x1266) + (x1267);
    number_t x1269 = (x1265) + (x1268);
    number_t x1271 = (x1269) * (x1270);
    number_t x1272 = -(x1271);
    number_t x1274 = (x1272) / (x1273);
    number_t x1275 = (x1256) * (x1242);
    number_t x1276 = (x1234) * (x1274);
    number_t x1277 = (x1275) + (x1276);
    number_t x1278 = (x1260) * (x1242);
    number_t x1279 = (x1235) * (x1274);
    number_t x1280 = (x1278) + (x1279);
    number_t x1281 = (x1254) * (x1242);
    number_t x1282 = (x1233) * (x1274);
    number_t x1283 = (x1281) + (x1282);
    number_t x1285 = (x1271) * (x1284);
    index_t x1292 = (i) == (5);
    index_t x1293;
    if (x1292) {
      x1293 = -1;
    } else {
      x1293 = 0;
    }
    index_t x1298 = (i) == (4);
    index_t x1299;
    if (x1298) {
      x1299 = -1;
    } else {
      x1299 = 0;
    }
    index_t x1303 = (i) == (3);
    index_t x1304;
    if (x1303) {
      x1304 = -1;
    } else {
      x1304 = 0;
    }
    index_t x1524 = (i) == (9);
    index_t x1556 = (i) == (10);
    number_t x1320 = (x1243) * (x1293);
    index_t x1602 = (i) == (6);
    number_t x1323 = (x1244) * (x1299);
    number_t x1331 = (x1244) * (x1304);
    number_t x1334 = (x1245) * (x1293);
    number_t x1342 = (x1245) * (x1299);
    number_t x1345 = (x1243) * (x1304);
    number_t x1453 = (x1271) * (x1246);
    array_array_number_t x1612 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x1612->length=n;x1612->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x1612->length; i0++){
      index_t x1286 = (3) * (i0);
      index_t x1287 = (11) + (x1286);
      index_t x1288 = (2) + (x1287);
      number_t x1289 = (xs->arr[x1288]);
      number_t x1291 = (x1289) - (x1290);
      index_t x1294 = (1) + (x1287);
      number_t x1295 = (xs->arr[x1294]);
      number_t x1297 = (x1295) - (x1296);
      number_t x1300 = (xs->arr[x1287]);
      number_t x1302 = (x1300) - (x1301);
      number_t x1305 = (x1245) * (x1302);
      number_t x1306 = (x1243) * (x1297);
      number_t x1307 = (x1305) + (x1306);
      number_t x1308 = (x1244) * (x1291);
      number_t x1309 = (x1307) + (x1308);
      number_t x1310 = (x1309) * (x1247);
      number_t x1316 = (x1243) * (x1291);
      number_t x1317 = (x1244) * (x1297);
      number_t x1318 = (x1316) - (x1317);
      number_t x1319 = (x1277) * (x1291);
      number_t x1321 = (x1319) + (x1320);
      number_t x1322 = (x1280) * (x1297);
      number_t x1324 = (x1322) + (x1323);
      number_t x1325 = (x1321) - (x1324);
      tuple_number_t_number_t x1326 = (tuple_number_t_number_t){._1=x1318, ._2=x1325};
      number_t x1327 = (x1244) * (x1302);
      number_t x1328 = (x1245) * (x1291);
      number_t x1329 = (x1327) - (x1328);
      number_t x1330 = (x1280) * (x1302);
      number_t x1332 = (x1330) + (x1331);
      number_t x1333 = (x1283) * (x1291);
      number_t x1335 = (x1333) + (x1334);
      number_t x1336 = (x1332) - (x1335);
      tuple_number_t_number_t x1337 = (tuple_number_t_number_t){._1=x1329, ._2=x1336};
      number_t x1338 = (x1245) * (x1297);
      number_t x1339 = (x1243) * (x1302);
      number_t x1340 = (x1338) - (x1339);
      number_t x1341 = (x1283) * (x1297);
      number_t x1343 = (x1341) + (x1342);
      number_t x1344 = (x1277) * (x1302);
      number_t x1346 = (x1344) + (x1345);
      number_t x1347 = (x1343) - (x1346);
      tuple_number_t_number_t x1348 = (tuple_number_t_number_t){._1=x1340, ._2=x1347};
      array_tuple_number_t_number_t x1349 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1349->length=3;x1349->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x1349->arr[0] = x1326;
      x1349->arr[1] = x1337;
      x1349->arr[2] = x1348;
      array_tuple_number_t_number_t x1480 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1480->length=3;x1480->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x376 = 0; x376 < x1480->length; x376++){
        index_t x1311 = (x376) + (3);
        index_t x1312 = (x376) + (x1287);
        number_t x1313 = (xs->arr[x1312]);
        number_t x1314 = (cam->arr[x1311]);
        number_t x1315 = (x1313) - (x1314);
        tuple_number_t_number_t x1350 = (x1349->arr[x376]);
        number_t x1351 = (x1350)._1;
        number_t x1352 = (cam->arr[x376]);
        number_t x1353 = (x1352) * (x1242);
        number_t x1354 = (x1315) * (x1246);
        number_t x1355 = (x1351) * (x1251);
        number_t x1356 = (x1354) + (x1355);
        number_t x1357 = (x1353) * (x1310);
        number_t x1358 = (x1356) + (x1357);
        index_t x1359 = (i) == (x1311);
        index_t x1421 = (i) == (x376);
        number_t x1450 = (x1315) * (x1285);
        number_t x1451 = (x1350)._2;
        number_t x1452 = (x1451) * (x1251);
        number_t x1454 = (x1351) * (x1453);
        number_t x1455 = (x1452) + (x1454);
        number_t x1478;
        if (x1359) {
          number_t x1391 = (-1) * (x1246);
          number_t x1393 = (x1391) + (x1450);
          number_t x1399 = (x1393) + (x1455);
          number_t x1400 = (x1352) * (x1274);
          number_t x1420;
          if (x1421) {
            number_t x1371 = (x1242) + (x1400);
            number_t x1372 = (x1371) * (x1310);
            number_t x1373 = (x1283) * (x1302);
            number_t x1374 = (x1245) * (x1304);
            number_t x1375 = (x1373) + (x1374);
            number_t x1376 = (x1277) * (x1297);
            number_t x1377 = (x1243) * (x1299);
            number_t x1378 = (x1376) + (x1377);
            number_t x1379 = (x1375) + (x1378);
            number_t x1380 = (x1280) * (x1291);
            number_t x1381 = (x1244) * (x1293);
            number_t x1382 = (x1380) + (x1381);
            number_t x1383 = (x1379) + (x1382);
            number_t x1384 = (x1383) * (x1247);
            number_t x1385 = -(x1285);
            number_t x1386 = (x1309) * (x1385);
            number_t x1387 = (x1384) + (x1386);
            number_t x1388 = (x1353) * (x1387);
            number_t x1389 = (x1372) + (x1388);
            number_t x1390 = (x1399) + (x1389);
            x1420 = x1390;
          } else {
            number_t x1401 = (x1400) * (x1310);
            number_t x1402 = (x1283) * (x1302);
            number_t x1403 = (x1245) * (x1304);
            number_t x1404 = (x1402) + (x1403);
            number_t x1405 = (x1277) * (x1297);
            number_t x1406 = (x1243) * (x1299);
            number_t x1407 = (x1405) + (x1406);
            number_t x1408 = (x1404) + (x1407);
            number_t x1409 = (x1280) * (x1291);
            number_t x1410 = (x1244) * (x1293);
            number_t x1411 = (x1409) + (x1410);
            number_t x1412 = (x1408) + (x1411);
            number_t x1413 = (x1412) * (x1247);
            number_t x1414 = -(x1285);
            number_t x1415 = (x1309) * (x1414);
            number_t x1416 = (x1413) + (x1415);
            number_t x1417 = (x1353) * (x1416);
            number_t x1418 = (x1401) + (x1417);
            number_t x1419 = (x1399) + (x1418);
            x1420 = x1419;
          }
          x1478 = x1420;
        } else {
          number_t x1456 = (x1450) + (x1455);
          number_t x1457 = (x1352) * (x1274);
          number_t x1477;
          if (x1421) {
            number_t x1430 = (x1242) + (x1457);
            number_t x1431 = (x1430) * (x1310);
            number_t x1432 = (x1283) * (x1302);
            number_t x1433 = (x1245) * (x1304);
            number_t x1434 = (x1432) + (x1433);
            number_t x1435 = (x1277) * (x1297);
            number_t x1436 = (x1243) * (x1299);
            number_t x1437 = (x1435) + (x1436);
            number_t x1438 = (x1434) + (x1437);
            number_t x1439 = (x1280) * (x1291);
            number_t x1440 = (x1244) * (x1293);
            number_t x1441 = (x1439) + (x1440);
            number_t x1442 = (x1438) + (x1441);
            number_t x1443 = (x1442) * (x1247);
            number_t x1444 = -(x1285);
            number_t x1445 = (x1309) * (x1444);
            number_t x1446 = (x1443) + (x1445);
            number_t x1447 = (x1353) * (x1446);
            number_t x1448 = (x1431) + (x1447);
            number_t x1449 = (x1456) + (x1448);
            x1477 = x1449;
          } else {
            number_t x1458 = (x1457) * (x1310);
            number_t x1459 = (x1283) * (x1302);
            number_t x1460 = (x1245) * (x1304);
            number_t x1461 = (x1459) + (x1460);
            number_t x1462 = (x1277) * (x1297);
            number_t x1463 = (x1243) * (x1299);
            number_t x1464 = (x1462) + (x1463);
            number_t x1465 = (x1461) + (x1464);
            number_t x1466 = (x1280) * (x1291);
            number_t x1467 = (x1244) * (x1293);
            number_t x1468 = (x1466) + (x1467);
            number_t x1469 = (x1465) + (x1468);
            number_t x1470 = (x1469) * (x1247);
            number_t x1471 = -(x1285);
            number_t x1472 = (x1309) * (x1471);
            number_t x1473 = (x1470) + (x1472);
            number_t x1474 = (x1353) * (x1473);
            number_t x1475 = (x1458) + (x1474);
            number_t x1476 = (x1456) + (x1475);
            x1477 = x1476;
          }
          x1478 = x1477;
        }
        tuple_number_t_number_t x1479 = (tuple_number_t_number_t){._1=x1358, ._2=x1478};
        x1480->arr[x376] = x1479;
        
      }
      array_tuple_number_t_number_t x1481 = x1480;
      tuple_number_t_number_t x1482 = (x1481->arr[2]);
      number_t x1483 = (x1482)._1;
      tuple_number_t_number_t x1484 = (x1481->arr[0]);
      number_t x1485 = (x1484)._1;
      number_t x1486 = (1) / (x1483);
      number_t x1487 = (x1482)._2;
      number_t x1488 = -(x1487);
      number_t x1489 = (x1483) * (x1483);
      number_t x1490 = (x1488) / (x1489);
      number_t x1491 = (x1485) * (x1486);
      number_t x1492 = (x1484)._2;
      number_t x1493 = (x1492) * (x1486);
      number_t x1494 = (x1485) * (x1490);
      number_t x1495 = (x1493) + (x1494);
      tuple_number_t_number_t x1496 = (x1481->arr[1]);
      number_t x1497 = (x1496)._1;
      number_t x1498 = (x1497) * (x1486);
      number_t x1499 = (x1496)._2;
      number_t x1500 = (x1499) * (x1486);
      number_t x1501 = (x1497) * (x1490);
      number_t x1502 = (x1500) + (x1501);
      number_t x1503 = (x1491) * (x1491);
      number_t x1504 = (x1498) * (x1498);
      number_t x1505 = (x1503) + (x1504);
      number_t x1506 = (x1495) * (x1491);
      number_t x1507 = (x1491) * (x1495);
      number_t x1508 = (x1506) + (x1507);
      number_t x1509 = (x1502) * (x1498);
      number_t x1510 = (x1498) * (x1502);
      number_t x1511 = (x1509) + (x1510);
      number_t x1512 = (x1508) + (x1511);
      number_t x1513 = (x1249) * (x1505);
      number_t x1514 = (x1248) * (x1505);
      number_t x1515 = (1) + (x1514);
      number_t x1516 = (x1513) * (x1505);
      number_t x1517 = (x1515) + (x1516);
      number_t x1576 = (x1248) * (x1512);
      number_t x1577 = (x1249) * (x1512);
      array_tuple_number_t_number_t x1587 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x1587->length=2;x1587->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x98 = 0; x98 < x1587->length; x98++){
        tuple_number_t_number_t x1520 = (x1481->arr[x98]);
        number_t x1521 = (x1520)._1;
        number_t x1522 = (x1521) * (x1486);
        number_t x1523 = (x1522) * (x1517);
        number_t x1571 = (x1520)._2;
        number_t x1572 = (x1571) * (x1486);
        number_t x1573 = (x1521) * (x1490);
        number_t x1574 = (x1572) + (x1573);
        number_t x1575 = (x1574) * (x1517);
        number_t x1585;
        if (x1524) {
          number_t x1547 = (x1505) + (x1576);
          number_t x1555;
          if (x1556) {
            number_t x1534 = (x1505) + (x1577);
            number_t x1535 = (x1534) * (x1505);
            number_t x1536 = (x1513) * (x1512);
            number_t x1537 = (x1535) + (x1536);
            number_t x1538 = (x1547) + (x1537);
            number_t x1539 = (x1522) * (x1538);
            number_t x1540 = (x1575) + (x1539);
            x1555 = x1540;
          } else {
            number_t x1549 = (x1577) * (x1505);
            number_t x1550 = (x1513) * (x1512);
            number_t x1551 = (x1549) + (x1550);
            number_t x1552 = (x1547) + (x1551);
            number_t x1553 = (x1522) * (x1552);
            number_t x1554 = (x1575) + (x1553);
            x1555 = x1554;
          }
          x1585 = x1555;
        } else {
          number_t x1584;
          if (x1556) {
            number_t x1564 = (x1505) + (x1577);
            number_t x1565 = (x1564) * (x1505);
            number_t x1566 = (x1513) * (x1512);
            number_t x1567 = (x1565) + (x1566);
            number_t x1568 = (x1576) + (x1567);
            number_t x1569 = (x1522) * (x1568);
            number_t x1570 = (x1575) + (x1569);
            x1584 = x1570;
          } else {
            number_t x1578 = (x1577) * (x1505);
            number_t x1579 = (x1513) * (x1512);
            number_t x1580 = (x1578) + (x1579);
            number_t x1581 = (x1576) + (x1580);
            number_t x1582 = (x1522) * (x1581);
            number_t x1583 = (x1575) + (x1582);
            x1584 = x1583;
          }
          x1585 = x1584;
        }
        tuple_number_t_number_t x1586 = (tuple_number_t_number_t){._1=x1523, ._2=x1585};
        x1587->arr[x98] = x1586;
        
      }
      array_tuple_number_t_number_t x1588 = x1587;
      array_number_t x1611 = (array_number_t)storage_alloc(sizeof(int) * 2);x1611->length=2;x1611->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
      for(int i00 = 0; i00 < x1611->length; i00++){
        tuple_number_t_number_t x1589 = (x1588->arr[i00]);
        index_t x1590 = (i00) + (7);
        index_t x1591 = (i) == (x1590);
        number_t x1607 = (x1589)._2;
        number_t x1608 = (x1607) * (x1250);
        number_t x1610;
        if (x1591) {
          number_t x1601;
          if (x1602) {
            number_t x1595 = (x1589)._1;
            number_t x1596 = (x1608) + (x1595);
            number_t x1597 = (1) + (x1596);
            x1601 = x1597;
          } else {
            number_t x1600 = (1) + (x1608);
            x1601 = x1600;
          }
          x1610 = x1601;
        } else {
          number_t x1609;
          if (x1602) {
            number_t x1605 = (x1589)._1;
            number_t x1606 = (x1608) + (x1605);
            x1609 = x1606;
          } else {
            x1609 = x1608;
          }
          x1610 = x1609;
        }
        x1611->arr[i00] = x1610;
        
      }
      x1612->arr[i0] = x1611;
      
    }
    x1613->arr[i] = x1612;
    
  }
  return x1613;
}
