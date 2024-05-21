#include <iostream>
#include <vector>

int main() {
    std::vector<int> number = {0, 0, 0, 0, 0};
    unsigned int even_number = 0;
    unsigned int odd_number = 0;

    std::cout << "Podaj piec cyfr: ";
    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];

    for (int i = 0; i < 5; i++) {
        if (number[i] % 2 == 0) {
            even_number++;
        } else {
            odd_number++;
        }
    }

    std::cout << "Liczb parzystych jest: " << even_number << std::endl 
              << "Liczb nieparzystch jest: " << odd_number;
}