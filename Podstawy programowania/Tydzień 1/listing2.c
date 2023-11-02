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