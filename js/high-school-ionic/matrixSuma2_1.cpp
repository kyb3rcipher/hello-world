#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int matrix1[3][3], matrix2[3][3], suma[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Dime el numero para la matrix 1 [" << i << ", " << j << "]" << ": ";
            cin >> matrix1[i][j];
        }
        cout << "\n";
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Dime el numero para la matrix 2 [" << i << ", " << j << "]" << ": ";
            cin >> matrix2[i][j];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    cout << "x  0  1  2" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << "| ";
        for (int j = 0; j < 3; j++) {
            cout << suma[i][j] << " ";
        }
        cout << "\n";
    }
	return 0;
}
