#include<stdio.h>
int main()
{

    char a;
    double b,c,d;
    scanf("%c%lf%lf",&a,&b,&c);
    d=b+c*15/100;
    printf("TOTAL = R$ %.2lf\n",d);
    return 0;

}
