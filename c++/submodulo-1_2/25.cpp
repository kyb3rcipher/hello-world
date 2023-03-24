/*
Calcular la utilidad que un trbajador recibe en el reparto anual
de utilidades, si a este se le asigna un porcentaje de su salario mensual
que depende de su antiguedad en la empresa, segun lo marca la siguiente tabla:

-----------------------------------------------------
| Tiempo                           |Utilidad        |
|----------------------------------|----------------|
|Menos de 1 year                   |5% del salario  |
|1 year o mas y menor de 2 years   |7% del salario  |
|2 years o mas y menos de 5 years  |10% del salario |
|5 years o mas y menos de 10 years |15% del salario |
|10 years o mas                    |20% del salario |
-----------------------------------------------------

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int salario, years, utilidad;
    string utilidad_porcentaje;
    cout << "Dime tu salario mensual: ";
    cin >> salario;
    cout<< "Dime tus years trabajados: ";
    cin >> years;
    
    if (years < 1) {
        utilidad_porcentaje = "5%";
        utilidad = salario * 0.05;
    } else if (years >= 1 && years < 2) {
        utilidad_porcentaje = "7%";
        utilidad = salario * 0.07;
    } else if (years >= 2 && years < 5) {
        utilidad_porcentaje = "10%";
        utilidad = salario * 0.10;
    } else if (years >= 5 && years < 10) {
        utilidad_porcentaje = "15%";
        utilidad = salario * 0.15;
    } else if (years >= 10) {
        utilidad_porcentaje = "20%";
        utilidad = salario * 0.20;
    }
    
    cout << "Tu pago es de: " << salario << endl;
    cout << "Tu utilidad es del: " << utilidad_porcentaje << endl;
    cout << "Tu pago total es: " << salario + utilidad << endl;
}
