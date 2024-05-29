#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x = {1,2,3,2,5,6,9,1,3,7,5,8,3,6,8,4,7,8,5,3,5,7,9,0,9,6,5,3,2,2,4,6,7,8,6,1,1,4,3,7,0,4,2};


    for (int i = 0; i < x.size(); i++) {
        int suma = 0;
        for (int dl = 0; i + dl < x.size(); dl++) {
            suma += x[i + dl];
            if (suma == 10) {
                cout << "podciag: ";
                for (int j = i; j <= i + dl; j++) {
                    cout << x[j] << " ";
                }
            } else if (suma > 10) {
            break;
            }
        }
    }
}