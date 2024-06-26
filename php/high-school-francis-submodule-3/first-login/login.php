<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>KYB3RLogin | Login</title>

    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.4/css/all.min.css">
</head>
<body>
<?php include 'partials/header.php' ?>
<main>
    <h1>Login</h1>
    <div class="container">
        <form action="sql/login_user.php" method="post">
            <label for="username"><b>Username/Email</b></label>
            <input type="text" placeholder="Enter username or email" name="username_or_email" required>

            <label for="password"><b>Password</b></label>
            <div class="password-container">
                <input type="password" placeholder="Enter password" name="password" required>
                <i class="fas fa-eye-slash toggle-password" id="togglePassword"></i>
            </div>

            <button type="submit">Login</button>
        </form>

        <a href="forgot_password.php">Forgot Password?</a>
    </div>
</main>

<script type="text/javascript" src="js/alerts.js"></script>
<script type="text/javascript" src="js/password-container.js"></script>
</body>
</html>
