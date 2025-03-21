#ifndef REVERSER_H
#define REVERSER_H

#include <string>

// Abstract class defining the reverse strategy
template <typename T>
class ReverseStrategy {
public:
    virtual T reverse(T input) = 0;
    virtual ~ReverseStrategy() = default;
};

// Reverser for digits (integers)
class ReverseDigit : public ReverseStrategy<int> {
public:
    int reverse(int value) override;
private:
    int reverseDigitHelper(int value, int reversed);
};

// Reverser for strings
class ReverseString : public ReverseStrategy<std::string> {
public:
    std::string reverse(std::string characters) override;
private:
    std::string reverseStringHelper(std::string characters, int index);
};

// Reverser class that uses a reverse strategy
class Reverser {
public:
    template <typename T>
    T reverseInput(T input);
};

#endif // REVERSER_H
