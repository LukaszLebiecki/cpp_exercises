#include <iostream>
#include <ctime>

using namespace std;

string wylosowany_napis() {

    string litery = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    char znak;
    int ile = 0;
    string result;

    do {
        znak = litery[rand() % litery.size()];
        result += znak;
        ile++;
    } while (znak != 'z' and znak != 'A');
    cout << ile << endl;
    return result;
}

int main() {
    srand(time(0));
    string napis = wylosowany_napis();
    cout << napis;
}