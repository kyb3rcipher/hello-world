#include <iostream>
using namespace std;

int main(...) {
    for (int i = 1; i <= 10; i++) {
        if (i == 9) {
            continue;
        }
        cout << i << endl;
    }

    switch (3) {
        case 1: cout << "One";
        case 2: cout << "Two";
        case 3: cout << "Three";    // continue cuz there is no break here
        case 4: cout << "Four"; break;
        case 5: cout << "Five"; break;
    }
    return 0;
}
