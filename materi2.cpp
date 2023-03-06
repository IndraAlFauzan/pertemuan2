#include <iostream>
using namespace std;

double  Ls, p, l;

void masukan (){
    cout << "Masukan Panjangnya = ";
    cin >> p;
    cout << "Masukan Lebarnya = ";
    cin >> l;
}

void luas(){
    Ls = p*l;
}

void luaran(){
    cout << "Luasnya = " << Ls;
}


int main(){
    masukan();
    luas();
    luaran();
}
