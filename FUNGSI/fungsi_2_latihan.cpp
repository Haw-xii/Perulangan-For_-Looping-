#include <iostream>
using namespace std;

//membuat fungsi
void greet (string namaAnda, int umur){
    cout << "Halo! " << namaAnda << endl;
    cout << "Umur Anda : " << umur << " Tahun";
}

int main () {
    //memanggil fungsi
    string nama = "Maria Hawa Lulua salsabila";
    int umur = 21;

    greet (nama, umur);
    
    return 0;
}