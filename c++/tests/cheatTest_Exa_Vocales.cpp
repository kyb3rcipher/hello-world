#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char caracteres;
	
	cout << "Dime tu caracter: ";
	cin >> noskipws >> caracteres;
	
	if (caracteres == 'a' or caracteres == 'e' or caracteres == 'i' or caracteres == 'o' or caracteres == 'u') {
		cout << "VOCAL" << endl;
	} else if (caracteres == ' ') {
        cout << "ERROR: Introduciste un espacio" << endl;
        return 1;
    } else {
		cout << "NO VOCAL" << endl;
	}
	
	//else if (caracteres == '') {
	//	cout << "ERROR: Introduciste un espacio" << endl;
	//	return 1;
	return 0;
}

