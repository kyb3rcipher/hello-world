#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
	int matrix[2][2];
    
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    
    VariadicTable<int, int> vt({"0", "1"}, 10);
    
//    for (int i = 0; i < 2; i++) {
//        
//        for (int j = 0; j < 2; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << "\n";
//    }

    vt.addRow(0, 1);
    
    vt.addRow(matrix[0][0], matrix[0][1]);
    vt.addRow(matrix[1][0], matrix[1][1]);
    
    vt.print(cout);
    
	return 0;
}

