#include <iostream>
using namespace std;

float celsiusToFahrenheit (float c) {
    float f;

    f = (c * 1.8) + 32 ;

    return f;
}

float fahrenheitToCelsius (float f) {
    float c;
    
    c = (f - 32) / 1.8;
    
    return c;
}

int main(int argc, char *argv[]) {
    float celsius, fahrenheit;

    cout << "Dime los grados celsius: ";
    cin >> celsius;
    cout << "Dime los grados fahrenheit: ";
    cin >> fahrenheit;

    cout << "\n";
    cout << celsius << "° celsius son: " << celsiusToFahrenheit(celsius) << " fahrenheit." << endl;
    cout << fahrenheit << "° fahrenheit son: " << fahrenheitToCelsius(fahrenheit) << " celsius." << endl;

    return 0;
}
