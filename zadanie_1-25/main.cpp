#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int num_1;
    int num_2;
    bool end = false;

    while (!end) {
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> num_1;
        v.push_back(num_1);
        std::cout << "Podaj druga liczbe: ";
        std::cin >> num_2;
        v.push_back(num_2);
        if ((num_1 * num_2) < 1000) {
            int result = num_1 * num_2;
            v.push_back(result);
        } else {
            end = true;
        }
    }

    for (int e : v) {
        std::cout << e << " ";
    }
    
}