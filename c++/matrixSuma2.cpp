#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int matrix1[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    int matrix2[3][3] = {
        9, 8, 7,
        6, 5, 4,
        3, 2, 1
    };
    int suma[3][3] = {
        matrix1[0][0] + matrix2[0][0], matrix1[0][1] + matrix2[0][1], matrix1[0][2] + matrix2[0][2],
        matrix1[1][0] + matrix2[1][0], matrix1[1][1] + matrix2[1][1], matrix1[1][2] + matrix2[1][2],
        matrix1[2][0] + matrix2[2][0], matrix1[2][1] + matrix2[2][1], matrix1[2][2] + matrix2[2][2],
    };
    
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
