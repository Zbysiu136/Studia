#include <stdio.h>
#include <string.h>

char* sklej(char* a, const char* b) {
    int len = strlen(a);
    for (int i = 0; *b != '\0'; i++) { //warunek wykonywany do 
        a[len++] = *b++;
    }

    a[len] = '\0'; 

    return a;
}

int main() {
    char string_a[40];
    char string_b[20];

    printf("Podaj pierwszy wyraz max 20 liter: ");
    scanf("%19s", string_a); // ograniczenia na 19 znaków
    printf("\nPodaj drugi wyraz max 20 liter: ");
    scanf("%19s", string_b);

    printf("\nSklejony tekst: %s\n", sklej(string_a, string_b));

    return 0;
}
