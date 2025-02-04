#include <iostream>
#include <cmath>
using namespace std;

void luasSegitiga (double alas, double tinggi){
    
    cout << "Alas   : " << alas << endl;
    cout << "Tinggi : " << tinggi << endl;
    
    int luasSegitiga = 0.5 * alas * tinggi;
    cout << "Luas Segitiga : " << luasSegitiga;
}

int main () {
    //memanggil fungsi
    double alas = 10;
    double tinggi = 20;
    
    luasSegitiga (alas,tinggi);
    
    return 0;
}