<?php
require_once 'database.php';
$conn = connectToDatabase();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $old_username = $_COOKIE["username"];
    $new_username = $_POST["new_username"];
    

    $update_username = "UPDATE users SET username = ? WHERE username = ?";
    $stmt = $conn->prepare($update_username);
    $stmt->bind_param("ss", $new_username, $old_username);

    if ($stmt->execute()) {
        setcookie('username', $new_username, time() + (120), "/");
        header("Location: /login/index.php?alert=username_changed");
        exit;
    } else {
        header("Location: /login/index.php?alert=username_change_failed&error=" . $conn->error);
        exit;
    }
    
    $stmt->close();
}

$conn->close();
?>