#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int d=0,l=0,k=0,i=0,j=0,c=0,b[50];
    scanf("%d",&d);
  getchar();
 for(k=0;k<d;k++)
 {
    gets(a);
    l=strlen(a);

    for(i=0;i<l;i++)
    {
        b[i]=a[i];

    }
       for(i=0;i<l;i++)
    {   if(((b[i]>=65&&b[i]<=90)||(b[i]>=97&&b[i]<=122)))
        b[i]=b[i]+3;
    }

    for(i=0,j=l-1;i<(l/2);i++,j--)
    {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
    }
    for(i=(l/2);i<l;i++)
    {
        b[i]=b[i]-1;
    }
    for(i=0;i<l;i++)
    {
        a[i]=b[i];
    }
    printf("%s\n",a);
 }
return 0;
}
