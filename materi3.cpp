#include <iostream>
using namespace std;

double   p, l;

void masukan (){
    cout << "Masukan Panjangnya = ";
    cin >> p;
    cout << "Masukan Lebarnya = ";
    cin >> l;
}

double luas2(){
    return p*l;
}

double luas3(double a, double b){
    return a*b;
}

void luaran(){
    cout << "Luasnya = " << luas2();
}

void luaran2(){
    cout << "\nLuasnya = " << luas3(p,l);
}


int main(){
    masukan();
    luaran();
    luaran2();
}
