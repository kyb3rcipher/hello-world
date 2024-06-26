<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form2</title>
    <link rel="stylesheet" type="text/css" href="style.css" />
</head>
<body>
    <?php
    $conn = new mysqli("localhost", "root", "", "database");

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $name = $_POST['name'];
    $civil_status = $_POST['civilStatus'];
    // Assuming a default value is always set
    $gender = $_POST['gender'];
    if ($_POST['other_gender'] !== "") {
        $gender = $_POST['other_gender'];
    }
    $newsletter = ($_POST['newsletter'] != "on") ? "off" : "on";

    $sql = "INSERT INTO students (name, civil_status, gender, newsletter) VALUES ('$name', '$civil_status', '$gender', '$newsletter')";

    // Execute query
    if ($conn->query($sql) === TRUE) {
        echo "<div class='form2_container'>";
        echo "<img src='okay.gif' />";
        echo "<h3>New record created successfully</h3>";
        echo "</div>";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    // Close connection
    $conn->close();
    ?>
</body>
</html>