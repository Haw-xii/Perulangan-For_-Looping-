#include <iostream>
using namespace std;

int main () {
 cout << "Menampilkan Bilangan Ganjil 1 sampai 15" << endl ;
 for(int i = 1; i <= 15; i++){
     if (i % 2 != 0 )
     cout << i << endl;
 }
    return 0;
}