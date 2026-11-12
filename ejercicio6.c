#include<stdio.h>
float s,t;
int main ()
{
    printf("Ingresa la cantidad de tu sueldo: ");
    scanf("%f",&s);
    if(s<1000)
    {
        t=s*15/100;
        t+=s;
        printf("Su sueldo ahora es de: %g\n",t);
    }
    else
    {
        t=s*12/100;
        t+=s;
        printf("Su sueldo ahora es de: %g\n",t);
    }
    return 0;
}
