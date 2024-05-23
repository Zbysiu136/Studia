#include <iostream>

using namespace std;

struct edge{
    int p1;
    int p2;
    int weight;
};

void wypelniacz(int n, int* wsk, int opt){
    for(int i=0; i<n; i++){
        *wsk = opt;
        wsk++;
    }
}

bool przejrzyj(int* wsk, int n){
    for(int i=0; i<n; i++){
        if(*wsk == 1){
            return 0;
        }
    }
    return 1;
}

int main(){
    struct edge edge1 = {0, 1, 2};
    struct edge edge2 = {0, 3, 4};
    struct edge edge3 = {1, 3, 3};
    struct edge edge4 = {1, 2, 3};
    struct edge edge5 = {3, 2, 3};
    struct edge edge6 = {3, 4, 4};
    struct edge edge7 = {2, 4, 2};

    int n = 7; //liczba krawędzi
    int m = 5; //liczba wierzchołków
    
    int* cost[n];
    int* prev[n];
    int* seen[n];

    wypelniacz(n, cost[0], 255);
    wypelniacz(n, prev[0], -1);
    wypelniacz(n, seen[0], 0);

    cost[0] = 0;

    while(przejrzyj(seen[0], n)){
        
    }



    return 0;
}