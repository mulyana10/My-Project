#include <iostream>
#include <string>
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

    cout << "lapor ketua " << nama_operator << endl;
    cout << "hasil tegangan: " << voltase << endl;

    if (voltase < 10.5){
        cout << "bahaya ketua!!!";
    } else {
        cout << "aman ketua";
    }

    return 0;
}