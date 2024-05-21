#include <iostream>

int main() {
    setlocale(LC_ALL, "");

    unsigned a, b, c;
    unsigned suma = 0, maks;

    std::cout << "Podaj kolejne 3 liczby całkowite nieujemne: ";
    std::cin >> a >> b >> c;

    if (a > b) {
        maks = a;
        suma += b;
    }
    else {
        maks = b;
        suma += a;
    }
    
    if (maks > c) {
        suma += c;
    }
    else {
        suma += maks;
        maks = c;
    }

    for (unsigned i = 0; i < maks; i++) {
        std::cout << suma << " ";
    }
}