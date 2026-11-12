#include<stdio.h>
float c,m;
int main ()
{
    printf("Ingresa la cantidad de tu monto para recibir un descuento: ");
    scanf("%f",&c);
    if (c>2500)
    {
        m=c*8/100;
        m=c-m;
        printf("Su monto a pagar es: %g pumapesos\n",m);
    }
    else
    {
        printf("No obtiene descuento por lo tanto debe pagar: %g pumapesos\n",c);
    }
    return 0;
}
