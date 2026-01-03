#include <iostream>
using namespace std;

int main () {
    int panjang;
    int lebar;

    cout << "panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;

    int luas = panjang * lebar;

    cout << "luas: " << luas << endl;

    return 0;

}