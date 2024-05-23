#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Wprowadz dlugosc tablicy: ";
    cin >> n;

    int tab[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj element tablicy: ";
        cin >> tab[i];
    }

    int max = tab[0]; // maksimum ustawiane na wartość pierwszego elementu tablicy.
    int min = tab[0]; 
    int suma = 0; 
    int pp3 = 0; //suma liczb podzielnych przez 3

    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i]; //Aktualizacja maksimum jezeli i'ty element jest wiekszy od tab[0]
        }

        if (tab[i] < min)
        {
            min = tab[i];  
        }

        if (tab[i] % 3 == 0)
        {
            pp3++; // Zwiększenie licznika liczb podzielnych przez 3.
        }

        suma += tab[i];  // Dodawanie elementu do sumy używając skroconego zapisu
    }

    int a;

    //wypisanie wynikow
    cout << "Podaj indeks elementu tablicy do wyswietlenia: ";
    cin >> a;
    
    cout << "Wartosc elementu o indeksie " << a << ": " << tab[a] << "\n";

    int srednia = suma / n;
    cout << "suma elementow: " << suma << "\n";
    cout << "srednia: " << srednia << "\n";
    cout << "najwiekszy element: " << max << "\n";
    cout << "najmniejszy element: " << min << "\n";
    cout << "liczba elementów podzielnych przez 3: " << pp3 << "\n";

    cin >> a;
    
    return 0;
}
