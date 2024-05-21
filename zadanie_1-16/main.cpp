#include <iostream>

int main() {
    int number = 100;
    for (int i = 1; i <= 100; i++) {
        std::cout << number << " ";
        number = number - i;
    }
}