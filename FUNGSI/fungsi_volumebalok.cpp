#include <iostream>
#include <cmath>
using namespace std;

void volumeBalok (double panjang, double lebar, double tinggi){
    
    cout << "Menghitung Volume Balok" << endl << endl;
    cout << "Masukkan Panjang Balok : ";
    cin >> panjang;
    cout << "Masukkan Lebar Balok : ";
    cin >> lebar;
    cout << "Masukkan Tinggi Balok : ";
    cin >> tinggi;
        
    int volumeBalok = panjang * lebar * tinggi;
        
    cout << "Volume Balok : " << volumeBalok << endl;
}

int main () {
    //memanggil fungsi
    double panjang;
    double lebar;
    double tinggi;

    volumeBalok (panjang, lebar, tinggi);
    
    return 0;
}