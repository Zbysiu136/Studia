#include <iostream>

using namespace std;

int main(){
    int liczba;
    string bin = "";
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;
    
    int pow = 1;
    while(pow < liczba){ //wyszukuje najmniejszej potęgi
    //dwa mniejszej od podanej liczby
        pow = pow * 2;
    }

    for (int i=pow/2; i>=1; i=i/2){
        //pętla rozpoczynająca od największej potęgi dwojki
        //mniejszej od podanej liczby ponieważ to największa
        //liczba ktorą można "wcisnąć" w ciąg binarny
        
        if(liczba - i >= 0){
            liczba = liczba - i;
            bin = bin+"1";
            //jeżeli w potęgach dwa znajdzie się taka liczba
            //ktora mieści się w pozostałości liczby podanej
            //zapisujemy jej pozycje jako jednkę
        }
        else
        bin = bin+"0";
    }

    cout << bin;
    cin >> bin;

    return 0;

}