#include <iostream>
#include <vector>

int main() {

    std::vector<int> cykl = {3, 1, 2, 1};

    for (int i = 0; i < 100; i++) {
        for (int c : cykl) {
        std::cout << c << " ";
        i++;
        }
    }
}