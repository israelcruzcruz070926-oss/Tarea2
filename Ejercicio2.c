/*Israel Cruz Cruz
ejercicio 2 Tarea 2
Area y Circunferencia*/
#include<stdio.h>
#include<math.h>
#define pi 3.1415926535897
double r,a,c;
void main ()
{
printf("ingresa el radio para calcular el area y la circunferencia: \n");
scanf("%lf",&r);
a=pi*pow(r,2);
c=2*pi*pow(r,2);
printf("el area es: %lf\n y la circunferencia es: %lf\n",a,c);
}
