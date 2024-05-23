#include <stdio.h>
int main(){
    const float nadgodziny = 1.5;
    const int godzinowka = 40;
    const float pier_podatek = 0.15;
    const float drug_podatek = 0.20;
    const float trze_podatek = 0.25;

    float wynagrodzenie = 0;
    float godzin;
    float podatek = 0.0;

    printf("Podaj liczbe godzin przepracowanych  w tym tygodniu: ");
    scanf("%f", &godzin);
    godzin = float(godzin);

    wynagrodzenie = (godzin>40)? 40*40 + (godzin-40)*40*nadgodziny: godzin*40;
    printf("Twoje wynagrodzenie brutto to: %f", wynagrodzenie);

    if(wynagrodzenie > 1800){
        podatek = podatek + (wynagrodzenie-1800)*trze_podatek;
    }

    if(wynagrodzenie>1200){
        podatek = podatek + (wynagrodzenie - 1200 - ((wynagrodzenie>1800)? wynagrodzenie-1800: 0))*drug_podatek;
    }

    if(wynagrodzenie>0){
        podatek = podatek + (wynagrodzenie - ((wynagrodzenie>1200)? wynagrodzenie-1200: 0))*pier_podatek;
    }

    printf("Po odlozeniu %.2f zl podatku stanaowiacego %.2f% twojego calkowitego wynagrodzenia wynagrodzenie netto wynosi: %.2f", podatek, podatek/wynagrodzenie, wynagrodzenie-podatek);

    return 0;
}
