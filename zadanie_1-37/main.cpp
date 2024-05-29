#include <iostream>

using namespace std;

int main() {
    float A = 3.5;
    int B = 7;
    float result;

    for(int i = 0; i < 7; i++) {
        result += A;
    }

    cout << "result petli for: " << result << endl;
    cout << "mnozenie: " << A*B;
}