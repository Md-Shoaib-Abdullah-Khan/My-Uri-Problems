#include<stdio.h>
int main()
{int a,b=3,c=0,j=0,i,d=0,x=1,n,y=1,z=1;
scanf("%d%d",&n,&a);
for(i=1;i<=a;i++)
{
    j++;
    printf("%d ",i);
    if(j==3)
    {
    printf("\n");
    j=0;
    }
}


return 0;
}
