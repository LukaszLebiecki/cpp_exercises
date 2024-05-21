#include <iostream>
#include <vector>

void view(std::vector<int> v) {
    std::cout<< std::endl << "print: " << std::endl;
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
}

int main() {
    std::vector<int> numbers {2, 4, 12, 15, 6, 8, 13, 67, 22, 10};
    std::vector<int> results;
    int count = 1;

   

    for (int i=0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            results.insert(results.begin(), numbers[i]);
        } else {
            results.push_back(numbers[i]);
        }

    };
    
    view(numbers);
    view(results);
    

    
}