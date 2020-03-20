#include<stdio.h>
int main()
{
    float a,b=0,c=0;
    scanf("%f",&a);
    if(a>=0.00&&a<=2000.00)
    {
    printf("Isento\n");
    }
    else if(a>=2000.01&&a<=3000.00)
    {
    a=(a-2000.00)*.08;
    printf("R$ %.2f\n",a);
    }
    else if(a>=3000.01&&a<=4500.00)
    {
    b=a-3000.01;
    a=(a-2000.00-b)*.08+b*.18;
    printf("R$ %.2f\n",a);
    }
    else if(a>=4500.01)
    {
    c=a-4500.01;
    b=a-3000.01-c;
    a=(a-2000.00-b-c)*.08+b*.18+c*.28;
    printf("R$ %.2f\n",a);
    }
    return 0;
}
