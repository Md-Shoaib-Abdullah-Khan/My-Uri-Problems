#include<stdio.h>
int main()
{
    int a,counte=0,counto=0,countp1=0,countp2=0,countn1=0,countn2=0,countp=0,countn=0,b;
    for(a=0;a<5;a++)
    {
    scanf("%d",&b);
        if(b%2==0)
        {
        counte++;
        if(b>0)
            countp1++;
        else if(b<0)
            countn1++;
        }
        else
        {
            counto++;
        if(b>0)
            countp2++;
        else if(b<0)
            countn2++;

        }
    }
    countn=countn1+countn2;
    countp=countp1+countp2;
    printf("%d valor(es) par(es\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",counte,counto,countp,countn);
return 0;
}
