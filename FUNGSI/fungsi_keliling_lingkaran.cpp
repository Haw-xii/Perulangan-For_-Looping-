#include <iostream>
#include <cmath>
using namespace std;

void kelilingLingkaran (double r){
    
    cout << "Menghitung Keliling Lingkaran" << endl << endl;
    cout << "Masukkan Jari-jari Lingkaran : ";
    cin >> r;
        
    int kelilingLingkaran = 2 * M_E * r;
        
    cout << "Keliling Lingkaran : " << kelilingLingkaran << endl;
}

int main () {
    //memanggil fungsi
    double r;

    kelilingLingkaran (r);
    
    return 0;
}