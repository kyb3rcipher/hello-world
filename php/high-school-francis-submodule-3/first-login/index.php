<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KYB3RLogin</title>
    
    <link rel="stylesheet" href="style.css">
</head>
<body>
<?php include 'partials/header.php' ?>

    <?php
        if(isset($_COOKIE['username'])) {
            echo '<h1>Logged in user: ' . $_COOKIE['username'] . '</h1>';
        } else {
            echo '<h1>Not logged in</h1>';
    }
    ?>
    <img src="images/kartman.gif">
</body>

<script type="text/javascript" src="js/alerts.js"></script>
</html>
