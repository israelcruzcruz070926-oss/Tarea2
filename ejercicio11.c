/*Israel Cruz Cruz
ejercicio 11 Tarea 2
suma de primeros numeros pares */
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
