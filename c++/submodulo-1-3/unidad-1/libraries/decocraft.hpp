/*
Decocraft library
Decore your code with cool lines :P

by: Kyb3r Cipher <kyb3rcipher.com>
*/
#ifndef DECOCRAFT_H
#define DECOCRAFT_H

#include <iostream>

class colors {
public:
    static std::ostream& cout;
};

std::ostream& colors::cout = std::cout;

void clean_screen() {
    colors::cout << "\033[2J\033[1;1H";
}

void decoration_hastagh() {
    colors::cout << "######################################################################\n";
}

void decoration_equal() {
    colors::cout << "======================================================================\n";
}

void decoration_hyphen() {
    colors::cout << "----------------------------------------------------------------------\n";
}

void decoration_asterik() {
    colors::cout << "**********************************************************************\n";
}

void decoration_tilde() {
    colors::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void decoration_dot() {
    colors::cout << "......................................................................\n";
}

#endif
