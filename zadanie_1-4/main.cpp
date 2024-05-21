#include <iostream>
#include <vector>

int main() {

    char znak;
    std::cin >> znak;
    std::vector<char> samogloski = {'a', 'e', 'i', 'o', 'u', 'y'};

    if (znak >= 48 and znak <= 48 + 9) {
        std::cout << "Znak to cyfra \n";
        return 0;
    }

    bool samogloska = false;
    for (auto s : samogloski) {
        if (znak == s) {
            samogloska = true;
            break;
        }
    }

    if (samogloska) {
        std::cout << "Znak to samogloska. \n";
    } else {
        std::cout << "Znak to spolgloska. \n";
    }

    
    
}