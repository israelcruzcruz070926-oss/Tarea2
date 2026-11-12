#include<stdio.h>
int N=1,n,p=1;
int main()
{
    printf("ingresa un numero: ");
    scanf("%i",&n);
    while (N<=n)
    {
        p=p*N;
        N=N+1;
    }
    printf("el producto es: %i",p);
    return 0;
}
