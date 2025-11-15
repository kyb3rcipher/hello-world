<?php
require_once 'database.php';
$conn = connectToDatabase();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_COOKIE['username'];
    $old_password = $_POST["old_password"];
    $new_password = $_POST["new_password"];

    if (strlen($new_password) < 10) {
        header("Location: /login/change_password.php?alert=password_too_short");
        exit;
    }

    // Check if the provided old password matches the one in the database
    $check_password_query = "SELECT `password` FROM users WHERE username = ?";
    $stmt = $conn->prepare($check_password_query);
    $stmt->bind_param("s", $username);
    $stmt->execute();
    $result = $stmt->get_result();
    $user = $result->fetch_assoc();

    if ($user && password_verify($old_password, $user['password'])) {
        // Hash the new password securely
        $hashed_password = password_hash($new_password, PASSWORD_DEFAULT);

        $update_password = "UPDATE users SET `password` = ? WHERE username = ?";
        $stmt = $conn->prepare($update_password);
        $stmt->bind_param("ss", $hashed_password, $username);

        if ($stmt->execute()) {
            header("Location: /login/index.php?alert=password_changed");
            exit;
        } else {
            header("Location: /sq/change_user_password.php?alert=password_change_failed&error=" . $conn->error);
            exit;
        }
    } else {
        header("Location: /login/change_password.php?alert=incorrect_current_password");
        exit;
    }

    $stmt->close();
}

$conn->close();
?>
