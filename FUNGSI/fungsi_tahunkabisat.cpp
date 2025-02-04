#include <iostream>
using namespace std;

void tahunKabisat (int tahun){
	cout << "Menghitung Tahun Kabisat" << endl << endl;        
    cout << "Masukkan Tahun : ";
    cin >> tahun;
	    
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
	   
    cout << "Tahun tersebut adalah Tahun Kabisat" << endl;
	} else {
	cout << "Tahun tersebut adalah Bukan Tahun Kabisat" << endl;
	}
}

int main () {
    //memanggil fungsi
    int tahun;

    tahunKabisat (tahun);
    
    return 0;
}