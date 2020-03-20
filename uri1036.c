#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int d=0,l=0,k=0,i=0,j=0,c=0,b[50];
    scanf("%d",&d);

 for(k=0;k<=d;k++)
 {
    scanf("%[^\n]",&a);
    l=strlen(a);

    for(i=0;i<l;i++)
    {
        b[i]=a[i];

    }
    for(i=0;i<l;i++)
    {

    if(b[i]==0)
        c=c+6;
    if(b[i]==1)
        c=c+2;
    if(b[i]==2)
        c=c+5;
    if(b[i]==3)
        c=c+5;
    if(b[i]==4)
        c=c+4;
    if(b[i]==5)
        c=c+5;
    if(b[i]==6)
        c=c+6;
    if(b[i]==7)
        c=c+3;
    if(b[i]==8)
        c=c+7;
    if(b[i]==9)
        c=c+6;
    }
    printf("%d leds\n",c);
 }
return 0;
}
