<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KYB3RLogin | Register</title>
    
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.4/css/all.min.css">
</head>
<body>
<?php include 'partials/header.php' ?>
<main>
    <h1>Register</h1>
    <div class="container">
        <form id="registerForm" action="sql/register_user.php" method="POST" onsubmit="return validateForm()">
            <label for="email"><b>Email</b></label>
            <input type="text" placeholder="example@kyb3rcipher.com" name="email" id="email" required>

            <label for="uname"><b>Username</b></label>
            <input type="text" placeholder="Enter username" name="username" id="username" required>

            <label for="password"><b>Password</b></label>
            <div class="password-container">
                <input type="password" placeholder="Enter password" name="password" id="password" required>
                <i class="fas fa-eye-slash toggle-password" id="togglePassword"></i>
            </div>

            <button type="submit">Register</button>
        </form>
    </div>
</main>

<script type="text/javascript" src="js/alerts.js"></script>
<script type="text/javascript" src="js/password-container.js"></script>
</body>
</html>
