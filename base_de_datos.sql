-- MariaDB dump 10.19  Distrib 10.8.4-MariaDB, for Linux (x86_64)
--
-- Host: localhost    Database: ata
-- ------------------------------------------------------
-- Server version	10.8.4-MariaDB

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
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `catalogo_opciones`
--

LOCK TABLES `catalogo_opciones` WRITE;
/*!40000 ALTER TABLE `catalogo_opciones` DISABLE KEYS */;
/*!40000 ALTER TABLE `catalogo_opciones` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-08-26 17:57:07
