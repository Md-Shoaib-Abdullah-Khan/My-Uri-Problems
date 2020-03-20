#include<stdio.h>
int main()
{int a=0,b=0,i,si=0,s0=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{scanf("%d",&b);
    if(b>=10&&b<=20)
        si++;
    else
        s0++;
}

printf("%d in\n%d out\n",si,s0);
return 0;
}
