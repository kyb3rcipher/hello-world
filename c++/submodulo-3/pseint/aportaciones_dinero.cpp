/*
De 30 alumnos obtener las aportaciones  de 10, 15 y 20 pesos
para conocer cuantos alumnos aportan cada una de las cantidades
y su aportacion total

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    // Declarar vairables
    int aportacion, aportacion10 = 0, aportacion15 = 0, aportacion20 = 0, aportacion_others = 0;
    
    // Pedir la aportacion de dinero del alumno (se repite 30 veces 1 por cada alumno)
    for (int i = 1; i <= 30; i++) {
        cout << "Dame la aportacion del alumno " << i << ": ";
        cin >> aportacion;
        
        // Ir agregando alumnos a su variable de contribucion
        if (aportacion == 10) {
            aportacion10++;
        } else if (aportacion == 15) {
            aportacion15++;
        } else if (aportacion == 20) {
            aportacion20++;
        } else {
            cout << "Error: Cantidad no valida!" << endl;
            return 1;
        }
    }
    
    // Imprimir datos
    cout << "\n=====================================================" << endl;
    cout << "Los alumnos que aportaron $10 fueron: " << aportacion10 << endl;
    cout << "Los alumnos que aportaron $15 fueron: " << aportacion15 << endl;
    cout << "Los alumnos que aportaron $20 fueron: " << aportacion20 << endl;
    cout << "Los alumnos que aportaron otra cantidad fueron: " << aportacion_others << endl;
    cout << "El total es de: " << (aportacion10 * 10) + (aportacion15 * 15)+ (aportacion20 * 20) + aportacion_others << endl;
    cout << "=====================================================" << endl;
    return 0;
}
