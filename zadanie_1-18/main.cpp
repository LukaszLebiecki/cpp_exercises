#include <iostream>

int main() {
    int number = 0;

    while (number < 1 or number > 10)
    {
        std::cout << "Wpisz cyfre: ";
        std::cin >> number;
        std::cout << number*2 << std::endl;
    }
    
}