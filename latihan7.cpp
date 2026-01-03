#include <iostream>
#include <string>
using namespace std;

int main () {
    string nama_operator;
    float data;
    float voltase;

    while (true) {
        cout << "nama operator: ";
        cin >> nama_operator;
        cout << "data (0-1023): ";
        cin >> data;

        voltase = (data / 1023.0) * 12.0;

        cout << "info " << nama_operator << endl;
        cout << "tegangan: " << voltase << endl;

        if (voltase < 10.5) {
            cout << "warning! awas!!!" << endl;
        } else {
            cout << "aman" << endl;
        }
        
    }

    return 0;
}