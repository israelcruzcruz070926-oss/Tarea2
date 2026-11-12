#include <stdio.h>
int main()
{
 float num;
 int cont=1;
 printf("######### Tabla de multiplicar #########\n");
 printf("Ingrese un numero: \n");
 scanf("%f", &num);
 printf("La tabla de multiplicar del %g es:\n", num);
 while (cont <=10)
   {
   printf("%g x %i = %g\n", num, cont, num*cont);
   cont ++;
   }
 return 0;
}
