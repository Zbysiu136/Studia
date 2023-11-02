#include <iostream>

using namespace std;

int main(){
    string tekst;
    int len;
    bool ok = 1;

    cout <<  "Podaj tekst: ";
    cin >> tekst;

    cout << "Podaj dlugosc tekstu: ";
    cin >> len;
    
    for(int i=0; i<len/2; i++){
        //pętla przechhodzi do połowy pętli
        //jeżeli ilość znakow jest nieparzysta
        //itak długość będzie całkowita
        //ze względu na typ int wartość
        //zostanie zaokrąglona w dol
        if(tekst[i] != tekst[len-1-i]){
            //czy następny znak jest rowny
            //odpowiednikowi od konca
            //tablice sa indeksowane od 0
            ok = 0;
            //jezeli znajdzie się znak 
            //inny z dwoch stron wskaznik zostanie na 0
            break;
        }
    }

    if(ok == 1)
    cout << tekst << " jest palindromem";
    else
    cout << tekst << " nie jest palindromem";

    cin >> ok;

    return 0;
}