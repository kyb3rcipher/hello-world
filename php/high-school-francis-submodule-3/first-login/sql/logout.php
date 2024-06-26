<?php
    session_start();

    // Delete the user cookies
    setcookie("user_id", "", time() - 3600, "/");
    setcookie("username", "", time() - 3600, "/");

    session_destroy();

    header("Location: /login/index.php");
exit;
?>