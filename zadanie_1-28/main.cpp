#include <iostream>
#include <vector>


int main() {
    std::vector<char> cyfry;
    char znak;
    int x;

    do {
        std::cout << ": ";
        std::cin >> znak;
        if (znak >= 48 and znak <= (48+9)) {
            cyfry.push_back(znak);
            std::cout << "dodano znak" << std::endl;
        } else {
            std::cout << "ignoruj znak" << std::endl;
        }
    } while (cyfry.size() < 5);

    for (int i = cyfry.size() -1, podstawa = 1; i >= 0; i--, podstawa *= 10) {
        x += (cyfry[i] - 48) * podstawa;
    }
    std::cout << x;

}