#include<stdio.h>
int np,s=0;
int main()
{
    np=10;
    while (np<=50)
    {
        s=s+np;
        printf("En el numero %i, la suma es: %i\n", np, s);
        np=np+2;
    }
    printf("La suma total es: %i\n",s);
    return 0;
}
