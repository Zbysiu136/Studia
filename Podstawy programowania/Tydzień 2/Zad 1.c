#include <stdio.h>

int main() {
    float a, b, c, d;
    int dod = 0, uje = 0;
    
    printf("Podaj cztery liczby rzeczywiste: ");
    scanf("%f", &a);
    printf("\nPodaj nastepna liczbe: ");
    scanf("%f", &b);
    printf("\nPodaj nastepna liczbe: ");
    scanf("%f", &c);
    printf("\nPodaj nastepna liczbe: ");
    scanf("%f", &d);

    printf("%f %f %f %f\n", a, b, c, d);
    
    if (a >= 0) {
        dod = dod + 1;
    }
    
    if (b >= 0) {
        dod = dod + 1;
    }
    
    if (c >= 0) {
        dod = dod + 1;
    }
    
    if (d >= 0) {
        dod = dod + 1;
    }
    
    if (dod == 2) {
        printf("Licz dodatnich jest tyle samo co ujemnych\n");
    }
    
    if (dod > 2) {
        printf("Licz dodatnich jest %d jest ich wiecej niz ujemnych\n", dod);
    }
    
    if (dod < 2) {
        printf("Liczb ujemnych jest %d odjest ich wiecej niz dodatnich\n", 4 - dod);
    }

    scanf("%f", &d);

    return 0;
}
