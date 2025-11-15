<?php
require_once 'database.php';
$conn = connectToDatabase();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $email = $_POST["email"];
    $new_password = $_POST["new_password"];
    
    if (strlen($new_password) < 10) {
        header("Location: /login/forgot_password.php?alert=password_too_short");
        exit;
    }

    // Hash the new password securely
    $hashed_password = password_hash($new_password, PASSWORD_DEFAULT);
    
    $sql = "SELECT * FROM users WHERE username = ? AND email = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("ss", $username, $email);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        $update_password = "UPDATE users SET password = ? WHERE username = ?";
        $stmt = $conn->prepare($update_password);
        $stmt->bind_param("ss", $hashed_password, $username);

        if ($stmt->execute()) {
            header("Location: /login/login.php?alert=password_changed");
            exit;
        } else {
            header("Location: /login/forgot_password.php?alert=password_change_failed&error=" . $conn->error);
            exit;
        }
    } else {
        header("Location: /login/forgot_password.php?alert=password_not_changed");
        exit;
    }

    $stmt->close();
    $conn->close();
}
?>