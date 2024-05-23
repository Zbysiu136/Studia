#include <iostream>

using namespace std;

int sort(int tab[]){
    int len = sizeof(tab);
    int pivot = len / 2;
    for(int i=0; i<len/2; i++){
        if(tab[i] > pivot){
            for(int j=len-1; j>pivot; j--){
                if(tab[j] < pivot){
                    int tmp = tab[i];
                    tab[i] = tab[j];
                    tab[j] = tmp; 
                }
            }

        }

    }

    return tab;

}

int main() {
    int tab[7];

    tab[0] = 22;
    tab[1] = 2;
    tab[2] = 5;
    tab[3] = 4;
    tab[4] = 7;
    tab[5] = 12;
    tab[6] = 11;
    

    cout << sort(tab);

    


    return 0;
}
