#include <iostream>
using namespace std;

void BMI (float tinggi, float berat){
    
    
    cout << "Menentukan BMI" << endl << endl;
    cout << "Masukkan berat (kg) : ";
    cin >> berat;
    cout << "Masukkan tinggi (m) : ";
    cin >> tinggi;
    cout << "kategori Badan : ";

    float bmi = berat / (tinggi*tinggi);
    
    if (bmi <= 18.5){
        cout << "Kurus";
    }else if (bmi >= 18.5 && bmi <= 24.9){
     cout << "Normal";
    }else if (bmi >= 25 && bmi <= 29.9){
        cout << "Gemuk";
    }else if (bmi >= 30){
        cout << "Obesitas";
    }
}
int main (){
  
    float berat;
    float tinggi;
    
    BMI (tinggi,berat);
}