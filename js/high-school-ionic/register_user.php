<?php
require_once 'database.php';
$conn = connectToDatabase();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $email = $_POST["email"];
    $password = $_POST["password"];

    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        header("Location: register.php?alert=invalid_email");
        exit;
    }
    if (strlen($password) < 10) {
        header("Location: register.php?alert=password_too_short");
        exit;
    }
    
    // Hash the password securely
    $hashed_password = password_hash($password, PASSWORD_DEFAULT);

    $sql = "INSERT INTO users (username, email, password) VALUES (?, ?, ?)";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("sss", $username, $email, $hashed_password);

    if ($stmt->execute()) {
        header("Location: /login/login.php?alert=register_success");
    } else {
        header("Location: register.php?alert=register_fail");
    }
    exit;
}

$conn->close();
?>