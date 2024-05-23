#include <stdio.h>
#define ODSTEP ' ' // apostrof-spacja-apostrof
int main(void){
    char ch;
    ch = getchar(); // odczytanie znaku
    while (ch != '\n'){ // dopoki nie ma konca wiersza
        if (ch == ODSTEP) // pozostaw znak spacji
            putchar(ch); // bez zmian
        else
            putchar(ch + 1); // zmien pozostale znaki
            ch = getchar(); // wczytaj kolejny znak
    }
        
putchar(ch); // wyswietl znak nowej linii
return 0;
}
//getchar - pomimo że poda mu się ciąg znaków on pobiera i wykonuje operacje tylko na jednym z nich

/////////STAŁE

#include <stdio.h>
#define RABAT 0.05
int main () {
    const float pi = 3.1415;

    float cena, cena_po, rabat;
    printf("Oto kalkulator rabatu. Podaj cene");
    scanf("%f", &cena);
    rabat= cena * RABAT;
    cena_po = cena - rabat;
    printf("Do zaplaty %f", cena_po);
}

//////////TABLICE I WSKAŹNIKI

#include <stdio.h>

int main() {
    int tab[10] = {1, 4, 2, 3, 7, 3, 2, 9, 10, 7};
    int* p = &tab[0];
    int tmp;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                tmp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = tmp;
            }
        }
    }

    // Wyświetlenie posortowanej tablicy
    printf("Posortowana tablica: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}

//////Operacje bitowe

#include <stdio.h>

int main(){
    int a, b;
    printf("\nWprowadz liczbe: ");
    scanf("%d", &a);

    b = 16; //10000 

    if(a^b < a){
        printf("\nNa 5 miejscu stoi jedynka");
    }

    b = 128; //10000000
    if(a^b < a){
        printf("\nNa 8 miejscu stoi jedynka");
    }

    main();

}



