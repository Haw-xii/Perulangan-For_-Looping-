#include <iostream>
using namespace std;

int main () {
 cout << "Menampilkan Bilangan Genap 2 sampai 20" << endl ;
 for(int i = 2; i <= 20; i++){
     if (i % 2 == 0 )
     cout << i << endl;
 }
    return 0;
}