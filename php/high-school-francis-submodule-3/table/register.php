<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    require_once 'connection.php';
    $conn = connectToDatabase();

    
    $sql = "INSERT INTO users (name, surname, email, city, age) VALUES ('".$_POST['name']."', '".$_POST['surnames']."', '".$_POST['email']."', '".$_POST['city']."', '".$_POST['age']."')";
    if ($conn->query($sql) === TRUE) {
        header("Location: index.php");
    } else { echo $conn->error;}


    $conn->close();
}
?>
