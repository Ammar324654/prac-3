#include "Reverser.h"

// ReverseDigit method for calculating reversed number
int ReverseDigit::reverse(int value) {
    if (value < 0) {
        return -1; // Handle invalid input (negative number)
    }
    return reverseDigitHelper(value, 0);
}

// Helper method for ReverseDigit
int ReverseDigit::reverseDigitHelper(int value, int reversed) {
    if (value == 0) {
        return reversed;
    }
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

// ReverseString method for reversing a string
std::string ReverseString::reverse(std::string characters) {
    if (characters.empty()) {
        return "ERROR"; // Handle empty string case
    }
    return reverseStringHelper(characters, 0);
}

// Helper method for ReverseString
std::string ReverseString::reverseStringHelper(std::string characters, int index) {
    if (index == characters.length()) {
        return "";
    }
    return reverseStringHelper(characters, index + 1) + characters[index];
}

// Template method for Reverser class
template <typename T>
T Reverser::reverseInput(T input) {
    if constexpr (std::is_integral<T>::value) {
        ReverseDigit reverseDigitStrategy;
        return reverseDigitStrategy.reverse(input);
    } else if constexpr (std::is_same<T, std::string>::value) {
        ReverseString reverseStringStrategy;
        return reverseStringStrategy.reverse(input);
    }
    throw std::invalid_argument("Unsupported type for reversal");
}

// Explicit instantiations for the types we plan to use
template int Reverser::reverseInput<int>(int input);
template std::string Reverser::reverseInput<std::string>(std::string input);
