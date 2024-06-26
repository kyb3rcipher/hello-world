<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operadores logicos</title>
    
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
    <h1>Operadores Logicos</h1>

    <?php
        $num1 = 8; $num2 = 3; $num3 = 3;

        echo json_encode($num1 == $num2), '<br />';
        echo json_encode($num1 != $num2), '<br />';
        echo json_encode($num1 < $num2), '<br />';
        echo json_encode($num1 > $num2), '<br />';
        echo json_encode($num1 >= $num2), '<br />';
        echo json_encode($num1 <= $num2), '<br />';
        echo json_encode($num1 == $num2);
    ?>

    <div class="text-copyright"><a href="https://kyb3rcipher.com">kyb3rcipher.com</a> - &copy 2024</div>
</body>
</html>