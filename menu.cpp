#include <iostream>
#include <string>
using namespace std;

int main () {
    int pilihan;

    while (true) {
        cout << ">> MENU SATELIT <<" << endl;
        cout << ">> 1. CEK SUHU" << endl;
        cout << ">> 2. KELUAR" << endl;
        cout << "pilih angka: ";
        cin >> pilihan;


        if (pilihan == 1) {
            int raw_data;
            float suhu_asli;
            
            cout << "masukkan nilai sensor(0-1023): ";
            cin >> raw_data;
            
            suhu_asli = (raw_data / 1023.0) * 100.0;
            
            cout << "suhu saat ini adalah: " << suhu_asli << " derajat" << endl;
        }

        if (pilihan == 2) {
            cout << "ANDA KELUAR" << endl;
            break;
        }
    }

    return 0;
}