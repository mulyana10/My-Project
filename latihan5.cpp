#include <iostream>
using namespace std;

int main () {
    string nama_operator;
    float sensor_data;
    float voltase;

    cout << "nama operator: ";
    cin >> nama_operator;
    cout << "sensor data (0-1023): ";
    cin >> sensor_data;

    voltase = (sensor_data / 1023.0) * 12.0;

    cout << "laporan " << nama_operator << ":" << endl;
    cout << "tegangan saat ini: " << voltase << "volt" << endl;

    if (voltase < 10.5) {
        cout << "status bahaya mau modar!!!" << endl;
    } else {
        cout << "status aman bolo!" << endl;
    }

    return 0;

}