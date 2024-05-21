#include <iostream>

int main() {
    float a1, a2, a3, a4, a5, result;

    std::cout << "Podaj a1: ";
    std::cin >> a1;

    std::cout << "Podaj a2: ";
    std::cin >> a2;

    std::cout << "Podaj a3: ";
    std::cin >> a3;

    std::cout << "Podaj a4: ";
    std::cin >> a4;

    std::cout << "Podaj a5: ";
    std::cin >> a5;

    if (a5 == 0) {
        std::cout << "Nie dziel przez 0!!!";
        return 0;
    }

    result = (((a1 + a2) * a3) - a4) / a5;

    std::cout << "wynik to: " << result;

}