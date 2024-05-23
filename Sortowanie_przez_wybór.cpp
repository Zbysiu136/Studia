#include <iostream>

using namespace std;

int main() {
    int tab[7];
    int len = 7;

    tab[0] = 22;
    tab[1] = 2;
    tab[2] = 5;
    tab[3] = 4;
    tab[4] = 7;
    tab[5] = 12;
    tab[6] = 11;

    for (int j = 0; j < len-1; j++) { 
        int min = tab[j];
        int poz = j;

        for (int i = j + 1; i < len; i++) { 
            if (tab[i] < min) {
                poz = i;
                min = tab[i];
            }
        }

        int temp = tab[j];
        tab[j] = tab[poz];
        tab[poz] = temp;
    }

    cout << "Tablica po sortowaniu: ";
    for (int i = 0; i < len; i++) {
        cout << tab[i] << ", ";
    }

    return 0;
}
