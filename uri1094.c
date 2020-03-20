#include<stdio.h>
int main()
{
    int i,s=0,x,y,z,r=0,j=0,e=0,l=0,a[50],c=0;
    char d;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
    scanf("%d%c",&e,&d);
    if(d=='C')
    {
        c=c+e;
    }
    else if(d=='R')
    {
        r=r+e;
    }
    else if(d=='S')
    {
        s=s+e;
    }
    }
    x=(c/(c+r+s))*100;
    y=(r/(c+r+s))*100;
    z=(s/(c+r+s))*100;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %d %\nPercentual de ratos: %d %\nPercentual de sapos: %d %\n",(c+r+s),r,s,c,x,y,z);
  return 0;

}
