-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Feb 24, 2024 at 04:43 AM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `WorldSport`
--

-- --------------------------------------------------------

--
-- Table structure for table `Sports`
--

CREATE TABLE `Sports` (
  `id` int(11) NOT NULL,
  `nombre` varchar(40) NOT NULL,
  `pais_origen` varchar(40) NOT NULL,
  `fecha` date NOT NULL,
  `descripcion` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `Sports`
--

INSERT INTO `Sports` (`id`, `nombre`, `pais_origen`, `fecha`, `descripcion`) VALUES
(1, 'Fútbol Americano', 'Estados Unidos', '1869-01-01', 'Deporte de equipo en el que dos conjuntos compiten por avanzar el balón hacia la zona de anotación del equipo contrario.'),
(2, 'Tenis', 'Reino Unido', '1873-01-01', 'Deporte de raqueta en el que dos jugadores o parejas de jugadores golpean una pelota hacia el campo contrario, tratando de que esta no sea devuelta.'),
(3, 'Rugby', 'Reino Unido', '1823-01-01', 'Deporte de equipo en el que dos equipos intentan llevar un balón ovalado hacia la zona de anotación del equipo contrario, ya sea corriendo, pasando o pateando el balón.'),
(4, 'Golf', 'Escocia', '2015-01-01', 'Deporte en el que los jugadores utilizan una variedad de palos para golpear una pelota y llevarla desde el punto de salida hasta el hoyo en el menor número de golpes posibles.'),
(5, 'Voleibol', 'Estados Unidos', '1895-01-01', 'Deporte de equipo en el que dos conjuntos se enfrentan separados por una red, intentando pasar la pelota por encima de la red y hacerla tocar el suelo en el campo contrario.'),
(6, 'Atletismo', 'Grecia', '1896-01-01', 'Conjunto de disciplinas deportivas que incluyen carreras, saltos, lanzamientos y pruebas combinadas, que se practican tanto en pista cubierta como al aire libre.'),
(7, 'Natación', 'Egipto', '3000-01-01', 'Deporte acuático que consiste en desplazarse en el agua mediante movimientos de los brazos y las piernas, generalmente sin utilizar ningún tipo de ayuda.'),
(8, 'Boxeo', 'Grecia', '1500-01-01', 'Deporte de combate en el que dos contrincantes luchan utilizando únicamente sus puños, con el objetivo de derribar al oponente o conseguir más puntos según las reglas del combate.'),
(9, 'Béisbol', 'Estados Unidos', '1845-01-01', 'Deporte de equipo en el que dos conjuntos se enfrentan en un campo con cuatro bases dispuestas en forma de diamante, tratando de anotar carreras golpeando una pelota con un bate y corriendo alrededor del campo.'),
(10, 'Hockey sobre hielo', 'Canadá', '1875-01-01', 'Deporte de equipo que se juega en una pista de hielo, en el que dos equipos compiten por llevar un disco de caucho hacia la portería contraria utilizando palos.'),
(11, 'Ciclismo', 'Francia', '1868-01-01', 'Deporte que involucra el uso de bicicletas para desplazarse sobre distintos tipos de terreno, incluyendo carreteras, pistas de tierra, montañas, entre otros.'),
(12, 'Esgrima', 'España', '1600-01-01', 'Deporte de combate en el que dos contrincantes se enfrentan utilizando armas blancas, como espadas, floretes o sables, con el objetivo de tocar al oponente sin ser tocado.'),
(13, 'Surf', 'Hawái', '1778-01-01', 'Deporte acuático en el que los participantes montan olas en la superficie del mar utilizando una tabla especial, llamada tabla de surf.'),
(14, 'Karate', 'Japón', '0200-01-01', 'Arte marcial que se enfoca en el uso de golpes de puño, patadas, rodillazos, codazos y golpes con la mano abierta, con el objetivo de incapacitar al oponente.'),
(15, 'Taekwondo', 'Corea', '1945-01-01', 'Arte marcial de origen coreano que se caracteriza por la utilización de patadas y golpes de puño, con énfasis en la técnica, la agilidad y la fuerza.'),
(16, 'Gimnasia', 'Grecia', '0400-01-01', 'Deporte que involucra la realización de secuencias de ejercicios físicos que requieren fuerza, flexibilidad, equilibrio y coordinación, generalmente realizados en aparatos como la barra, el suelo, las anillas, entre otros.'),
(17, 'Fórmula 1', 'Reino Unido', '1950-01-01', 'Categoría de automovilismo de velocidad en la que los pilotos compiten en circuitos especialmente diseñados para carreras de alta velocidad.'),
(18, 'Patinaje sobre hielo', 'Finlandia', '3000-01-01', 'Deporte en el que los participantes desliz'),
(19, 'Baloncesto', 'Estados Unidos', '1891-01-01', 'Deporte de equipo que se juega entre dos conjuntos de cinco jugadores cada uno, los cuales intentan anotar puntos encestando la pelota en un aro elevado por encima de sus cabezas.'),
(20, 'Rugby', 'Nueva Zelanda', '1870-01-01', 'Deporte de equipo que se juega con una pelota ovalada y se caracteriza por el contacto físico entre los jugadores.');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Sports`
--
ALTER TABLE `Sports`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Sports`
--
ALTER TABLE `Sports`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;