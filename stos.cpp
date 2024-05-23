#include <iostream>

using namespace std;

class Stos
{
public:

    Stos() : elementy(nullptr), wskaznik(nullptr), rozmiar(0) {} //konstruktor  klasy

    char* elementy; //będzie wskazywał na pierwszy element stosu
    char* wskaznik; //będzie wskazywał na ostatnie element stosu
    int rozmiar; //definuje ilość elementów typu char

    int add(char element) //metoda odpowiedzialna za dodanie elementu na koniec stosu
    {
        elementy = (char *)realloc(elementy, sizeof(char)* rozmiar); //alokacja dodatkowej pamięci większej i 1bajt 
        wskaznik = elementy + sizeof(char) * rozmiar; //wskaznik wskazuje na ostatni element stosu
        *wskaznik = element;
        rozmiar++;

        return rozmiar;
    }

    int remove(){ //metoda odpowiedzialna za usunięcie ostatnie elementu stosu
        rozmiar--;
        wskaznik = elementy + sizeof(char) * rozmiar -1; //wskaźnik się cofa
        elementy = (char*)realloc(elementy, sizeof(char)* rozmiar); //pamięć jest zabierana

        return rozmiar;
    }

    void retur(){ //metoda wypisuje wszystkie elementy stosu
        for(int i=0; i<rozmiar; i++){
            cout << *(elementy);
            elementy++;
        }

        elementy = elementy-rozmiar;
        cout << "\n";
    }


};


main()
{
    Stos stos;

    stos.add('a');
    stos.add('b');
    stos.add('c');
    stos.retur();
    stos.remove();
    stos.retur();
    stos.add('d');
    stos.retur();
    cout << "ostatni element stosu:" << stos.wskaznik;
    return 0;
}
