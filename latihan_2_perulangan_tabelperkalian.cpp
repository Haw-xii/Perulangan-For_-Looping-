#include <iostream>
using namespace std;

int main(){
int total =0; 

cout << "Menampilkan Tabel Perkalian 5 dari 1 X 5 sampai 10 X 5" << endl;
    for(int i = 1; i <= 10; i+=1){
        for(int j = 5; j <= 5; j+=5){
        cout << i << " x 5 " << " = " <<  i * j << endl;
    }
        cout << endl;
    }
    return 0;
}