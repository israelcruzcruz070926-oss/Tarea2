#include<stdio.h>
int np=0,nn=0,nu=0,c,N; //np= numero positivo, nn=numero negativo; nu=nulo
void main()
{
  for(c=0;c<100;c++)
  {
    printf("(Vuelta numero %i )Ingresa un numero: ",c);
    scanf("%i",&N);
    if (N>0)
    {
        np+=1;
    }
    else
    {
        if (N<0)
        {
            nn+=1;
        }
        else
        {
            nu+=1;
        }

    }
  }
  printf("La cantidad de numeros positivos son: %i\nLa cantidad de numeros negativos son: %i\nLa cantidad de numeros nulos son: %i\n",np,nn,nu);
}
