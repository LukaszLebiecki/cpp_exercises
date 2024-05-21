#include <iostream>

int main() {
    int number1 = 6;
    int number2 = 2;
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            std::cout << number1 << " ";
            number1 = number1 + 2;
        } else {
            std::cout << number2++ << " ";
        }
    }
}