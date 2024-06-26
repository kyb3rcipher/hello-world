<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form 1</title>
    
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

        label {
            display: block;
            margin-bottom: 5px;
            color: #E6E6E6;
        }

        input[type="text"],
        input[type="tel"],
        input[type="number"],
        input[type="email"] {
            width: calc(100% - 10px);
            padding: 10px;
            margin-bottom: 10px;
            border-radius: 5px;
            border: 1px solid #E6E6E6;
            background-color: #333;
            color: #FFF;
        }

        input[type="submit"] {
            background-color: gray;
            color: white;
            padding: 12px 20px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            width: 100%;
            margin-top: 10px;
        }

        input[type="submit"]:hover {
            background-color: #45a049;
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
    <form action="form2.php" method="POST">
        <label>Name: </label>
        <input type="text" name="txtName" placeholder="Your name(s)" /> <br />
        <label>Surnames: </label>
        <input type="text" name="txtSurnames" placeholder="Surnames" /> <br />
        <label>Phone number: </label>
        <input type="tel" name="txtPhone" placeholder="Your phone number" required /> <br />
        <label>Age: </label>
        <input type="number" name="txtAge" placeholder="Your age" /> <br />
        <label>Email</label>
        <input type="email" name="txtEmail" placeholder="Your email" /> <br />

        <input type="submit" name="Send" />
    </form>

    <div class="text-copyright"><a href="https://kyb3rcipher.com">kyb3rcipher.com</a> - &copy 2024</div>
</body>
</html>