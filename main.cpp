#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"

int main() {
    // Truckloads example
    int numCrates = 14;
    int loadSize = 3;
    Truckloads t;
    std::cout << "Number of trucks required: " << t.numTrucks(numCrates, loadSize) << std::endl;

    // Reverser example for reversing digits
    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    std::cout << "Reversed number 2: " << r.reverseDigit(223432) << std::endl;

    // Reversing a string
    std::string reversedString = r.reverseString("Ammar");
    std::cout << "Reversed string: " << reversedString << std::endl;
}
