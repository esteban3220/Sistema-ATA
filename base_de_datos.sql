-- MariaDB dump 10.19  Distrib 10.9.2-MariaDB, for Linux (x86_64)
--
-- Host: localhost    Database: ata
-- ------------------------------------------------------
-- Server version	10.9.2-MariaDB

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `cat_tra_remolques`
--

DROP TABLE IF EXISTS `cat_tra_remolques`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cat_tra_remolques` (
  `no_economico` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `marca` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `modelo` int(11) DEFAULT NULL,
  `no_placas` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `no_tc` int(11) DEFAULT NULL,
  `fo_verificacion` int(11) DEFAULT NULL,
  PRIMARY KEY (`no_economico`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cat_tra_remolques`
--

LOCK TABLES `cat_tra_remolques` WRITE;
/*!40000 ALTER TABLE `cat_tra_remolques` DISABLE KEYS */;
/*!40000 ALTER TABLE `cat_tra_remolques` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cat_tra_tractores`
--

DROP TABLE IF EXISTS `cat_tra_tractores`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cat_tra_tractores` (
  `no_economico` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `marca` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `modelo` int(11) DEFAULT NULL,
  `no_placas` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `no_tc` int(11) DEFAULT NULL,
  `fo_verificacion` int(11) DEFAULT NULL,
  PRIMARY KEY (`no_economico`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cat_tra_tractores`
--

LOCK TABLES `cat_tra_tractores` WRITE;
/*!40000 ALTER TABLE `cat_tra_tractores` DISABLE KEYS */;
/*!40000 ALTER TABLE `cat_tra_tractores` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_clientes`
--

DROP TABLE IF EXISTS `catalogo_clientes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_clientes` (
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `razon_social` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `rfc` varchar(18) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `giro` varchar(70) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `domicilio` varchar(90) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_clientes`
--

LOCK TABLES `catalogo_clientes` WRITE;
/*!40000 ALTER TABLE `catalogo_clientes` DISABLE KEYS */;
/*!40000 ALTER TABLE `catalogo_clientes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_contabilidad`
--

DROP TABLE IF EXISTS `catalogo_contabilidad`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_contabilidad` (
  `cta` int(11) NOT NULL,
  `descripcion` varchar(80) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`cta`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_contabilidad`
--

LOCK TABLES `catalogo_contabilidad` WRITE;
/*!40000 ALTER TABLE `catalogo_contabilidad` DISABLE KEYS */;
INSERT INTO `catalogo_contabilidad` VALUES
(100,'Activo'),
(110,'Fondos Fijos de Caja'),
(111,'Bancos Moneda Nacional'),
(112,'Inversiones en Valores'),
(113,'Adeudo de Permisionarios'),
(114,'Documentos por cobrar'),
(115,'Documentos en garantia'),
(116,'Anticipos a Proveedores'),
(117,'Inversiones en Almacenes'),
(118,'Deudores Diversos'),
(130,'Equipo de Transporte'),
(131,'Maquinas y Herramientas'),
(132,'Mobiliario y Equipo de Oficina'),
(133,'Equipo de Computacion'),
(134,'Construcciones'),
(135,'Terrenos'),
(140,'Depreciacion Equipo de Transporte'),
(141,'Depreciacion de Maquinaria y Herramienta'),
(142,'Depreciacion Mobiliaro Equipo de Oficina'),
(143,'Depreciacion Equipo de Computo'),
(144,'Depreciacion de Construcciones'),
(150,'Gastos Pagados por Anticipo'),
(151,'Intereses Pagados por Anticipado'),
(160,'Amortizacion Gastos Pagados por Anticipado'),
(161,'Amortizacion Intereses'),
(200,'Pasivo'),
(201,'Impuestos al Valor Agregado'),
(202,'Impuestos 2% del Activo'),
(203,'Impuestos por pagar'),
(204,'Acredores Diversos'),
(205,'Documentos por Pagar Corto Plazo'),
(206,'Proveedores'),
(207,'Doc. por Pagar Largo Plazo'),
(208,'Creditos Bancarios'),
(209,'Creditos de Moneda Extrajera'),
(215,'Provisiones de Prestaciones'),
(300,'Capital Social'),
(301,'Capital de Aportaciones'),
(302,'Reserva Legal'),
(303,'Utilidad por Revaluacion'),
(304,'Aportaciones de Capital'),
(305,'Utilidad Ejercicios Anteriores'),
(306,'Utilidad del Ejercicio'),
(400,'Cuentas Resultados Acreedoras'),
(401,'Ingresos por Servicio'),
(402,'Productos Financieros'),
(403,'Otros Ingresos'),
(500,'Cuentas de Resultados Deudoras'),
(501,'Gastos Financieros'),
(502,'Gastos Operacion Autobuses'),
(503,'Mantenimiento Autobuses'),
(504,'Gastos Unidades de Servicio'),
(505,'Salarios'),
(506,'Prestaciones al Personal'),
(507,'Gastos de Administracion'),
(508,'Seguros y Fianzas'),
(509,'Gastos de Accidentes'),
(510,'Impuestos y Derechos'),
(511,'Gastos no Deducibles 10%'),
(520,'Depreciaciones Equipo de Servicio'),
(522,'Amortizaciones '),
(530,'Impuesto Sobre la Renta'),
(531,'Participacion de Utilidades');
/*!40000 ALTER TABLE `catalogo_contabilidad` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_opciones`
--

DROP TABLE IF EXISTS `catalogo_opciones`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_opciones` (
  `cta` int(11) DEFAULT NULL,
  `scta` tinyint(3) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `opcion` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`scta`),
  KEY `cta` (`cta`),
  CONSTRAINT `catalogo_opciones_ibfk_1` FOREIGN KEY (`cta`) REFERENCES `catalogo_contabilidad` (`cta`)
) ENGINE=InnoDB AUTO_INCREMENT=178 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_opciones`
--

LOCK TABLES `catalogo_opciones` WRITE;
/*!40000 ALTER TABLE `catalogo_opciones` DISABLE KEYS */;
INSERT INTO `catalogo_opciones` VALUES
(117,001,'Combustibles'),
(117,002,'Aceites y Lubricantes'),
(117,003,'Llantas Camaras Corbatas'),
(117,004,'Refacciones Nuevas'),
(130,005,'Autobuses'),
(130,006,'Camionetas'),
(130,007,'Automoviles'),
(130,008,'Motocicletas'),
(130,009,'Gruas'),
(131,010,'Compresores'),
(131,011,'Taladros'),
(131,012,'Esmeriles'),
(131,013,'Herramienta de Presision'),
(131,014,'Herramienta Neumatica'),
(131,015,'Herramienta Mayores'),
(131,016,'Soldadoras'),
(131,017,'Otros'),
(132,018,'Escritorios'),
(132,019,'Sillas'),
(132,020,'Archiveros'),
(132,021,'Mesas de Trabajo'),
(132,022,'Maquinas de Escribir'),
(132,023,'Calculadoras'),
(132,024,'Conmutador'),
(132,025,'Accesorios'),
(132,026,'Otros'),
(133,027,'Computadores'),
(133,028,'Impresoras'),
(133,029,'Accesorios'),
(133,030,'Equipos de Radio'),
(133,031,'Telefax'),
(133,032,'Telex'),
(140,033,'Dep.Acumulada'),
(141,034,'Dep.Acumulada'),
(142,035,'Dep.Acumulada'),
(143,036,'Dep.Acumulada'),
(144,037,'Dep.Acumulada'),
(201,038,'En Combustibles'),
(201,039,'Refacciones'),
(201,040,'Proveedores'),
(201,041,'Gtos. Administracion'),
(201,042,'Gtos. Financieros'),
(201,043,'Compra de Activos'),
(201,044,'Pago S.H.C.P.'),
(201,045,'En Facturacion'),
(201,046,'En Venta de Activos'),
(201,047,'Otros'),
(202,048,'Pago de Anticipos'),
(202,049,'Bonificaciones en Liquidacion I.S.R.'),
(203,050,'Retencion Sobre Productos de Trabajo'),
(203,051,'Cuotas de Seguro Social'),
(203,052,'Impuestos INFONAVIT'),
(203,053,'S.A.R.'),
(203,054,'Impuestos Estatales Sobre Salarios'),
(203,055,'Retencion Sobre Honorarios y Rentas'),
(215,056,'Vacaciones'),
(215,057,'Prima Vacacional'),
(215,058,'Gratificacion Anual'),
(215,059,'25% Prima Vacacional'),
(215,060,'Dias Festivos'),
(215,061,'Uniformes'),
(215,062,'Prima de Antiguedad'),
(215,063,'Indemnizaciones'),
(215,064,'Reparto de Utilidades'),
(300,065,'Pagado'),
(302,066,'Reserva 5%'),
(303,067,'Equipo de Transporte'),
(303,068,'Maquinaria y Herramientas'),
(303,069,'Muebles y Enseres'),
(303,070,'Construcciones'),
(303,071,'Terrenos'),
(401,072,'Ingresos por Pasajeros'),
(401,073,'Servicios Especiales'),
(402,074,'Intereses Cobrados'),
(402,075,'Utilidad Cambio de Moneda'),
(403,076,'Recuperacion Accidentes'),
(403,077,'Aprovechamientos'),
(403,078,'Descuentos Sobre Compras'),
(501,079,'Intereses Pagados'),
(501,080,'Cargos Bancarios'),
(501,081,'Perdida Cambiaria'),
(502,082,'Sueldo Operadores'),
(502,083,'Premios a Operadores'),
(502,084,'Viaticos Operadores'),
(502,085,'Combustibles'),
(502,086,'Aceite Motor'),
(502,087,'Aceite Caja'),
(502,088,'Aceite Diferencial'),
(503,089,'Llantas Nuevas'),
(503,090,'Llantas Recubiertas'),
(503,091,'Ref. Motor'),
(503,092,'Ref. Caja'),
(503,093,'Ref. Diferencial'),
(503,094,'Ref.Frenos '),
(503,095,'Ref.Electricas'),
(503,096,'Ref.Direccion'),
(503,097,'Ref. Lubricantes'),
(503,098,'Ref. Suspencion'),
(503,099,'Ref. Asientos'),
(503,100,'Ref. Carroceria'),
(503,101,'Ref. Pintura'),
(503,102,'Accesorios'),
(503,103,'Tornilleria'),
(504,104,'Combustibles'),
(504,105,'Aceite de Motor'),
(504,106,'Aceite Caja'),
(504,107,'Aceite Diferencial'),
(504,108,'Llantas'),
(504,109,'Refacciones'),
(504,110,'Reparaciones'),
(505,111,'Funcionarios'),
(505,112,'Empleados'),
(505,113,'Mantenimiento'),
(505,114,'Operadores'),
(506,115,'Vacaciones'),
(506,116,'Prima Vacacional'),
(506,117,'Gratificacion Anual'),
(506,118,'25% Prima Vacacional'),
(506,119,'Dias Festivos'),
(506,120,'Uniformes'),
(506,121,'Prima Antiguedad'),
(506,122,'Indemnizaciones'),
(506,123,'Seguro de Vida'),
(506,124,'Fomento al Deporte'),
(506,125,'Capacitacion'),
(506,126,'Otras'),
(507,127,'Rentas'),
(507,128,'CFE'),
(507,129,'Telfono Fax Telex'),
(507,130,'Papeleria'),
(507,131,'Articulos de Escritorio'),
(507,132,'Paueteria Fletes'),
(507,133,'Articulos de Aseo'),
(507,134,'Articulos de Taller'),
(507,135,'Atencion Social al Personal'),
(507,136,'Subscripciones y Cuotas'),
(507,137,'Igualas y Honorarios'),
(507,138,'Gastos de Viaje'),
(507,139,'Mantenimiento de Equipos de Oficina'),
(507,140,'Mantenimiento de Instalaciones'),
(507,141,'Gastos Comedor'),
(507,142,'Gastos Dormitorios'),
(508,143,'Seguros de Unidades'),
(508,144,'Seguros de Equipos de Servicio'),
(508,145,'Seguros de Instalaciones'),
(508,146,'Seguros de Valores'),
(508,147,'Seguros de Pasajeros'),
(508,148,'Fianzas'),
(509,149,'Maniobras'),
(509,150,'Pago de Daños a Terceros'),
(509,151,'Gruas y Translados'),
(509,152,'Honorarios'),
(509,153,'Gastos de Viaje'),
(509,154,'Pension'),
(510,155,'Seguro Social'),
(510,156,'5% Infonavit'),
(510,157,'S.A.R.'),
(510,158,'Impuesto Sobre Salario Estatal'),
(510,159,'Derechos D.D.F.'),
(510,160,'Derechos de Salud'),
(510,161,'Derechos SECOFI'),
(510,162,'Derechos S.H.C.P.'),
(510,163,'Camaras de Transporte'),
(511,164,'Gratificaciones Varias'),
(511,165,'Gastos Representacion No Deducibles'),
(511,166,'Gastos de Viaje No Deducible'),
(511,167,'Notas Gastos'),
(511,168,'Multas y Recargos'),
(511,169,'Infracciones'),
(520,170,'Autobuses'),
(520,171,'Maquinaria y Herramientas'),
(520,172,'Muebles y Enseres'),
(520,173,'Construcciones'),
(522,174,'Gastos Pagados por Anticipado'),
(522,175,'Intereses Pagados por Anticipado'),
(530,176,'I.S.R.'),
(531,177,'P.T.U.');
/*!40000 ALTER TABLE `catalogo_opciones` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_operador`
--

DROP TABLE IF EXISTS `catalogo_operador`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_operador` (
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `nombre` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `rfc` varchar(13) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `curp` varchar(18) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `no_imss` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `no_licensia` varchar(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `fecha_ingreso` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_operador`
--

LOCK TABLES `catalogo_operador` WRITE;
/*!40000 ALTER TABLE `catalogo_operador` DISABLE KEYS */;
/*!40000 ALTER TABLE `catalogo_operador` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_productos`
--

DROP TABLE IF EXISTS `catalogo_productos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_productos` (
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `nombre` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `unidad` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `tarifa` double(9,2) DEFAULT NULL,
  `otro` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_productos`
--

LOCK TABLES `catalogo_productos` WRITE;
/*!40000 ALTER TABLE `catalogo_productos` DISABLE KEYS */;
/*!40000 ALTER TABLE `catalogo_productos` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `catalogo_rutas`
--

DROP TABLE IF EXISTS `catalogo_rutas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `catalogo_rutas` (
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT,
  `origen` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `destino` varchar(150) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `kms` int(11) DEFAULT NULL,
  `kms_reparto` int(11) DEFAULT NULL,
  `kms_cobro` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_rutas`
--

LOCK TABLES `catalogo_rutas` WRITE;
/*!40000 ALTER TABLE `catalogo_rutas` DISABLE KEYS */;
/*!40000 ALTER TABLE `catalogo_rutas` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-01 21:21:25
