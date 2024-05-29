#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x = {2,2,7,1,1,4,9,2,3,5,5,8,4,3,5,8,9,6,6,4,1,9,3,5,2,1,1,1,3,5,6,2,8};
    int a = 0;
    int b = 0;

    for (int i = 1; i < x.size(); i++) {
        if (x[i] == x[i-1]) {
            a++;
        }
        if ((x[i] + x[i-1]) == 10) {
            b++;
        }
    }

    cout << "a: " << a << endl << "b: " << b;

}