#include <iostream>

using namespace std;

int main(){
    int liczba;
    bool ok = 1;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    for(int i=2; i<liczba/2; i++){
        if(liczba % i == 0)
            ok = 0;
            break;
    }

    if (ok == 1)
        cout << "liczba " << liczba << " jest liczba pierwsza";
    else 
        cout << "liczba " << liczba << " nie jest liczba pierwsza";

    cin >> ok;
    return 0;
}