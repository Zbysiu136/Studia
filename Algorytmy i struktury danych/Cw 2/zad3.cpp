#include <iostream>

using namespace std;

int main(){
    int bin;

    cout << "Podaj liczbe binarna: ";
    cin >> bin;

    int n = 1;
    int dec = 0;
    while(bin > 0){
        if (bin % 10 == 1){ 
            //warunek sprawdza czy ostatni
            //bit wartości to jedne,
            //wynikiem reszty dzielenia przez 10
            dec = dec + n;
            //jezeli bit jest rowny jeden
            //dodaje do sumy wielokrotność dwa
            //odpowiadającą ważności bita
        }

        bin = bin / 10;
        n = n * 2;
    }

    cout << "Wartosc dziesietna to " << dec;
    cin >> dec;
    return 0;

}

