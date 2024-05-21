#include <iostream>

int main() {
    int number;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> number;

    if (number < 0 ) {
        number--;
    } else if (number > 0) {
        number++;
    }

    std::cout << number << std::endl;

    if (number % 2 == 0) {
        std::cout << "tak";
    } else {
        std::cout << "nie";
    }
    

}