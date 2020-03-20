#include<stdio.h>
int main()
{int a,b,c,d,x,y;
scanf("%d%d%d%d",&a,&x,&b,&y);
if(b>a)
{
   c=b-a;
   d=y-x;
   if(d<0)
   {
       c=c-1;
       d=60-d*(-1);
   }
}
else if(b==a)
{
   if(y>x)
{  c=0;
   d=y-x;
}
   else if(x>y)
   {
    c=23;
    d=60-(x-y);
   }
   else
   {
    c=24;
    d=0;
   }
}
else
{
    c=(24-a)+b;
    d=y-x;
       if(d<0)
   {
       c=c-1;
       d=60-d*(-1);
   }
}
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,d);
    return 0;
}
