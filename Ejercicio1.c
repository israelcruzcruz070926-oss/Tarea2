#include<stdio.h>
double num1,num2,sum,res,mul;
int main ()
{
    printf("Ingresa dos numeros los cuales se van a sumar, restar y multiplicar\nDame el primer numero: ");
    scanf("%lf", &num1);
    printf("Dame el segundo numero: ");
    scanf("%lf",&num2);
    sum=num1+num2;
    res=num1-num2;
    mul=num1*num2;
    printf("La suma es: %g\nLa resta es: %g\nLa multiplicacion es: %g\n",sum,res,mul);
    return 0;
}
