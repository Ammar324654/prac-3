#include "Reverser.h"
#include <iostream>

using namespace std;

Reverser::Reverser() {}

Reverser::~Reverser() {}

int Reverser::reverseDigit(int value, int acc) {
    if (value == 0) {
        return acc;
    } 
    if (value < 0) {
        return -1;
    }
    acc = acc * 10 + value % 10;
    return reverseDigit(value / 10, acc);
}

int Reverser::reverseDigit(int value) {
    return reverseDigit(value, 0);
}

string Reverser::reverseString(string characters, string acc) {
    if (characters.empty()) {
        return acc;
    }
    if (characters.empty() && acc.empty()) {
        return "ERROR";
    }
    acc = characters[0] + acc;
    return reverseString(characters.substr(1), acc);
}

string Reverser::reverseString(string characters) {
    return reverseString(characters, "");
}
