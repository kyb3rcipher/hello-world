<?php

// Hello world
echo "Hello PHP" . "\n";

// Commenaries
/*
This is a commentary
*/
# This is a commetary too

// Variables
// primitive values
$my_string = "This is a string text";
$my_string = "Here I change my string text";
echo $my_string . "\n";
echo gettype($my_string) . "\n";

$my_string = 6;  // Dinamic typing
echo $my_string . "\n";
echo gettype($my_string) . "\n";

$my_string = "This is a string text";

$my_int = 7;
$my_int += 4;
echo $my_int . "\n";
echo $my_int - 1 . "\n";
echo $my_int . "\n";
echo gettype($my_int) . "\n";

$my_double = 6.5;
echo gettype($my_double) . "\n";
echo $my_int + $my_double . "\n";
//echo $my_int + $my_double + $my_string . "\n";

$my_bool = true;
echo $my_bool . "\n";
$my_bool = true;
echo $my_bool . "\n";
echo gettype($my_bool) . "\n";


echo "\n" . "The value of my inter is $my_int and of my boolean is: $my_bool.\n";

// Constants
// Start with CAPITAL LETERS (SNAKE CASE).
const MY_CONTAST = "Value of the contast";
echo MY_CONTAST . "\n";  // use the contast variables without $ sign.

// Lists (arrays)
$my_list = [$my_string, $my_int, $my_double];
echo gettype($my_list) . "\n";
echo $my_list[0] . "\n";

array_push($my_list, $my_bool);  // add $my_bool to array list (last space).
print_r($my_list);
//echo $my_list[4]  // Error

// Dictionary
$my_dict = array("string" => $my_string, "integer" => $my_int, "boolean" => $my_bool);
print(gettype($my_dict));
print_r($my_dict);
echo $my_dict["boolean"];
//echo $my_dict[0]  // Error

// Set
// No print repetead values in array
array_push($my_list, "Kyb3r");
array_push($my_list, "Kyb3r");
print_r(array_unique($my_list));

// Loops
for ($index = 0; $index <= 10; $index++) {
    echo $index . "\n";
}
foreach (array_unique($my_list) as $my_item) {
    echo $my_item . "\n";
}

$index = 10;
while ($index >= 0) {
    echo $index . "\n";
    $index--;
}
$index = 0;
do {
    echo $my_list[$index] . "\n";
    $index = $index + 1;
} while ($index <= sizeof($my_list) - 1);  // sizeof return array lenght (+1)

// Control flows
$my_int = 12;
$my_string = "Hola";
if ($my_int == 11 or $my_string == "Hola" || $my_list[0] == "This is a string text") {
    echo "The value is 11\n";
} elseif ($my_int == 12) {
    echo "The value is 12\n";
} else {
    echo "The value is not 11 or 12\n";
}

// Functions
//function print_number($my_number) // u can use this for dinamic typing
function print_number(int $my_number) {
    //echo 10 . "\n";
    echo $my_number . "\n";
}
print_number(5);
//print_number(10.5);  // Error
//print_number("Hi");  // Error

// Classes (and objects)
class MyClass {
    public $name;
    public $age;

    function __construct($name, $age) {
        $this->name = $name;
        $this->age = $age;
    }

    function print_name() {
        echo $this->name;
    }
}

$my_class = new MyClass("Kyb3r", 17);
print_r($my_class);
echo $my_class->name . "\n";
$my_class->name = "Cipher";
echo $my_class->name . "\n";
print(gettype($my_class)) . "\n";
$my_class->print_name();

?>