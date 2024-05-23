#include <iostream>

using namespace std;

int main(){
    string tekst;
    
    cout << "Podaj tekst do zaszyfrowania: ";
    //cin >> tekst;

    tekst = "ABCDEFGX";

    for(int i=0; i<tekst.length(); i++){
        if(tekst[i] == 'Z'){
            tekst[i] = 'C';
            continue;
        }
        
        if(tekst[i] == 'Y'){
            tekst[i] = 'B';
            continue;
        }

        if(tekst[i] == 'X'){
            tekst[i] = 'A';
            continue;
        }
        tekst[i] = (char)(tekst[i]+3);
    }

    cout << "\nZaszyfrowany tekst: " << tekst;
    cout << "\n Podaj tekst do odszyfrowania: ";
    cin >> tekst;

    for(int i=0; i<tekst.length(); i++){
        if(tekst[i] == 'Z'){
            tekst[i] = 'C';
            continue;
        }
        
        if(tekst[i] == 'Y'){
            tekst[i] = 'B';
            continue;
        }

        if(tekst[i] == 'X'){
            tekst[i] = 'A';
            continue;
        }
        tekst[i] = (char)(tekst[i]-3);
    }

    cout << "Odszyfrowany tekst to: " << tekst;
}