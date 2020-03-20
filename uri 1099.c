#include<stdio.h>
int main()
{
    int x,y,n,s=0,i,a,b,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {s=0;
        scanf("%d%d",&a,&b);
        if(a>=b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                s=s+j;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
