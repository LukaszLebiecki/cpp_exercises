#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 4, 3, 6, 8, 7, 7, 8, 3, 4, 5, 6, 7, 1, 3, 9, 1, 0, 4, 2, 3, 6, 9};
    //--------------
    for (size_t i = 0; i < v.size() - 2; i++) {
        if (v[i] <= v[i+1] and v[i+1] <= v[i+2]) {
            std::cout << v[i] << " " << v[i+1] << " " << v[i+2] << std::endl;
        }
    }

    int start = 0;
    int pozm = 0;
    int dl = 1;
    int dlm = 0;
    //--------------
    for (size_t poz = 0; poz < v.size() - 1; poz++) {
        if (v[poz] <= v[poz + 1]) {
            if (dl == 1) {
                start = poz;
            }
            dl++;
            if (dlm < dl) {
                dlm = dl;
                pozm = start;
            }
        } else {
            dl = 1;
        }
    }
    std::cout << "Najdluzszy podciag ";
    for (int i = pozm; i < pozm + dlm; i++) {
        std::cout << v[i] << ",";
    }
    std::cout << " zaczyna sie na pozycji " << pozm << " i ma dlugosc " << dlm << std::endl;
    //---------------
    std::vector<int> licznik;
    licznik.resize(10, 0);
    std::cout << std::endl;
    for (auto e : licznik) {
        std::cout << e << ",";
    }
    std::cout << std::endl;
    for (auto e : v) {
        licznik[e]++;
    }
    for (auto e : licznik) {
        std::cout << e << ",";
    }
    std::cout << std::endl;
    for (int poz = 0; poz < licznik.size(); poz++) {
        std::cout << "Liczba " << poz << " wystapien " << licznik[poz] << std::endl;
    }
}