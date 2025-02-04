#include <iostream>
using namespace std;
void bilfaktorial (int n){
    int faktorial = 1;
   for (int i = 1; i <= n; i++)
   faktorial = faktorial * i;
   cout << "Faktorial : " << n << "! = " << faktorial<< endl;
}
int main (){
    int n;
    cout << "Menghitung Bilangan Faktorial" << endl << endl;
    cout << "Masukkan Angka : ";
    cin >> n;
    bilfaktorial(n);
    
return 0;
}
