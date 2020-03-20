#include<stdio.h>
int main()
{int a,b,c=0,i,x,y;
scanf("%d%d",&a,&b);
if(a>=b)
{
    y=a;
    x=b;
}
else
{
    x=a;
    y=b;
}
for(i=x+1;i<y;i++)
{
    if(i%5==2||i%5==3)
    {
printf("%d\n",i);
    }
}

return 0;
}
