#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int r = (rand()%15+1);

    int x;
    while (x != r){
        cin >> x;

        if (x < r)
            cout << "more! \n";
        
        else
            cout << "less! \n";
        
        i++;

    }
    
    cout << "success! " << i;\
    cin >> i;
    return 0; 
}
