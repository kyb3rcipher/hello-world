/*
Fibbonaci sequense
*/
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int terms, old_number = 0, next_number = 1, count = 0, fibbonaci_number;

    // Ask for the terms numbers and set to terms variable
    cout << "How many terms?: ";
    cin >> terms;

    // If terms number are 0 not show sequense (bcs: 0 is the non-existence of quantity[or of terms])
    if (terms == 0) {
        cout << "Write a positivive integer more than 0" << endl;
    // If terms are 1 just show the first numbers (bcs: you only want one terms[or one number])
    } else if (terms == 1) {
        cout << old_number << endl;
    } // If you want more than 1 term
    else {
        // Execute and write the fibbonaci secuence while the i variable[counter] is less than the number of terms requested
        while (count < terms) {
            // Print old_number[the first time are 0]
            cout << old_number << endl;
            // Calculate next fibbonaci number like: old_numer + next_number
            fibbonaci_number = old_number + next_number;

            // Redefine old and next number
            old_number = next_number;    // old_number now is next_number
            next_number = fibbonaci_number;   // next_number now is the next fibbonaci number (calculate by: fibbonaci_number)
            count++;
        }
    }

    return 0;
}