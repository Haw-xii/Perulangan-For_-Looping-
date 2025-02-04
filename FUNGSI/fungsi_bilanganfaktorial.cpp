#include <iostream>
using namespace std;


int faktorial (int angka){
    
    if (angka == 0){
        return 0;
    } else if (angka > 1){
        return (angka * faktorial (angka-1));
    } else {
    return 1;
    }
}

int main () {
    //memanggil fungsi
    int angka;

    cout << "Menghitung Bilangan Faktorial" << endl << endl;
    cout << "Masukkan Angka : ";
    cin >> angka;
    cout << "Faktorial : " << angka << "! = " << faktorial (angka) << endl;
}
