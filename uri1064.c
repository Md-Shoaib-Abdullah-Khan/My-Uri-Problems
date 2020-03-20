#include<stdio.h>
int main()
{
    int a,count=0,b;
    for(a=0;a<=5;a++)
    {
    scanf("%d",&b);
        if(b%2==0)
        {
        count++;
        }
    }
    printf("%d valores pares\n",count);
return 0;
}
