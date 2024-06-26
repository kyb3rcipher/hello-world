<!DOCTYPE html>
<html lang="en">
<head>
    <title>Table</title>
    <link rel="stylesheet" href="css.css">
</head>
<body>
    <div id="table-container">
        <form method="post" action="">
            <select id="filter" name="filter" onchange="this.form.submit()">
                <option value="all" <?php if (isset($_POST['filter']) && $_POST['filter'] == 'all') echo 'selected'; ?>>All</option>
                <option value="adults" <?php if (isset($_POST['filter']) && $_POST['filter'] == 'adults') echo 'selected'; ?>>All adults</option>
                <option value="durango" <?php if (isset($_POST['filter']) && $_POST['filter'] == 'durango') echo 'selected'; ?>>All from Durango</option>
                <option value="chihuahua_minors" <?php if (isset($_POST['filter']) && $_POST['filter'] == 'chihuahua_minors') echo 'selected'; ?>>From Chihuahua and minors</option>
            </select>
        </form>

        <?php
            $conn = new mysqli("localhost", "root", "", "database");

            // Check if user select filter
            $filter = isset($_POST['filter']) ? $_POST['filter'] : 'all';

            $sql = "SELECT * FROM users";

            if ($filter == 'adults') {
                $sql .= " WHERE age <= 2006";
            } elseif ($filter == 'durango') {
                $sql .= " WHERE city = 'Durango'";
            } elseif ($filter == 'chihuahua_minors') {
                $sql .= " WHERE city = 'Chihuahua' AND age < 18";
            }

            // Execute sql for table
            $result = $conn->query($sql);

            if ($result->num_rows > 0) {
                echo "
                <table>
                    <tr>
                        <th>Name</th>
                        <th>Surnames</th>
                        <th>Email</th>
                        <th>City</th>
                        <th>Age</th>
                        <th>Remove</th>
                    </tr>";

                while($row = $result->fetch_assoc()) {
                    echo "
                    <tr>
                        <td>{$row['name']}</td>
                        <td>{$row['surname']}</td>
                        <td>{$row['email']}</td>
                        <td>{$row['city']}</td>
                        <td>{$row['age']}</td>
                        <td>
                            <form method='post' action='remove.php'>
                                <input type='hidden' name='id' value='{$row['id']}'>
                                <input type='submit' value='Eliminar'>
                            </form>
                        </td>
                    </tr>";
                }

                echo "</table>";
            } else {
                echo "0 users";
            }
        ?>
    </div>

    <form method="post" action="register.php" id="add-user">
        <label>Name:</label>
        <input type="text" name="name">

        <label>Surnames:</label>
        <input type="text" name="surnames">
        
        <label>Email</label>
        <input type="email" name="email">
        
        <label>City:</label>
        <select name="city">
            <option>Durango</option>
            <option>Monterrey</option>
            <option>Guadalajara</option>
            <option>Ciudad de Mexico</option>
            <option>Mazatlan</option>
            <option>Yucatan</option>
            <option>Oaxacaa</option>
            <option>Sinaloa</option>
            <option>Cancun</option>
        </select>
        
        <label>Age:</label>
        <input type="number" name="age" min="1950" max="2024" step="1" placeholder="YYYY">


        <input type="submit">
    </form>
</body>
</html>