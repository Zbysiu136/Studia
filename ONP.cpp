#include <iostream>

using namespace std;

class Stos
{
public:

    Stos() : elementy(nullptr), wskaznik(nullptr), rozmiar(0) {}

    int* elementy;
    int* wskaznik;
    int rozmiar;

    int add(int element)
    {
        elementy = (int*)realloc(elementy, sizeof(int)* rozmiar);
        wskaznik = elementy + sizeof(int) * rozmiar;
        *wskaznik = element;
        rozmiar++;

        return rozmiar;
    }

    int remove(){
        rozmiar--;
        wskaznik = elementy + sizeof(int) * rozmiar -1;
        elementy = (int*)realloc(elementy, sizeof(int)* rozmiar);     

        return rozmiar;
    }

    void retur(){
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

    stos.add(2);
    stos.add(3);
    stos.retur();


    return 0;
}
