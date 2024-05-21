#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers;
    int number;
    bool stop = false;
    int count = 0;

    while (!stop) {
        std::cin >> number;
        numbers.push_back(number);
        if (count >= 1 and numbers[count] == numbers[(count-1)]) {
            std::cout << "wprowadziles dwie takie same cyfry";
            stop = true;
        }

        count++;
    }
   
    

}