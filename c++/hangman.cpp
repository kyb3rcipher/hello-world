/*
The classic Hangman game.

by: Kyb3r Cipher <kyb3rcipher.com>
*/
#include <iostream>
#include <vector>
#include "libs/decocraft.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    int option;
    string secretWord, secretWordLower, secretWordUpper;
    int wordSize;
    int counter = 0;
    char letter;
    bool found = false;
    int discovered = 0;
    
    string hangman[6];
    hangman[0] = "    +---+\n    |   |\n        |\n        |\n        |\n        |\n  ========\n";
    hangman[1] = "    +---+\n    |   |\n    O   |\n        |\n        |\n        |\n  ========\n";
    hangman[2] = "    +---+\n    |   |\n    O   |\n    |   |\n        |\n        |\n  ========\n";
    hangman[3] = "    +---+\n    |   |\n    O   |\n   /|   |\n        |\n        |\n  ========\n";
    hangman[4] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n        |\n        |\n  ========\n";
    hangman[5] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n        |\n        |\n  ========\n";
    hangman[6] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n   / \\  |\n        |\n  ========\n";
    
    // Menu
    decoration_equal();
    cout << "                                 HANGMAN GAME";
    cout << "\n                               by: Kyb3r Cipher";
    cout << "\n"; decoration_equal();
    cout << "\n 1. Start";
    cout << "\n 2. Show rules";
    cout << "\n 3. Exit";
    cout << "\n>> ";
    cin >> option;
    
    switch (option) {
        case 1: {
            cout << "Tell me the secret word: ";
            cin >> secretWord;
            wordSize = secretWord.length();
            vector<char> carac(wordSize, '_');

            // Convert the secret word to lowercases and capitals
            string secretWordUpper(wordSize, ' ');
            string secretWordLower(wordSize, ' ');
            for (int i = 0; i < wordSize; i++) {
                secretWordUpper[i] = toupper(secretWord[i]);
                secretWordLower[i] = tolower(secretWord[i]);
            }

            for (int i = 0; i <= 6; i++) {
                system("cls");

                decoration_asterik();
                cout << "You have " << 6 - counter << "/6 attempts left" << endl;
                cout << hangman[counter] << endl;
                cout << "Word: ";
                for (int i = 0; i < wordSize; i++)
                    cout << "" << carac[i] << " ";
                cout << "\n";
                decoration_asterik();
                cout << "Letter: ";
                cin >> letter;

                for (int j = 0; j < wordSize; j++) {
                    if (letter == secretWord[j] || letter == secretWordUpper[j] || letter == secretWordLower[j]) {
                        found = true;
                        carac[j] = secretWord[j];
                        discovered += 1;
                        break;
                    }
                }
                counter += (!found) ? 1 : 0;

                if (discovered == wordSize)
                    break;
            }

            if (discovered == wordSize) {
                // Winner screen
                system("cls");
                decoration_equal();
                cout << "                                 YOU WIN!!!";
                cout << "\n"; decoration_equal();
            } else {
                // Loser screen
                system("cls");
                decoration_equal();
                cout << "                                 GAME OVER";
                cout << "\n"; decoration_equal();
            }
            break;
        }
        
        case 2:
            cout << "RULES:"
                << "\n Only place one character per try.";
            break;
        
        case 3:
            cout << "Exiting...";
            break;
        
        default:
            cout << "ERROR: Invalid option!!!";
            break;

    }

    return 0;
}
