<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>KYB3RLogin | Change username</title>
    
    <link rel="stylesheet" href="style.css">
</head>
<body>
<?php include 'partials/header.php' ?>
<main>
    <h1>Change email</h1>
    <div class="container">
        <form action="sql/change_user_email.php" method="post">
            <label for="new_email"><b>New email</b></label>
            <input type="email" placeholder="Enter the new email" name="new_email" required>
                
            <button type="submit">Change email</button>
        </form>
    </div>
</main>

<script type="text/javascript" src="js/alerts.js"></script>
</html>
