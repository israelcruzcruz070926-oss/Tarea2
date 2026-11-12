#include<stdio.h>
float t,d,r,c; //c=contador, t=ticket, d=dias, r=recorrido
int main ()
{
    printf("Ingresa cuantos kilometros recorriste contando ida y vuelta: ");
    scanf("%f",&r);
    printf("Ingresa los dias de tu estancia: ");
    scanf("%f",&d);
    if(d>7&&r>800)
    {
        c=r*0.23*30/100;
        t=(r*0.23)-c;

        printf("La cantidad a pagar es: %g pumapesos\n",t);
    }
    else
    {
        t=r*0.23;
        printf("La cantidad a pagar es: %g pumapesos\n",t);
    }
    return 0;
}
