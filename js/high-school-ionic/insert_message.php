<?php
require 'conexion.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $conn = connectDatabase();
    
    $nombre = $_POST['nombre'];
    $email = $_POST['email'];
    $numero = $_POST['numero'];
    $mensaje = $_POST['mensaje'];
    
    $sql = "INSERT INTO mensajes (nombre, email, numero, mensaje) VALUES ('$nombre', '$email', '$numero', '$mensaje')";
    if ($conn->query($sql) === TRUE) {
        header("Location: /contacto.php?mensaje=true");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
} else {
    echo 'nono';
}
?>