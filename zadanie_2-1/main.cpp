#include <iostream>
#include <vector>

using namespace std;

int main() {
    string samogloski = {'e','y','u','i','o','a'};
    string imie = "lukasz";
    int count = 0;

    for(int i = 0; i < imie.size(); i++) {
        if (samogloski.find(imie[i]) != string::npos) {
            count++;
        }
    }
    
    for (int i = 0; i < count; i++) {
        cout << imie << " ";
    }
    
}