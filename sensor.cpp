#include <iostream>
#include <string>
using namespace std;

int main () {
    int raw_data;
    float suhu_asli;

    cout << "masukkan nilai sensor(0-1023): ";
    cin >> raw_data;

    suhu_asli = (raw_data / 1023.0) * 100.0;

    cout << "suhu saat ini adalah: " << suhu_asli << " derajat" << endl;

    return 0;

}