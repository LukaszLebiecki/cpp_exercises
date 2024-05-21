#include <iostream>

//1,2,2,3,3,3,4,4,4,4,5,5,5,5.....

int main() {
    int count = 1;

    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
            count++;
            if (count >= 101) {
            break;
        }
        }
        if (count >= 101) {
            break;
        }
    }
}