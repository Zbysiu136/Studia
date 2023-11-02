#include <iostream>

using namespace std;

int main(){
    int n;
    int suma = 0;
    cout << "Wprowadz n: ";
    cin >> n;

    for (int i=1; i<n; i++){ //pętla przerowadzająca
    //przez wszystkie liczby od 1 do n-1
        if(n % i == 0)
        //gdy reszta z dzielenia =0 to n jest podzielne prez i
            suma = suma + i;
   
    }

    if(n == suma)
    cout << "Liczba " << n << " jest liczba doskonala";

    else
    cout << "Liczba " << n << " nie jest liczba doskonala";

    cin >> n;

    return 0;

}