#include<stdio.h>
int main()
{
    int a,count=0;
    float b,avg=0;
    for(a=0;a<=5;a++)
    {
    scanf("%f",&b);
        if(b>0.00)
        {
        count++;
        avg=avg+b;
        }
    }
    avg=avg/6.00;
    printf("%d valores positivos\n%.1f\n",count,avg);
return 0;
}
