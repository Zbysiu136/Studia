#include <iostream>

using namespace std;

int main(){
    int n;
    int suma = 1;
    
    cout << "Wprowadz n \n";
    cin >> n;

    while(n > 1){ //pętla wykonująca mnożenie uprzedniej sumy przez coraz mniejsze
    //wartości rozpoczynająć od wartośi podanej przez użytkownika
        suma = suma * n;
        n = n - 1;
    }

    cout << "Silnia to";
    cout << suma;

    cin >> suma;
    return 0;
}


