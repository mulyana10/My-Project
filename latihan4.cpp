#include <iostream>
using namespace std;

int main () {
    int alas;
    int tinggi;

    cout << "alas: ";
    cin >> alas;
    cout << "tinggi: ";
    cin >> tinggi;

    int luas = 1/2 * alas * tinggi;

    cout << luas << endl;

    return 0;
}