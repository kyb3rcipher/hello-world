<?php
require 'conexion.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $conn = connectDatabase();
    
    $email = $_POST['email'];
    $password = $_POST['password'];
    
    $sql = "UPDATE usuarios SET email='$email', contrasena='$password' WHERE email='$email'";
    if ($conn->query($sql) === TRUE) {
        header("Location: /tabla-usuarios.php");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
} else {
    echo 'nono';
}
?>