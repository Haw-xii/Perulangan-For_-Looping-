#include <iostream>
using namespace std;

void luasPersegiPanjang (double panjang, double lebar){
    
    cout << "Panjang   : " << panjang << endl;
    cout << "Lebar : " << lebar << endl;
    
    int luasPersegiPanjang = panjang * lebar;
    int keliling = 2 * (panjang+lebar);
    cout << "Luas Persegi Panjang : " << luasPersegiPanjang << endl;
    cout << "Keliling Persegi Panjang : " << keliling;
}

int main () {
    //memanggil fungsi
    double panjang = 15;
    double lebar= 30;
    
    luasPersegiPanjang(panjang,lebar);
    
    return 0;
}