/*Israel Cruz Cruz
ejercicio 3 Tarea 2
Conversión de dolares (USD) a pesos mexicanos (MXN)*/
#include<stdio.h>
float d,p;
int main ()
{
  printf("Escribe cuantos dolares(USD) quieres convertir a pesos mexicanos(MXN):");
  scanf("%f",&d);
  p=d*11.96;
  printf("Tienes %f pesos mexicanos(MXN)\n",p);
  return 0;
}
