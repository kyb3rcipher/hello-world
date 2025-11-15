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
    <h1>Change username</h1>
    <div class="container">
        <form action="sql/change_user_username.php" method="post">
            <label for="new_username"><b>New username</b></label>
            <input type="text" placeholder="Enter the new username" name="new_username" required>
                
            <button type="submit">Change username</button>
        </form>
    </div>
</main>

<script type="text/javascript" src="js/alerts.js"></script>
</html>
