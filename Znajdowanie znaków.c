#include <stdio.h>
#include <string.h>

char znajduje_sie_w(char znak, char* string){
    for(int i = 0; i < strlen(string); i++){
        if(string[i] == znak){ //porównywanie aktualnego znaku z szukanym
            return '1';
        }
    }
    return '0';
}

int main(){
    char string[31];
    char znak;
    char wynik = '0';
    int counter = 0;

    printf("Podaj lancuch znakow max 30: ");
    fgets(string, sizeof(string), stdin);

    while (wynik == '0' && counter < strlen(string)) //pętla wykonująca się aż do znalezienia lub pokonania całej długości
    {
        printf("Podaj znak: ");
        znak = getchar();
        getchar(); 

        wynik = znajduje_sie_w(znak, string);

        counter++;
    }

    if (wynik == '0')
        printf("Nie znaleziono znaku\n");
    if (wynik == '1')
        printf("Znaleziono znak\n");

    return 0;
}
