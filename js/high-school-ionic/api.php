<?php
const API_URL = "https://whenisthenextmcufilm.com/api";
# Star a cURL session; ch = CURL hablde
$ch = curl_init(API_URL);

// Indicate we need recibve the result and don't show in screen
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

/* Execute the pedition and save the results */
$result = curl_exec($ch);
curl_close($ch);
/*
Alternative if just want GET of API
$data = json_decode($result, true);
*/

$result = file_get_contents(API_URL);
?>

<header>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/@picocss/pico@2/css/pico.classless.min.css">

    <style type="text/css">
        body {
            display: grid;
            place-content: center;
            text-align: center;
        }

        img {
            width: 300;
            border-radius: 16px;
        }
    </style>
</header>

<main>
    <!--<pre style="overflow: scroll; height: 150px;"><?php var_dump($data); ?></pre>-->

    <section>
        <h1><?= $data["title"]; ?> releases in <?= $data["days_until"]; ?> days!</h1>
        <p>Release date: <?= $data["release_date"]; ?></p>
        <p>Production type: <?php echo $data["type"]; ?></p>
        <p>What's afterwards? <strong><?= $data["following_production"]["title"]; ?></strong></p>
        <img src="<?= $data["poster_url"]; ?>" alt="Poster of <?= $data["title"]; ?>">
    </section>
</main>