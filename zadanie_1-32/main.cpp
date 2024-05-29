#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x = {2,7,1,1,4,9,3,2,4,2,6,9,4,2,5,3,1,5,7,8,3,4,6,7,9,3,9,3,3,1,9,9};
    vector<int> result;
    int count = 0;

    for (int i = 0; i < x.size(); i++) {
        if (x[i] != 9) {
            count++;
        } else {
            result.push_back(count);
            count = 0;
        }
    }

    for (auto e : result) {
        cout << e << " ";
    }

}