#include <iostream>

int main() {

    int numbers[5];

    std::cout << "Podaj piec cyfr" << std::endl;

    for(int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }

    if (numbers[0] < numbers[1] and  
        numbers[1] < numbers[2] and 
        numbers[2] < numbers[3] and 
        numbers[3] < numbers[4] ) {
            std::cout << "ciag liczb rosnocy";
        } else {
            std::cout << "losowe liczby";
        }
    
}