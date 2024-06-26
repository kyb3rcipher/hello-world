<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>KYB3RLogin | Change password</title>
    
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.4/css/all.min.css">
</head>
<body>
<?php include 'partials/header.php' ?>
<main>
    <h1>Change password</h1>
    <div class="container">
        <form action="sql/change_user_password.php" method="post">
            <label for="old_password"><b>Old password</b></label>
            <div class="password-container">
                <input type="password" placeholder="Enter the old password" name="old_password" required>
                <i class="fas fa-eye-slash toggle-password" id="togglePassword"></i>
            </div>

            <label for="new_password"><b>New password</b></label>
            <div class="password-container">
                <input type="password" placeholder="Enter the new password" name="new_password" id="new_password" required>
                <i class="fas fa-eye-slash toggle-password" id="togglePassword"></i>
            </div>
                
            <button type="submit">Change password</button>
        </form>
    </div>
</main>

<script type="text/javascript" src="js/alerts.js"></script>
<script type="text/javascript" src="js/password-container.js"></script>
</html>