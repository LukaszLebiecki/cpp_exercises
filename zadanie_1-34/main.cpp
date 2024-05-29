#include <iostream>
#include <vector>

using namespace std;

int main() {
    char znak;
    int sum;
    bool end = false;

    do {
        cout << ": ";
        cin >> znak;
        if (znak >= 48 and znak <= 90) {
            sum += znak;
            cout << "suma: " << sum << endl;
        } else {
            cout << "ignoruje..." << endl;
        }
        if (sum > 350) {
            end = true;
        }

    } while (!end);

    
   

}