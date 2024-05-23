#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* tablica;

    printf("Podaj wartość n: ");
    scanf("%d", &n);

    tablica = (int*)malloc(sizeof(int) * n); //Zalokowanie dynamicznie pamięci dla obszaru tablicy

    if (tablica == NULL) {
        printf("\nPamięć nie została przydzielona \n");
        return 1;  // Kod błędu, nie udało się zaalokować pamięci
    }

    int tmp;
    for (int i = 0; i < n; i++) { //wprowadzanie elementów do tablicy
        printf("\nPodaj %d liczbę w kolejności: ", i + 1);
        scanf("%d", &tmp);
        tablica[i] = tmp;  
    }

    printf("\nSuma wprowadzonych liczb to: ");

    int suma = 0;  

    for (int i = 0; i < n; i++) { //Sumowanie elementów
        suma += tablica[i];  
    }

    printf("%d\n", suma); 

    free(tablica);  // Zwolnienie zaalokowanej pamięci

    return 0;
}
