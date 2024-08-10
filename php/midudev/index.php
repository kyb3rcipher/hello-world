<style>
    :root {
        color-scheme: light dark;
    }

    body {
        display: grid;
        place-content: center;
    }
</style>

<?php
    $name = "Kyb3r";
    $isDev = (bool) true;
    $age = (int) 17;

    // Constant ($[dollar] is not required)
    define('LOGO_URL', 'https://www.php.net/images/logos/php-logo.svg');
    const NAME = "Cipher";  // static (not work in execution time like a loop)

    $isOld = $age > 40;
    /*if ($isOld) {
        echo "<h2>You are old congratulations!</h2>";
    } else if ($isDev) {
        echo "<h2>You are not old but you're dev. You are fuck</h2>";
    } else {
        echo "<h2>You are young congratulations!</h2>";
    }*/

    //var_dump($name);
    $output = "$name with a age: \"$age\"";
    $output .= " is dev? $isDev";
?>
<h1>
    <?= $output; ?>
</h1>

<?php /*
<?php if ($isOld): ?>
    <h2></h2>
<?php elseif ($isDev): ?>
    <h2></h2>
<?php else: ?>
    <h2></h2>
<?php endif; ?>
*/ ?>

<!-- OR -->
<?php
    /*$isOldOutput = $isOld ? "You are old congratulations!"
    : ($isDev ? "You are not old but you're dev. You are fuck"
    : "You are young congratulations!");*/

    /*$isOldOutput = match ($age) {
        0, 1, 2 => "You are a baby, $name 👶🏻",
        3, 4, 5, 6, 7, 8, 9, 10 => "You are a kid $name 👦🏻",
        11, 12, 13, 14, 15, 16, 17, 18, 19 => "You are a younger 🧒🏻",
        20, 21, 22, 23, 24, 25, 26, 27, 28, 29 => "You are a adult teenger $name 🧑🏻",
        default => "You're a adult $name 👨🏻"
    }*/
    $isOldOutput = match (true) {
        $age < 2 => "You are a baby, $name 👶🏻",
        $age < 10 => "You are a kid $name 👦🏻",
        $age === 18 => "You can buy alchol 🍺",
        $age < 19 => "You are a younger 🧒🏻",
        $age < 29 => "You are a adult teenger $name 🧑🏻",

        default => "You're a adult $name 👨🏻 "
    };

    $bestLanguages = ["PHP", "JS", "C++", 4, 5, 6];
    $bestLanguages[] = "Java";  // To the array end.

    $person = [
        "name" => "Kyb3r",
        "age" => 17,
        "isDev" => true,
        "languages" => ["C++", "JS", "PHP"],
    ];
    $person["name"] = "Cipher";
    echo "<h3>Person: " . $person["name"] . "</h3>";
?>
<h2><?= $isOldOutput ?></h2>
<h2>The best lanaguage is: <?= $bestLanguages[0] ?></h2>
<ul>
    <?php foreach ($bestLanguages as $index => $language): ?>
        <li><?= $index . ".- " . $language ?></li>
    <?php endforeach; ?>
</ul>