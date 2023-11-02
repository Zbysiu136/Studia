#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    float d;

    cout << "Podaj zmienne a, b, c \n";
    cin >> a;
    cin >> b;
    cin >> c;

    d = b * b - 4 * a * c;

    cout << (b * (-1) + sqrt(d)) / (2 * a) << "\n";
    cout << (b * (-1) - sqrt(d)) / (2 * a) << "\n";

    cin >> a;
    return 0;
}
