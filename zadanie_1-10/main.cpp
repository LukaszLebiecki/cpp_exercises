#include <iostream>

int main(){
    for (int i = 0; i < 100; i++) {
        std::cout << i + 1  << " "; 
    }

    std::cout << std::endl;

    int i = 1;

    while (i != 101)
    {
        std::cout << i++ << " ";

    }
    
}