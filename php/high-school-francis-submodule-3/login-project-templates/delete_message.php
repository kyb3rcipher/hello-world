<?php
require 'conexion.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $conn = connectDatabase();
    
    $mensaje = $_POST['mensaje'];
    
    $sql = "DELETE FROM mensajes WHERE mensaje='$mensaje'";
    if ($conn->query($sql) === TRUE) {
        header("Location: ../mensajes.php");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
} else {
    echo 'nono';
}
?>