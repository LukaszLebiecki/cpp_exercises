#include <iostream>
#include <vector>

bool exist (int n, std::vector<int> v) {
    for (int i = 0; i < v.size(); i++){
        if (v[i] == n) {
            return true;
        }
    }
    return false;
}

int main() {
    
    std::vector<int> numbers;
    int number;
    int count = 0;
    do {
        std::cin >> number;
        if (exist(number, numbers)){
            break;
        }
        numbers.push_back(number);
        count++;

    } while (count < 10);
    
}