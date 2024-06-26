<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form 2</title>
    
    <style type="text/css">
        body {
            font-family: Helvetica;
            text-align: center;
            color: #FFF7EE;
            background-color: #010409;

            border: 3px solid #E6E6E6;
            margin: auto;
            width: 50%;
            padding: 10px;
        }

        .text-copyright {
            position: absolute;
            bottom: 10px;
            right: 10px;
            font-size: 12px;
            font-weight: bold;

            a {
                color: #E6E6E6;
                text-decoration: none;
            }
        }
    </style>
</head>
<body>
    <?php
        /*$name = $_POST['txtName'];
        $surnames = $_POST['txtSurnames'];
        $phone = $_POST['txtPhone'];
        $age = $_POST['txtAge'];
        $email = $_POST['txtEmail'];

        echo 'Name: ', $name, '<br />';
        echo 'Surnames: ', $surnames, '<br />';
        echo 'Phone: ', $phone, '<br />';
        echo 'Age: ', $age, '<br />';
        echo 'Email: ', $email, '<br />';*/
    ?>

    <?php
        $servername = "localhost";
        $username = "root";
        $password = "";
        $database = "Form";

        $conn = new mysqli($servername, $username, $password, $database);

        if ($conn->connect_error) {
            die("Connection failed: " . $conn->connect_error);
        }

        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $name = $_POST["txtName"];
            $surnames = $_POST["txtSurnames"];
            $phone = $_POST["txtPhone"];
            $age = $_POST["txtAge"];
            $email = $_POST["txtEmail"];

            $sql = "INSERT INTO form (name, surnames, phone, age, email) VALUES ('$name', '$surnames', '$phone', '$age', '$email')";

            // Execute query
            if ($conn->query($sql) === TRUE) {
                echo "New record created successfully";
            } else {
                echo "Error: " . $sql . "<br>" . $conn->error;
            }
        }

        // Close connection
        $conn->close();
    ?>

    <div class="text-copyright"><a href="https://kyb3rcipher.com">kyb3rcipher.com</a> - &copy 2024</div>
</body>
</html>