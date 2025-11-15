-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 14-02-2024 a las 17:53:17
-- Versión del servidor: 10.4.22-MariaDB
-- Versión de PHP: 8.1.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `grupos_musicales_kyb3r`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `musicales`
--

CREATE TABLE `musicales` (
  `id` int(11) NOT NULL,
  `nombre` varchar(40) NOT NULL,
  `integrantes` int(11) NOT NULL,
  `tipo` varchar(60) NOT NULL,
  `pais` varchar(60) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `musicales`
--

INSERT INTO `musicales` (`id`, `nombre`, `integrantes`, `tipo`, `pais`) VALUES
(1, '1DIRECTION', 6, 'No especificado', 'United Kingdom'),
(2, 'Gorillaz', 5, 'No especificado', 'USA'),
(3, 'LOS11', 11, 'No especificado', 'PR'),
(4, 'BTS', 7, 'No especificado', 'Corea del Sur'),
(5, 'Maroon 5', 5, 'No especificado', 'Estados Unidos'),
(6, 'Little Mix', 4, 'No especificado', 'Reino Unido'),
(7, 'CNCO', 5, 'Pop latino', 'Puerto Rico'),
(8, 'Blackpink', 4, 'K-pop', 'Corea del Sur'),
(9, 'One Direction', 4, 'Pop', 'Reino Unido'),
(10, '5 Seconds of Summer', 4, 'Pop rock', 'Australia'),
(11, 'The Pussycat Dolls', 6, 'R&B, dance-pop', 'Estados Unidos'),
(12, 'NSYNC', 5, 'Pop', 'Estados Unidos'),
(13, 'Spice Girls', 5, 'Pop', 'Reino Unido'),
(14, 'Backstreet Boys', 5, 'Pop', 'Estados Unidos'),
(15, 'Aventura', 4, 'Bachata', 'República Dominicana'),
(16, 'Coldplay', 4, 'Rock alternativo / Pop rock', 'Reino Unido'),
(17, 'Imagine Dragons', 4, 'Rock alternativo / Pop rock', 'Estados Unidos'),
(18, 'Queen', 4, 'Rock', 'Reino Unido'),
(19, 'The Beatles', 4, 'Rock', 'Reino Unido'),
(20, 'The Rolling Stones', 4, 'Rock', 'Reino Unido'),
(21, 'ABBA', 4, 'Pop', 'Suecia'),
(22, 'The Beach Boys', 5, 'Rock / Pop rock', 'Estados Unidos'),
(23, 'Guns N\' Roses', 5, 'Hard rock', 'Estados Unidos'),
(24, 'Nirvana', 3, 'Grunge', 'Estados Unidos'),
(25, 'Red Hot Chili Peppers', 4, 'Funk rock / Alternative rock', 'Estados Unidos'),
(26, 'U2', 4, 'No especificado', 'Irlanda'),
(27, 'Metallica', 4, 'No especificado', 'Estados Unidos'),
(28, 'Linkin Park', 6, 'No especificado', 'Estados Unidos'),
(29, 'Oasis', 5, 'No especificado', 'Reino Unido'),
(30, 'The Jackson 5', 5, 'No especificado', 'Estados Unidos'),
(31, 'Arcade Fire', 6, 'No especificado', 'Canadá'),
(32, 'Fleetwood Mac', 5, 'No especificado', 'Reino Unido'),
(33, 'The Doors', 4, 'No especificado', 'Estados Unidos'),
(34, 'Radiohead', 5, 'No especificado', 'Reino Unido'),
(35, 'Foo Fighters', 6, 'No especificado', 'Estados Unidos'),
(36, 'Bon Jovi', 4, 'No especificado', 'Estados Unidos'),
(37, 'The Black Eyed Peas', 4, 'No especificado', 'Estados Unidos'),
(38, 'Blur', 4, 'No especificado', 'Reino Unido'),
(39, 'Gorillaz', 4, 'No especificado', 'Reino Unido'),
(40, 'Aerosmith', 5, 'No especificado', 'Estados Unidos'),
(41, 'Green Day', 3, 'No especificado', 'Estados Unidos'),
(42, 'The Killers', 4, 'No especificado', 'Estados Unidos'),
(43, 'No Doubt', 5, 'No especificado', 'Estados Unidos'),
(44, 'The Police', 3, 'No especificado', 'Reino Unido'),
(45, 'Calle 13', 2, 'No especificado', 'Puerto Rico'),
(46, 'Wisin y Yandel', 2, 'No especificado', 'Puerto Rico'),
(47, 'Café Tacvba', 4, 'No especificado', 'México'),
(48, 'Arctic Monkeys', 4, 'Indie Rock', 'United Kingdom'),
(49, 'The Killers', 4, 'Alternative Rock', 'United States'),
(50, 'Muse', 3, 'Alternative Rock', 'United Kingdom'),
(51, 'Radiohead', 5, 'Alternative Rock', 'United Kingdom'),
(52, 'Green Day', 3, 'Punk Rock', 'United States'),
(53, 'Paramore', 3, 'Pop Punk', 'United States'),
(54, 'Twenty One Pilots', 2, 'Alternative Rock', 'United States'),
(55, 'Florence + The Machine', 4, 'Indie Rock', 'United Kingdom'),
(56, 'Vampire Weekend', 4, 'Indie Rock', 'United States'),
(57, 'The Strokes', 5, 'Indie Rock', 'United States'),
(58, 'The Black Keys', 2, 'Rock', 'United States'),
(59, 'Foster the People', 3, 'Indie Pop', 'United States'),
(60, 'Arcade Fire', 6, 'Indie Rock', 'Canada'),
(61, 'The National', 5, 'Indie Rock', 'United States'),
(62, 'Tame Impala', 1, 'Psychedelic Rock', 'Australia'),
(63, 'Gorillaz', 4, 'Alternative Rock', 'United Kingdom'),
(64, 'LCD Soundsystem', 5, 'Electronic Rock', 'United States'),
(65, 'The xx', 3, 'Indie Pop', 'United Kingdom'),
(66, 'Alt-J', 4, 'Indie Rock', 'United Kingdom'),
(67, 'The 1975', 4, 'Indie Pop', 'United Kingdom'),
(68, 'The Black Keys', 2, 'Rock', 'United States'),
(69, 'Foster the People', 3, 'Indie Pop', 'United States'),
(70, 'Arcade Fire', 6, 'Indie Rock', 'Canada'),
(71, 'The National', 5, 'Indie Rock', 'United States'),
(72, 'Tame Impala', 1, 'Psychedelic Rock', 'Australia'),
(73, 'Gorillaz', 4, 'Alternative Rock', 'United Kingdom'),
(74, 'LCD Soundsystem', 5, 'Electronic Rock', 'United States'),
(75, 'The xx', 3, 'Indie Pop', 'United Kingdom'),
(76, 'Alt-J', 4, 'Indie Rock', 'United Kingdom'),
(77, 'The 1975', 4, 'Indie Pop', 'United Kingdom');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `musicales`
--
ALTER TABLE `musicales`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `musicales`
--
ALTER TABLE `musicales`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=78;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;