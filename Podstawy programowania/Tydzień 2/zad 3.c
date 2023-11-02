#include <stdio.h>

int main()
{
    int x;
    int y = -10;

    if (y < 0)
        x = -y;
    else
        x = y;
    
    scanf("%f", &x);

    return 0;
}