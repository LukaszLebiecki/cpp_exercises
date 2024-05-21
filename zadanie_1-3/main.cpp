#include <iostream>

int main() {
    int a;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;

    if (a % 3 != 0 and a % 5 != 0) {
        std::cout << "niepodzielna przez 3 ani przez 5\n";
    } else if (a % 3 == 0 and a % 5 != 0) {
        std::cout << "podzielna przez 3 ale nie przez 5\n";
    } else if (a % 3 == 0 and a % 5 != 0) {
        std::cout << "podzielna przez 5 ale nie przez 3\n";
    } else {
        std::cout << "podzielna przez 3 i przez 5\n";
    }

}