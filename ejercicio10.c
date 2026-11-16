/*Israel Cruz Cruz
ejercicio 10 Tarea 2
cuantos negativos, positivos y nulos hay */
#include<stdio.h>
float N;
int c,np=0,nn=0,nu=0; //np= numero positivo, nn=numero negativo y nu=nulo
void main()
{
  for(c=1;c<101;c++)
  {
    printf("(Dato %i )Ingresa un numero: ",c);
    scanf("%f",&N);
    if (N>0)
    {
        //printf("maluma baby\n");
        np+=1;
    }
    else
    {
        if (N<0)
        {
            //printf("ostia\n");
            nn+=1;
        }
        else
        {
            //printf("omg\n");
            nu+=1;
        }

    }
  }
  printf("La cantidad de numeros positivos son: %i\nLa cantidad de numeros negativos son: %i\nLa cantidad de numeros nulos son: %i\n",np,nn,nu);
}
