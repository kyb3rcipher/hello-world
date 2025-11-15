<?php
require 'conexion.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $conn = connectDatabase();
    
    $email = $_POST['email'];
    $password = $_POST['password'];
    
    $sql = "SELECT * FROM usuarios WHERE email='$email' AND contrasena='$password'";
    $result = $conn->query($sql);
    if ($result->num_rows >= 1) {
        header("Location: /index.php");
    } else {
        header("Location: /login.php?error=true");
    }

    $conn->close();
} else {
    echo 'nono';
}
?>