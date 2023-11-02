#include <stdio.h>

int main()
{
    int liczba = 10;
    int ASCI;
    printf("Liczba dziesietna to %d \n", liczba); //stosuje znak %d by zmienna liczba była całkowita typ int
    printf("Float jeden znak %.1f ,Float trzy znaki %.3f , Format napisowy %d", (float)liczba, (float)liczba, (char)liczba); //stosuje %.xf by zmienna
    //stosuje znak %d by zmienna liczba była całkowita typ int
    //była zmienno przecinkowa o określonej przez x liczbie precyzji
   
    printf("\n \n");
    printf("Podaj indeks znaku ASCII ");
    scanf("%d", &ASCI);
    printf("\n Znak asci o indeksi %d to %c", ASCI, (char)ASCI);
    printf("\n \n");

    int waga;
    float wzrost;
    printf("Podaj swoja wage[kg]: ");
    scanf("%d", &waga);
    printf("\nPodaj wzrost[m]: ");
    scanf("%f", &wzrost);
    float BMI = waga / (wzrost*wzrost);
    printf("\nTwoje BMI wynosi: %.3f", BMI);
    printf("\n \n");

    int wiek;
    long sek;
    printf("Podaj swoj wiek: ");
    scanf("%d", &wiek);
    sek = wiek * 31560000;

    
    printf("Zyjesz juz %lld", sek);

    getchar();

    return 0;
}

