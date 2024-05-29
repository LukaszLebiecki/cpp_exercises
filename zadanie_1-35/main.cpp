#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x = {3,4,6,2,7,4,2,7,6,5};
    while (x.size()) {
        cout << x.front() << " ";
        x.front() = x.back();
        x.pop_back();
    }
    
}