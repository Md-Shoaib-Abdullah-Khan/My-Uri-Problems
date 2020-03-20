#include<stdio.h>
int main()
{float i,j,a,b;
int c=0;
for(i=0.00;i<2.20;i=i+.20)
{c=0;
    for(j=1.0+i;c!=3;j=j+1.0)
    {c++;
        printf("I=%.1f J=%.1f\n",i,j);
    }
}
    return 0;
}
