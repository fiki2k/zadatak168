// Program treba ispisat rezultat pomocu poziva prema vrijednosti.

#include<stdio.h>
#include<stdlib.h>
void value(int x, int y);
int main( )
{
        int a=5, b=8;
        printf("Prije poziva funkcije, a = %d i b = %d\n", a, b);
        vrijednost(a, b);
        printf("Nakon poziva funkcije, a = %d i b = %d\n", a, b);

    return 0;
}

// U pozivu prema vrijednosti kopije varijabli se salju funkciji.
void vrijednost(int x, int y)
{
        x++;
        y++;
        printf("U funkciji x = %d , y = %d\n",x,y);
}
