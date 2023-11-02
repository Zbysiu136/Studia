#include <iostream>

using namespace std;

int main(){
    int a, suma;

    cout << "Wprowadz a \n";
    cin >> a; 

    suma = 0;

    while (a > 0) {
        suma = suma + a % 10; //suma jest rowna nastepnym od lewej cyfrom reszty dzielenia
        a = a / 10; //zastosowanie typu liczby całkowitej int pozwala na uzyskania dzielenia całkowitego 
    }

    cout << "Suma cyfr wynosi: ";
    cout << suma;
    cin >> suma;
}


