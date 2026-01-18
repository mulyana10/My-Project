#include <iostream>
#include <string>
using namespace std;

int main () {
    string password_asli = "ciumdulu";
    string input_user;
    int kesempatan = 3;
    bool status_berhasil = false;

    while (kesempatan > 0) {
         cout << "password: ";
        cin >> input_user;

    if (input_user == password_asli) {
        cout << "berhasil masuk" << endl;
        status_berhasil = true;
        break;
    } else {
        cout << "salah ulangi" << endl;
        kesempatan = kesempatan -1;
    }

    }

    if (status_berhasil == false) {
        cout << "akses ditolak" << endl;
    }
    return 0;
}