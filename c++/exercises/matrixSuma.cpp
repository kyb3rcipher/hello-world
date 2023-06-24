#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int matrix1[3][3], matrix2[3][3], suma = 0;
    
    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            cout << "Dime el numero para la matrix UNO [" << i << ", " << j << "]: ";
            cin >> matrix1[i][j];
            
            cout << "Dime el numero para la matrix DOS [" << i << ", " << j << "]: ";
            cin >> matrix2[i][j];

            suma += matrix1[i][j] + matrix2[i][j];
            
            cout << "\n";
        }
        
    }
    
    cout << "La suma de los elementos es de: " << suma;
    
	return 0;
}

