#include <iostream>
using namespace std;

int silnia(int n) {

    return n * silnia(n - 1);  // Rekurencyjnie obliczamy silnię.
}

int main() {
    int n;

    cout << "Podaj n: ";
    cin >> n;

    if (n < 0) {
        cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
    } else {
        int wynik = silnia(n);
        cout << "Silnia " << n << " wynosi: " << wynik << endl;
    }

    return 0;
}
