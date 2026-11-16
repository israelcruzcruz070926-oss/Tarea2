/*Israel Cruz Cruz
ejercicio 12 Tarea 2
producto de un numero factorial */
#include<stdio.h>
float N=1,n,p=1;
int main()
{
    printf("Ingresa un numero menor o igual a 34: ");
    scanf("%f",&n);
    if(n<=34)
    {
        while (N<=n)
            {
                p=p*N;
                N=N+1;
            }
        printf("El producto es: %g",p);
    }
    else
    {
        printf("La cantidad es muy grande, intenta otra vez");
    }
    return 0;
}
