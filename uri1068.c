#include<stdio.h>
#include<string.h>
int main()
{   int a[11][11],i,j;
for(i=1;i<=10;i++)
{
    for(j=1;j<=10;j++)
    {
       a[j][i]=i*j;
    }
}
for(i=1;i<=10;i++)
{
    for(j=1;j<=10;j++)
    {
    printf("%d * %d = %d \n",i,j,a[j][i]);
    }
    printf("\n\n");
}
return 0;
}
