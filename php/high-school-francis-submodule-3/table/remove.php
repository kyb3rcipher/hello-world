<?php
if(isset($_POST['id'])) {
    require_once 'connection.php';
    $conn = connectToDatabase();

    $id = $_POST['id'];
    
    if ($conn->query("DELETE FROM users WHERE id = $id") === TRUE) {
        header("Location: index.php");
    } else { echo $conn->error; }

    $conn->close();
} else {
    echo "No ID provided to delete";
}
?>