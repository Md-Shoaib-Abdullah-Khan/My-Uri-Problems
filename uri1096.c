#include<stdio.h>
int main()
{int b=0,r=0,n=0,c=0,i;

     scanf("%d%d%d",&n,&b,&r);

    if(b>=n)
    {
        printf("%d\n",n);
    }
    else if(b==0||n==0)
    {
        printf("0\n");
    }
    else if(b>0&&b<n)
    {
    for(i=n;i>=0;)
    {
        if((i-b)>=0)
        {
            c=c+b;
            i=i-b;
            if((i-r)>=0)
            {
                i=i-r;
            }
            else
            {
                break;
            }
        }

    else
    {
        c=c+i;
        break;
    }
    }
    printf("%d\n",c);
    }

    return 0;
}
