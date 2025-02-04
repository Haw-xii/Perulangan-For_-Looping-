#include <iostream>
using namespace std;

void predikat (double nilai){
    cout<<"Menentukan Predikat Nilai Raport"<<endl<<endl;
    cout<<"Masukkan Nilai: ";
    cin>>nilai;
    cout<<"Predikat yang didapat: ";

if(nilai>=85){
    cout<<"A";
}else if(nilai>=75&&nilai<=84){
    cout<<"B";
}else if(nilai>=55&&nilai<=69){
    cout<<"C";
}else if(nilai>=40&&nilai<=54){
    cout<<"D";
}else{
    cout<<"D";
}
}
int main() {
    double nilai;
    
    predikat(nilai);
    return 0;
}