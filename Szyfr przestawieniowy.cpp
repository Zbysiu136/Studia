#include <iostream>

using namespace std;

string zamien(string tekst){
    char tmp;
    for(int i=0; i<tekst.length()-(tekst.length()%2)-1; i+=2){ //Pętlą nie uwzględnia ostatniego indeksu jeżeli ilość jest nieparzysta
        tmp = tekst[i+1]; //zamiana pozycji
        tekst[i+1] = tekst[i];
        tekst[i] = tmp;
    }

    return tekst;
}

int main(){


    string teskt;

    cout << "Podaj tekst do zaszyfrowania: ";
    //cin >> teskt;
    teskt = "PROGRAMOWANIE";
    cout << "\n Zaszyfrowany tekst: " << zamien(teskt);
    teskt = "PROGRAM";
    cout << "\n Zaszyfrowany tekst: " << zamien(teskt);
}