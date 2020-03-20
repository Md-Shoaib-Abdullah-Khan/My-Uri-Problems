#include<stdio.h>
int main()
{int i,j=0,b=0,n,x,y;
double c=0,a;

for(i=0;;i++)
{start:
       scanf("%lf",&a);
    if(a>=0.0&&a<=10.0)
        {
            j++;
            c=a+c;
        }
        else
{
    printf("nota invalida\n");
}


    if(j==2)
    {
    c=c/2.00;
    printf("media = %.2lf\n",c);
    c=0;
    j=0;
    for(x=0;;x++)
    {
        scanf("%d",&y);
        printf("novo calculo (1-sim 2-nao)\n");
        if(y==1)
        {
            goto start;
        }
        else if(y==2)
        {
            goto end;
        }
    }
    }

}
end:

    return 0;
}
