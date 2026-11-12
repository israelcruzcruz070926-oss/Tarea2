#include<stdio.h>
int main ()
{
  int B[19];
  int b,j,p=0,i,n=0,nu=0;
  printf("Elige el rango de tu arreglo que sea entre 1 y 20: ");
  scanf("%d",&b);
  if((0<b)&&(b<20))
{
  for (i=0;i<b;i++)
   {
   printf("Ingresa el numero de la casilla %d: ",i+1);
   scanf("%d",&B[i]);
   }
   for(j=0;j<b;j++)
   {
     if(B[j]<0)
     {
         n+=1;
     }
     else
     {
         if(B[j]>0)
         {
           p+=1;
         }
         else
         {
            nu+=1;
         }
     }
   }
  printf("La cantidad de numeros positivos son: %d\nLa cantidad de numeros negativos son: %d\nLa cantidad de numeros nulos son: %d\n",p,n,nu);
 }
 else
{
printf("Lee bien bro.\n");
 }
  return 0;
 }
