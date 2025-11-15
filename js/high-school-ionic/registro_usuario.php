<?php
require 'conexion.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $conn = connectDatabase();
    
    $email = $_POST['email'];
    $password = $_POST['password'];
    
    $sql = "INSERT INTO usuarios (email, contrasena) VALUES ('$email', '$password')";
    if ($conn->query($sql) === TRUE) {
        header("Location: /login.php?registro");
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
} else {
    echo 'nono';
}
?>