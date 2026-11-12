#include<stdio.h>
int num1,num2,r;
int main()
{
    printf("***********NUMERO DIVISOR DE OTRO NUMERO**********\n");
    printf("Dame el primer numero: ");
    scanf("%i",&num1);
    printf("Dame el segundo numero: ");
    scanf("%i",&num2);
    r=num1%num2;
    if (r==0)
    {
         printf("El numero %i es divisor de %i",num2,num1);
    }
    else
    {
        r=num2%num1;
        if (r==0)
        {
          printf("El numero %i es divisor de %i",num1,num2);
        }
        else
        {
            printf("Alch no hay un divisor");
        }
    }
return 0;
}

