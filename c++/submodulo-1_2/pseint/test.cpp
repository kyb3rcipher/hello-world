/*
Un empleado trabaja normalmente 8 horas al dia por 5 dias a la semana, 
es decir 40 goras semanales, sin embargo algunos empleados trabajan horas extra
y estas se pagan al doble de las horas normales.

Imprmir su pago extra y su pago total.
*/
#include <iostream>
using namespace std;

int main() {
    // Decalar variables
	int pago, horas, pago_hora, pago_hora_extra, horas_extra, pago_extra;

    // Solicitar el pago por dia y las horas trabajadas
	cout << "Dime cuanto te pagan por dia: ";
	cin >> pago;
	cout << "Dime cuantas horas trabajaste a la semana: ";
	cin >> horas;

    // Calcular el pago por hora y el pago por las horas extras
	pago_hora = pago / 8;
    pago_hora_extra = pago_hora * 2;

    // Detectar si hay horas extras y calcular el pago por estas
    horas_extra = 0;
	if (horas > 40) {
		horas_extra = horas - 40;
	}
    pago_extra = horas_extra * pago_hora_extra;

    // Imprimir pagos y horas extras
	cout << "\n";	// line-break
    //system("clear");    // clear screen (linux) [use cls for windows]
    cout << horas << " - horas trabajadas | " << horas_extra << " - horas extra" << endl;
    cout << pago_hora << " - pago por hora    | " << pago_hora_extra << " - pago por hora extra \n" << endl;

    cout << "Pagos:" << endl;
	cout << "Horas extra = " << pago_extra << endl;
	if (horas >= 40) {
		cout << "Total = " << (pago_hora * 40) + pago_extra << endl;
	} else {
		cout << "Total = " << (pago_hora * horas) + pago_extra << endl;
	}

	return 0;
}