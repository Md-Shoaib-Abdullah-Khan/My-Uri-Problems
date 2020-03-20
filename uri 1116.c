#include<stdio.h>
int main()
{int i,j,a,b=0,n,x,y;
float c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%d",&a,&b);

    if(b!=0)
        {
            c=a/b;
            printf("%.1f\n",c);

        }

    else
    {
    printf("divisao impossive\n");
    }

}


    return 0;
}
