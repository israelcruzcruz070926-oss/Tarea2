#include<stdio.h>
int main ()
{
  int B[19];
  int b,j,s=0,i;
  printf("Elige el rango de tu arreglo que sea entre 1 y 20: ");
  scanf("%d",&b);
if((0<b)&&(b<20))
{
    printf("\t***Ingresa los valores que vas a sumar***\n\n");
  for (i=0;i<b;i++)
   {
   printf("Ingresa el numero de la casilla %d: ",i+1);
   scanf("%d",&B[i]);
   }
   for(j=0;j<b;j++)
   {
     s += B[j];
   }
   printf("La suma de tus numeros es: %d\n",s);
 }
 else
{
printf("Lee bien, pendejo.\n");
 }
  return 0;
 }
