#include <iostream>
#include <string>
#include <stack>

using namespace std;
void instrukcja(int struktura){
    string nazwa;
    if(struktura = 1)
        nazwa = "stosu";;
    if(struktura = 2)
        nazwa = "Kolejki";
    if(struktura = 3)
        nazwa = "Wektor";

    cout << "Uzywasz struktury" << nazwa << "to sa dostepne opcje: \n"
         << "   d: Dodaj element na " << nazwa << "\n"
         << "   u: Usun ostatni element " << nazwa << "\n"
         << "   w: Wyswietl skrajne wartosc odpowiednia dla " << nazwa << "\n"
         << "   n: wyswietl n'ty element " << nazwa << "\n"
         << "   s: Sprawdz czy element na leży już do " << nazwa << "\n"
         << "   l: Wyswietl wielkosc " << nazwa << "\n"
         << "   p: Sprawdz czy " << nazwa << " jest pusty\n";
}

void Stos(stack <string> stos){
    char polecenie;
    string elemenet;
    instrukcja(1);
    

    cout << "Podaj polecenie: ";
    polecenie = getchar();

    switch (polecenie){
    case 'd':
        cout << "Podaj element do wprowadzenia: ";
        cin >> elemenet;
        stos.push(elemenet);
        break;
    
    case 'u':
        cout << "Usuwam ostatni element stosu";
        stos.pop();
        break;

    case 'w':
        cout << stos;
        break;
    
    case 'n':
        cout << "To polecenie nie jest dostępne w stosie"
        break;
    
    case 's':
        if (stos.empty())
            cout << "Stos jest pusty";
        
        else 
            cout << "Stos nie jest pusty";
        break;
    
    case 'l':
        cout << "Stos jest wielkosci" << stos.size;
        break;
    
    case 'p':
        /* code */
        break;
    
    default:
        cout << "Polecenie jest bledne \n";
        Stos();
        break;
    }



    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
         


}


void Kolejka(){

}

void Wektor(){

}

void wybor_struktury(){
    short int struktura;
    cout << "Zadeklaruj jakiej struktury chcesz uzywac: \n";
    cout << "   1: Stos \n   2: Kolejka \n   3: Wektor \n";
    cin >> struktura;
    cout << "\n\n\n";

    switch (struktura){
        case 1:
            stack <string> stos;
            Stos();
            break;
    
        case 2:
            Stos();
            break;

        case 3:
            Stos();
            break;
    
        default:
            cout << "Podales nieprawidlowa strukture, wybierz jeszcze raz \n";
            wybor_struktury();
            break;
        

    }
}

int main(){
    wybor_struktury();
}