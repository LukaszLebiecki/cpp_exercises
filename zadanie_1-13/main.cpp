#include <iostream>

int main() {
    int counter_display = 0;
    int counter_hide = 0;
    for (int i = 1; i <= 120; i++) {
        if (i % 11 == 0 and i % 5 == 0) {
            counter_hide++;
            continue;
        }
        counter_display++;
        std::cout << i << " ";
        
    }
    std::cout << "\nwyswietlono: " << counter_display << " liczb.\n";
    std::cout << "nie wyswietlono: " << counter_hide << " liczb.\n";
}