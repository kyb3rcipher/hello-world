/*
The classic Hangman game.

by: Kyb3r Cipher <kyb3rcipher.com>
*/
#include <iostream>
#include <vector>
#include <cstring>
#include "libs/decocraft.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    int option;
    string secretWord, secretWordLower, secretWordUpper;
    int wordSize;
    int counter = 0;
    char letter[2];
    bool found;
    int discovered = 0;
    
    string hangman[9];
    hangman[0] = "    +---+\n    |   |\n        |\n        |\n        |\n        |\n  ========\n";
    hangman[1] = "    +---+\n    |   |\n    O   |\n        |\n        |\n        |\n  ========\n";
    hangman[2] = "    +---+\n    |   |\n    O   |\n    |   |\n        |\n        |\n  ========\n";
    hangman[3] = "    +---+\n    |   |\n    O   |\n   /|   |\n        |\n        |\n  ========\n";
    hangman[4] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n        |\n        |\n  ========\n";
    hangman[5] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n        |\n        |\n  ========\n";
    hangman[6] = "    +---+\n    |   |\n    O   |\n   /|\\  |\n   / \\  |\n        |\n  ========\n";
    hangman[7] = "         o\n                                       /|\\\n                                        |\n                                       / \\";
    hangman[8] = "    +---+\n                                   |   |\n                                   O   |\n                                  /|\\  |\n                                  / \\  |\n                                       |\n                                 ========\n";
        
    
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

            while (counter < 7 && discovered < wordSize) {
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
                while (strlen(letter) > 1) {
                    cout << "Cheater: You wrote more than one letter!!!, do it again: ";
                    cin >> letter;
                    continue;
                }

                found = false;
                for (int j = 0; j < wordSize; j++) {
                    if (letter[0] == secretWord[j] || letter[0] == secretWordUpper[j] || letter[0] == secretWordLower[j]) {
                        found = true;
                        carac[j] = secretWord[j];
                        discovered += 1;
                        break;
                    }
                }
                counter += (!found) ? 1 : 0;
            }

            if (discovered == wordSize) {
                // Winner screen
                system("cls");
                decoration_equal();
                cout << "                               VICTORY, YOU WIN!!!" << endl;
                cout << "                               " << hangman[7] << endl;
                decoration_equal();
            } else {
                // Loser screen
                system("cls");
                decoration_equal();
                cout << "                                 GAME OVER" << endl;
                cout << "                               " << hangman[8] << endl;
                decoration_equal();
            }

            break;
        }
        
        case 2:
            cout << "\nRULES:" << endl;
            cout << "=========" << endl;
            cout << "Welcome to Hangman, the classic word-guessing game!" << endl;
            cout << "The rules are simple:" << endl;
            cout << "1. You will be given a secret word, and your goal is to guess the word letter by letter." << endl;
            cout << "2. You have 6 attempts to guess the word correctly." << endl;
            cout << "3. Each time you enter a letter, we will check if it is present in the secret word." << endl;
            cout << "4. If the letter is correct, it will be revealed in the word." << endl;
            cout << "5. If the letter is incorrect, a part of the hangman's body will be drawn." << endl;
            cout << "6. The game continues until you guess the word or run out of attempts." << endl;
            cout << "7. If you guess the word correctly, you win! If not, it's game over.";

            break;
        
        case 3:
            cout << "Exiting...";
            break;
        
        default:
            cout << "ERROR: Invalid option!!!";
            return 1;

    }

    return 0;
}
