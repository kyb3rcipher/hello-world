<?php
require_once 'database.php';
$conn = connectToDatabase();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_COOKIE["username"];
    $new_email = $_POST["new_email"];

    // Prepare the SQL statement to update the email
    $update_email = "UPDATE users SET email = ? WHERE username = ?";
    $stmt = $conn->prepare($update_email);
    $stmt->bind_param("ss", $new_email, $username);

    if ($stmt->execute()) {
        header("Location: /login/index.php?alert=email_changed");
        exit;
    } else {
        header("Location: /login/index.php?alert=email_change_failed&error=" . $conn->error);
        exit;
    }

    $stmt->close();
}

$conn->close();
?>