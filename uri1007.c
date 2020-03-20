#include<stdio.h>
#include<math.h>
int main()
{float x,y,a=0,b=0,c=0;
scanf("%f%f%f",&a,&b,&c);
    if(a==0||(b*b-4*a*c)<0)
     {
         printf("Impossivel calcular\n");
     }
    else
    {
        x=-b+sqrt(b*b-4*a*c)/(2*a);
        y=-b-sqrt(b*b-4*a*c)/(2*a);
    printf("R1 = %.2f\nR2 = %.2f",x,y);
    }

return 0;
}
