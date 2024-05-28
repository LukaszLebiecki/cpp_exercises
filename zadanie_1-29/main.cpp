#include <iostream>
#include <vector>

int main() {
    
    std::vector<bool> dane = {1,0,0,0,0,0,0,1,1,0,1,1,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,0,1,0,0,1,1};

    std::cout << "Liczba dni: " << dane.size() << std::endl;

    int sukces = 0;
    for(bool dzien : dane) {
        if (dzien) {
            sukces++;
        }
    }

    std::cout << "dni sukcesu: " << sukces << std::endl;

    int okres5 = 0;
    int czas = 0;
    std::vector<int> poczatki;
    int dzien = 1;

    for (bool sukces : dane) {
        if (!sukces) {
            czas++;
        } else {
            if (czas >= 5) {
                okres5++;
                poczatki.push_back(dzien - czas);
            }
            czas = 0;
        }
        dzien++;
    }
    std::cout << "okresow 5dni bez diety bylo: " << okres5 << std::endl;

    std::cout << "Poczatkowe dni okresow to: ";
    for (auto start : poczatki) {
        std::cout << start << " ";
    }
}