#include <iostream>

using namespace std;

int main(){
    #define n 6

    struct edge
    {
        int p1;
        int p2;
        int weight;
    };

    struct edge edge1;
    edge1.p1 = 0;
    edge1.p2 = 1;
    edge1.weight = 2;

    struct edge edge2;
    edge1.p1 = 0;
    edge1.p2 = 3;
    edge1.weight = 4;

    struct edge edge3;
    edge1.p1 = 1;
    edge1.p2 = 3;
    edge1.weight = 3;

    struct edge edge4;
    edge1.p1 = 1;
    edge1.p2 = 2;
    edge1.weight = 3;

    struct edge edge5;
    edge1.p1 = 2;
    edge1.p2 = 3;
    edge1.weight = 3;

    struct edge edge6;
    edge1.p1 = 3;
    edge1.p2 = 4;
    edge1.weight = 4;

    struct edge edge7;
    edge1.p1 = 2;
    edge1.p2 = 4;
    edge1.weight = 2;
 
    int* cost[n];
    int* prev[n];
    bool* seen[n];

    for(int* i = *cost; i<*cost + sizeof(int)*n; i++){
        *i = (int)255;
    }

    for(int* i = *prev; i<*prev + sizeof(int)*n; i++){
        *i = (int)-1;
    }

    for(bool* i = *seen; i<*seen + sizeof(int)*n; i++){
        *i = (bool)0;
    }

    


}