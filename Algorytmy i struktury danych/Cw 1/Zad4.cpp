#include <iostream>
using namespace std;

int main(){
    int n, a, wynik;
    
    cout << "Wprowadz n \n";
    cin >> n; 
    cout << "Wprowadz a \n";
    cin >> a;

    wynik = a;

    while (n > 1){ //pętla wynokuje mnożenie początkowo sumy
    //rownej podanej przez użytkownika ktora jest mnozona przez 
    //wartosc uzytkownika n razy

        wynik = wynik * a; 
        n = n - 1; 
    }

    cout << "Wynik to ";
    cout << wynik; 

    cin >> wynik;

    return 0;
}













