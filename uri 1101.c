#include<stdio.h>
int main()
{int i,j,a,b=0,x,y,c=0;
for(i=0;;i++)
{scanf("%d%d",&a,&b);
    c=0;
    if(a>0&&b>0)
    {if(a<=b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }
        for(j=x;j<=y;j++)
        {
            c=c+j;
            printf("%d ",j);
        }
    }
        else
        {
                break;
        }
        printf("Sum=%d\n",c);

}


    return 0;
}
