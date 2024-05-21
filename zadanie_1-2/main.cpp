#include <iostream>

int main() {
    int number;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> number;

    if ( number % 2 == 0) {
        std::cout << "Liczba jest przysta";
    } else {
        std::cout << "Liczba jest nieparzysta";
    }
}