#include <iostream>
using namespace std;

int pokok(int jamKerja)
{
    return jamKerja * 7500;
}

int lembur(int jamKerja)
{
    int jamLembur = max(jamKerja - 8, 0);
    return jamLembur * 7500 * 1.5;
}

int makan(int jamKerja)
{
    if (jamKerja >= 9)
    {
        return 10000;
    }
    else
    {
        return 0;
    }
}

int transport(int jamKerja)
{
    if (jamKerja >= 10)
    {
        return 13000;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int jamKerja, jamLembur, gajiPokok, gajiLembur, uangMakan, uangTransport, totalGaji, nip;
    string nama;

    cout << "Masukan NIP              : ";
    cin >> nip;

    cout << "Masukan nama             : ";
    cin >> nama;

    cout << "Masukan jumlah jam kerja : ";
    cin >> jamKerja;

    gajiPokok = pokok(jamKerja);
    gajiLembur = lembur(jamKerja);
    uangMakan = makan(jamKerja);
    uangTransport = transport(jamKerja);
    totalGaji = gajiPokok + gajiLembur + uangMakan + uangTransport;


    cout << "\nRincian Gaji\n\n";
    cout << "NIP            : " << nip << endl;
    cout << "Nama           : " << nama << endl;
    cout << "Gaji Pokok     : Rp " << gajiPokok << endl;
    cout << "Gaji Lembur    : Rp " << gajiLembur << endl;
    cout << "Uang Makan     : Rp " << uangMakan << endl;
    cout << "Uang Transport : Rp " << uangTransport << endl << endl;
    cout << "Total Gaji     : Rp " << totalGaji << endl;


    return 0;
}
