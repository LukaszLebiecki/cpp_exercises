#include <iostream>

int main() {
    char znak;
    unsigned ile = 0;

    do {
        std::cout << "Podaj znak: ";
        std::cin >> znak;
        ile++;
    } while (znak != 'x');

    std::cout << "Pobrano " << ile << " znakow.\n";

}