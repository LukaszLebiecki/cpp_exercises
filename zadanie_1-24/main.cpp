#include <iostream>
#include <vector>


int main() {
    std::string samogloski = "aeyiuo";
    std::vector<char> znaki;
    char pomoc;

    do {
        std::cout << ": ";
        std::cin >> pomoc;

        bool jest = false;
        for (char e : samogloski) {
            if (e == pomoc) {
                jest = true;
                break;
            }
        }
        if (jest) {
            znaki.insert(znaki.begin(), pomoc);
        } else if (pomoc == '*' and znaki.size()) {
            znaki.erase(znaki.begin());
        } else if (pomoc == '#' and znaki.size()) {
            znaki.erase(znaki.end() - 1);
        } else {
            znaki.push_back(pomoc);
        }
        for (auto e : znaki) {
            std::cout << e;
        }
        std::cout << std::endl;
    } while (pomoc != '!');

}