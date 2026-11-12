#include <stdio.h>
int main()
{
  int b,i=0,s;
  int B[29]={6,3,9,2,8,5,10,2,7,4,9,6,2,3,8,10,5,2,7,4,3,9,6,10,10,8,2,5,7,4};

  printf("Ingresa un numero entero entre 1 y 10: ");
  scanf("%d",&b);
  if((b>0)&&(b<=10))
  {
       while(i<29)
       {
          if(b==B[i])
          {
             s+=1;
          }
        i+=1;
       }
        if(s>0)
        {
            printf("Las veces que tu numero se repiten son: %d ", s);
        }
        else
        {
            printf("Tu numero no esta");
        }
  }
 else
 {
     printf("Ingresa un numero valido entre 1 y 10");
 }
return 0;
}
