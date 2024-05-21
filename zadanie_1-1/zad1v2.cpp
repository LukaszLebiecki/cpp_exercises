#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    unsigned a, b, c;
    std::cout << "Podaj kolejne 3 liczby całkowite nieujemne: ";
    std::cin >> a >> b >> c;
    unsigned suma = a + b + c;
    unsigned maks = (a > b) ? a : b;
    suma -= maks = (maks > c) ? maks : c;
    while (maks--) {
        std::cout << suma << " ";
    }
    
}