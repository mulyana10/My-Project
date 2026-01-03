#include <iostream>


int main ()
{
    std::string nama_operator;
    std::cout << "masukkan nama operator: ";
    std::getline (std::cin, nama_operator);

    float data_mentah;
    std::cout << "halo, " << nama_operator << " masukkan data sensor (0-1023): ";
    std::cin >> data_mentah;

    float voltase = (data_mentah / 1023.0) * 5.0;

    std::cout << "-----------------------------" << std::endl;
    std::cout << "hasil analisa telemetri: " << std::endl;
    std::cout << ">> input sensor: " << data_mentah << std::endl;
    std::cout << ">> tegangan: " << voltase << std::endl;

    if (voltase < 3.0) 
    {
    std::cout << ">> status: critical! baterai habis!!!!" << std::endl;
    std::cout << ">> rekomendasi: matikan kamera segera!!!!" << std::endl;
    }
    else
    {
    std::cout << ">> status: normal" << std::endl;
    }
    std::cout << "------------------------------" << std::endl;

    return 0;
}