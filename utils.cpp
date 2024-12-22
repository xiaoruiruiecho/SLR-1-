//
// Created by Rui on 24-12-22.
//

#include "utils.h"

void Decorate(int size) {
    rep(i, 0, size)
        std::cout << "--------";
    std::cout << endl;
}


bool IsLetter(char c) {
    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}


bool IsChar(char c) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
        case ',':
        case ':':
        case '(':
        case ')':
        case '^':
        case '<':
        case '>':
        case '=':
        case '&':
        case '|':
        case '!':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case Empty: // ε
            return true;

        default:
            if (c != ' ') {
                std::cout << "UnExpected Terminator " << c << " !" << endl;
                exit(0);
            }
            return false;
    }
}


bool IsDigit(char c) {
    return c >= '0' && c <= '9';
}
