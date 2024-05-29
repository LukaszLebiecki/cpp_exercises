#include <iostream>
#include <vector>

using namespace std;

int main() {
    float a = 4.0;
    float b = 5.0;
    float c = 3.0;

    if ((a*a + b*b) == (c*c)) {
        cout << "zmienne moga utworzyc trojkat";
    } else if ((a*a + c*c) == (b*b)) {
        cout << "zmienne moga utworzyc trojkat";
    } else if ((c*c + b*b) == (a*a)) {
        cout << "zmienne moga utworzyc trojkat";
    } else {
        cout << "nie da sie!";
    }
}
