<?php
function connectDatabase() {
    $conexion = new mysqli("localhost", "", "", "");

    if ($conexion->connect_error) {
        die("Connection failed: " . $conexion->connect_error);
    }

    return $conexion;
}
?>