#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char *argv[]) {
    string arregloString[5];
    arregloString[0] = "Kyb3r";
    arregloString[1] = "OwO";
    arregloString[2] = "UwU";
    arregloString[3] = "For all mankind";
    arregloString[4] = "ReedMoon";
    int arregloEnteros[5] = {1, 2, 3, 4, 5};
    //                       0  1  3  4  5
    float arregloFlotantes[10] = {1.0, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.19, 10.5};
    //                             0    1    2    3    4    5    6    7    8    9
    char arregloCaracter[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    //                          0    1    2    3    4    5    6    7

    for (int i = 0; i < 8; i++) {
        cout << typeid(arregloCaracter[i]).name() << " - " << arregloCaracter[i] << endl;
    }
    return 0;
}