/*
Practica 10: Array 10
Name: Kyb3r Cipher
Date: 26/05/2023
School: CBTIS 89 - 2A TM

teacher:
Programa que llena dos arreglos con 6 numeros enteros (tecleados por el usuario, se pueden teclear
numeros positivos o negativos), siguiendo algunas condiciones, posteriormente calcula y guarda en otros arreglos la suma, la resta, la multiplicacion
y la division de los datos guardados.

me:
Programa que almacena en un arreglo 6 numeros enteros (tecleados por el usuario, se pueden teclear numeros positivos o negativos),
siguiendo algunas condiciones, posteriormente calcula y guarda en otros arreglos la suma, la resta, la multiplicacion y la division.

--------------------------------------------------------------------
| Numeros 1 | Numeros 2 | Suma | Resta | Multiplicacion | Division |
--------------------------------------------------------------------
|        75 |       -20 |   55 |    95 |          -1500 |    -3.75 |
|        60 |       -17 |   43 |    77 |          -1020 |    -3.52 |
|        99 |       -10 |   89 |   109 |           -990 |    -9.9  |
--------------------------------------------------------------------

Condiciones:
* En el arreglo numeros1 se almacenara unicamente datos positivos del 51 al 99.
* En el arreglo numeros2 se almacenara negativos que esten en el rango del -50 al -1.
* En caso de que a uno de los arreglos le falten numeros, se colocara un 0 en su lugar.
   (por ejemplo si no hay numeros positivos suficientes para rellenar el array numeros1 se colocora un 0 para completar espacios)

En los arreglos siguientes se almacenaran los resultados que arrojan las operaciones correspondientes.
*/
#include <iostream>
#include <iomanip>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int numeros1[6] = {0, 0, 0, 0, 0, 0}, numeros2[6] = {0, 0, 0, 0, 0, 0}, suma[3], resta[3], multiplicacion[3];   // definimos los 6 arrays a 0 para en caso de que falten numeros sea un 0.
    double division[3];
    int contador1 = 0, contador2 = 0;
    
    for (int i = 0; i < 6; i++) {
        int numero;
        cout << i + 1 << ".- Dime el numero: ";
        cin >> numero;
        
        // Si el numero es mayor a -50, Si el numero es mayor o 0 y menor a 51, O si el numero es mayor a 99
        while (numero < -50 or (numero >= 0 && numero < 51) or numero > 99) {
            cout << "ERROR: El numero no cumple una condicion, intenta de nuevo: ";
            cin >> numero;
            
            cout << "\n";
        }
        
        // Guardar el numero en el array correspondiente
        if (numero >= 51 && numero <= 99) {
            numeros1[contador1] = numero;
            contador1++;
            // Se considera una condicion para verificar que el numero sea menor o igual a -1 (para ver que el numero solo sea asignado a negativos)
        } else if (numero >= -50 && numero <= -1) {
            numeros2[contador2] = numero;
            contador2++;
        }
        // Ejemplo: Colocamos el numero 60 siempre se cumplira el primer if, NO asignara 60 a numeros2 por que 60 aunque es mayor a -50 no es menor o igual a -1.
    }
    
    VariadicTable<int, int, int, int, int, double> vt({"Numeros 1", "Numeros 2", "Suma", "Resta", "Multiplicacion", "Division"}, 5);
    for (int i = 0; i < 6; i++) {
        // Calcular las operaciones
        suma[i] = numeros1[i] + numeros2[i];
        resta[i] = numeros1[i] - numeros2[i];
        multiplicacion[i] = numeros1[i] * numeros2[i];
        division[i] = static_cast<double>(numeros1[i]) / static_cast<double>(numeros2[i]);
        
        cout << fixed << setprecision(2);   // definir decimales a 2
        
        vt.addRow(numeros1[i], numeros2[i], suma[i], resta[i], multiplicacion[i], division[i]); // en caso de que el resultado de la division sea 0 imprime inf (infite) por el 0.
    }
    
    cout << "\n"; vt.print(cout);
    
    return 0;
}

