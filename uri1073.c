#include<stdio.h>
int main()
{int a=0,b=0,i;
scanf("%d",&a);
for(i=0;i<a;i++)
{scanf("%d",&b);
    if(b%2==0&&b!=0)
    printf("EVEN ");
    else if(b%2!=0&&b!=0)
    printf("ODD ");
    if(b>0)
    printf("POSITIVE\n");
    else if(b<0)
    printf("NEGATIVE\n");
    else if(b==0)
    printf("NULL\n");

}

return 0;
}
