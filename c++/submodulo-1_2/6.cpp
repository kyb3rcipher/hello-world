#include <iostream>
using namespace std;

int main() {
    int year, born, age;
    cout << "Tell me the year you were born: ";
    cin >> born;
    cout << "Tell me the current year: ";
    cin >> year;
    age = year - born;
    cout << "Your age is: " << age << endl;
    return 0;
}
