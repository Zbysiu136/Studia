#include <iostream>

using namespace std;

int find(int tab[], int rozmiar, int kolor) { //zwraca indeks elementu przed którym się ustawić
    for(int i=0; i<rozmiar; i++) {
        if (tab[i] >= kolor) {
            return i;
        }
    }

    return 0;

}


void queue(int len){
    string *kolejka = new string[len];
    int *priorytety = new int[len];
    int priorytet;
    int elementow = 0;
    string element;
    bool loop = true;

    int poz;

    char instrukcja;


    cout << "Co chcesz zrobic:\n "
         <<"d - dodaj ciag znakow do kolejki \n"
         <<"u - usun ciag znakow z kolejki \n"
         <<"w - wyswietl zawartosc kolejki \n"
         <<"x - wyjdz z programu \n"
         <<"y - polecenie specjalne do wyswietleia tablicy priorytetow\n";

    while (loop) {
        cout << "\nCzekam na instrukcje: ";
        cin >> instrukcja;

        switch (instrukcja) {
            case 'd':
                if(elementow == len){
                    cout << "Kolejka jest pełna";
                    break;
                }
                cout << "Podaj teskt do element kolejki: ";
                cin >> element;
                cout << "Podaj priorytet 0 -> 1 -> 2: ";
                cin >> priorytet;

                switch (priorytet) {
                    case 0:
                        for (int i = elementow; i >= 0; i--) {
                            kolejka[i + 1] = kolejka[i];
                            priorytety[i + 1] = priorytety[i];
                        }

                        kolejka[0] = element;
                        priorytety[0] = 0;
                        elementow++;

                        break;


                    case 1:
                        poz = find(priorytety, elementow, 1);

                        for (int i = elementow-1; i >= poz; i--) {
                            kolejka[i + 1] = kolejka[i];
                            priorytety[i + 1] = priorytety[i];
                        }

                        kolejka[poz] = element;
                        priorytety[poz] = 1;
                        elementow++;

                        break;

                    case 2:
                        poz = find(priorytety, elementow, 2);

                        for (int i = elementow-1; i >= poz; i--) {
                            kolejka[i + 1] = kolejka[i];
                            priorytety[i + 1] = priorytety[i];
                        }

                        kolejka[poz] = element;
                        priorytety[poz] = 2;
                        elementow++;

                        break;

                    default:
                        cout << "Podaj poprawny priorytet";

                }

                break;

            case 'u':
                if(elementow == 0)
                    cout << "Kolejka jest pusta \n";
                else {
                    cout << "Usunieto " << kolejka[elementow - 1] << " z kolejki \n";
                    kolejka[elementow - 1] = "";
                    priorytety[elementow - 1] = 4;
                    elementow--;
                }
                break;

            case 'w':
                if (elementow == 0)
                    cout << "Kolejka jest pusta \n";
                else
                    cout << "Elementy kolejki to: ";
                for(int i=0; i<elementow; i++){
                    cout << kolejka[i] << " ";
                }
                break;

            case 'x':
                loop = false;
                break;

            case 'y':
                if (elementow == 0)
                    cout << "Kolejka jest pusta \n";
                else
                    cout << "Priorytety elementow kolejki to: ";
                for(int i=0; i<elementow; i++){
                    cout << priorytety[i] << " ";
                }
                break;

            default:
                cout << "Podaj poprawna operacje \n";
        }



    }
}

int main(){
    queue(15);

}