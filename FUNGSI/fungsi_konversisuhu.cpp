#include <iostream>
using namespace std;

void suhukonversi (float celcius, float fahrenheit){
    cout << "Menghitung Suhu Konversi" << endl << endl;
    cout << "Masukkan suhu dalam derajat Fahrenheit : ";
    cin >> fahrenheit;
    cout << "Masukkan suhu dalam derajat Celcius : ";
    cin >> celcius;
    
    celcius = (fahrenheit * 5/9) - 32;
    fahrenheit = (celcius * 9 / 5) + 32;

    cout << "Suhu Dalam Celcius adalah : " << celcius << " C" << endl;
    cout << "Suhu Dalam Farhenheit adalah : " << fahrenheit <<  " F" << endl;
}

int main () {
    //memanggil fungsi
    float celcius;
    float fahrenheit;

    suhukonversi (celcius, fahrenheit);
    
    return 0;
}