#include <iostream>
using namespace std;

int main() 
{
   string nama;
   string nrp;
   string jurusan;

   cout << "masukkan nama: ";
   getline (cin, nama);
   cout << "masukkan nrp: ";
   cin >> nrp;
   cout << "masukkan jurusan: ";
   cin >> jurusan;

   cout << "halo, " << nama << ". Nrp kamu " << nrp << ". Jurusan kamu " << jurusan;
    return 0;
}