#include <iostream>
#include <vector>

int main() {
    int okrazenia = 13;
    std::vector<int> wagi;
    wagi.resize(okrazenia);
    wagi[0] = 1;
    wagi[1] = 1;

    for (int i = 2; i < okrazenia; i++) {
        wagi[i] = wagi[i-1] + wagi[i-2];
    }

    std::cout << wagi[okrazenia-1] << std::endl;

    for (auto e : wagi) {
        std::cout << e <<" ";
    }
}