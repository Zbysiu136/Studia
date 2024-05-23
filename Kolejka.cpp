#include <iostream>

using namespace std;

int find(int tab[], int rozmiar, int kolor) {
    for(int i=0; i<rozmiar; i++){
        if(tab[i] >= kolor){
            return i-1;
        }
    }
}

void queue(int s) {
    string *array = new string[s];
    int *priorytety = new int[s];
    int x;
    int poz;

    cout << "Podaj jedną z instrukcji:\n"
         << "d - aby dodać napis do kolejki\n"
         << "u - aby usunąć napis z kolejki\n"
         << "w - aby wyświetlić zawartość kolejki\n"
         << "x - aby zakończyć\n";

    char instrukcja; // informacja od użytkownika
    bool loop = true; // czy zapętlać
    int elements = 0; // ilość elementów

    while (loop) {
        cin >> instrukcja;

        switch (instrukcja) {
            case 'd': // dodawanie

                if (elements == s) {
                    cout << "Kolejka jest pełna!\n";
                }

                string str;
                cout << "Podaj napis\n";
                cin >> str;

                cout << "Podaj priorytet 0 -> 1 -> 2: ";
                cin >> x;
                if (x!=0 || x!=2){
                    x = 1;
                }

                else {
                    switch (x){
                        case 0:
                            for (int i = elements - 1; i >= 0; i--) {
                                array[i + 1] = array[i];
                            }

                            for (int i = elements - 1; i >= 0; i--) {
                                priorytety[i + 1] = priorytety[i];
                            }

                            array[0] = str;
                            elements++;
                            cout << "Dodano!\n";

                            break;

                        case 1:
                            poz = find(priorytety, elements, 1);
                            for (int i = elements-1; i>= poz; i--){
                                array[i + 1] = array[i];
                                priorytety[i + 1] = priorytety[i];
                            }

                            array[poz] = str;
                            elements++;
                            cout << "Dodano!\n";

                            break;


                        case 2:
                            for (int i = elements-1; i>= find(priorytety, elements, 2); i--){
                                array[i + 1] = array[i];
                                priorytety[i + 1] = priorytety[i];
                            }

                            break;
                    }
                }



            case 'u': // usuwanie
                if (elements == 0) {
                    cout << "Kolejka jest pusta!\n";

                } else {
                    elements--;
                    cout << "Usunięto: " << array[elements] << "!\n";
                    array[elements] = "";
                }
                break;

            case 'w': // wyświetlanie
                if (elements == 0) {
                    cout << "Kolejka jest pusta!\n";
                } else {
                    cout << "Aktualna kolejka:\n";
                    for (int i = 0; i < elements; i++) {
                        cout << array[i] << " ";
                    }
                    cout << "\n";
                }
                break;

            case 'x': // wyjście
                loop = false;
                break;

            default: // nieznana instrukcja
                cout << "Podaj jedną z instrukcji:\n"
                     << "d - aby dodać napis do kolejki\n"
                     << "u - aby usunąć napis z kolejki\n"
                     << "w - aby wyświetlić zawartość kolejki\n"
                     << "x - aby zakończyć\n";
                break;
        }
    }
}

int main() {
    int rozmiar = 10; // przykładowy rozmiar kolejki
    queue(rozmiar);
    return 0;
}
