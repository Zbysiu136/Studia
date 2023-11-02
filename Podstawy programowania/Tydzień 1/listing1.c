#include <stdio.h> 
int main() { 
    int liczba1, liczba2, liczba3; 
    float srednia; 
    printf("Srednia arytmetyczna z 3 liczb.\n Podaj 3 liczby\n");
    scanf("%d", &liczba1); /* pobieranie danych od użytkownika */
    scanf("%d", &liczba2); /* %d to przykład specyfikatora formatu odpowiadający wartości typu int*/
    scanf("%d", &liczba3);
    srednia = ((float)liczba1+liczba2+liczba3)/3; /*przykład rzutowania zmiennych, zmienne zostały zmienione na typ float przez co cały wynik artmetyczny jest float bo to najpojemniejszy typ zmiennej */
    printf("Srednia arytmetyczna z liczb %d,%d,%d wynosi %.3f", liczba1, liczba2, liczba3, srednia); /*% oznacza zmienną, d - oznacza int a .3f oznacza trzy miejsca po przecinku w floata*/
    getchar(); /* funkcja getchar () wczytuje znak z wejścia zmuszając program do oczekiwania na
    wprowadzenie danych */

    scanf("%d", &liczba2); /* %d to przykład specyfikatora formatu odpowiadający wartości typu int
    return 0; /* instrukcja zwrotu */
}