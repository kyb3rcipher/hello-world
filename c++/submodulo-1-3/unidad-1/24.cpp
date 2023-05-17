/*
Calcular el indice de masa corporal de una persona,
considerando para ello el peso y la estatura. La formula
es: IMC=Peso/Talla[al cuadrado].

Imprimir el IMC, asi como un mensaje de acuerdo a la siguiente
tabla:
----------------------------------
| IMC         |CONCLUSION        |
|-------------|------------------|
|<= 16        |Anorexia          |
|>= 18 y < 20 |Delgadez          |
|>= 20 y < 27 |Normalidad        |
|>= 27 y < 30 |Obesidad (grado 1)|
|>= 30 y < 35 |Obesidad (grado 2)|
|>= 35 y < 40 |Obesidad (grado 3)|
|>= 40        |Obersidad morbida |
----------------------------------

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    float peso, talla, imc;
    
	cout << "Dime tu peso: ";
    cin >> peso;
    cout << "Dime tu talla: ";
    cin >> talla;
    imc = peso / (talla * talla);
    
    if (imc <= 16) {
        cout << "Anorexia";
    } else if (imc >= 18 && imc < 20) {
        cout << "Delgadez";
    } else if (imc >= 20 && imc < 27) {
        cout << "Normalidad";
    } else if (imc >= 27 && imc < 30) {
        cout << "Obesidad (grado 1)";
    } else if (imc >= 30 && imc < 35) {
        cout << "Obesidad (grado 2)";
    } else if (imc >= 35 && imc < 40) {
        cout << "Obsidad (grado 3)";
    } else if (imc >= 40) {
        cout << "Obesidad morbida";
    }
	return 0;
}

