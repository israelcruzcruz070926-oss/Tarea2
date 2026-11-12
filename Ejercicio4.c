#include<stdio.h>
long d,i,t;
int main ()
{
    printf("Deposita la cantidad a invertir: ");
    scanf("%ld",&d);
    printf("Ingresa el porcentaje de interes: ");
    scanf("%ld",&i);
    t=d*i/100;
    printf("Monto de este mes: %ld",t);
    return 0;
}
