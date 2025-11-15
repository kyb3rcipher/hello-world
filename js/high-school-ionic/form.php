<!DOCTYPE html>
<html>
<head>
    <title>Form with combobox, radiobox and checkbox</title>
    <link rel="stylesheet" type="text/css" href="style.css" />
</head>
<body>
    <form action="form2.php" method="POST">
        <label>Name: </label>
        <input type="text" name="name" placeholder="Your name" required />
        
        <label>Civil Status</label>
        <select name="civilStatus" title="Civil Status" required>
            <option value="Married">Married</option>
            <option value="Single">Single</option>
            <option value="Divorced">Divorced</option>
        </select>

        <label>Gender:</label>
        <input type="radio" name="gender" value="Woman">Woman
        <input type="radio" name="gender" value="Man">Man
        <input type="text" name="other_gender" placeholder="Other" />
        

        <div class="checkbox-container">
            <input type="checkbox" name="newsletter" id="newsletter-checkbox">
            <label for="newsletter-checkbox">I want to subscribe to the newsletter</label>
        </div>

        <input id="submit_button" type="submit" name="Send" />
    </form>
</body>
</html>