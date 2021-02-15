#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,d=0,l=0,c=0;
    char a[102];
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {c=0;
    scanf("%s",&a);
    d=strlen(a);
    for(j=0;j<d;j++)
        {
        if(a[j]=='1')
            {c=c+2;}
        else if(a[j]=='2')
            {c=c+5;}
        else if(a[j]=='3')
            {c=c+5;}
        else if(a[j]=='4')
        {c=c+4;}
        else if(a[j]=='5')
            {c=c+5;}
        else if(a[j]=='6')
            {c=c+6;}
        else if(a[j]=='7')
            {c=c+3;}
        else if(a[j]=='8')
            {c=c+7;}
        else if(a[j]=='9')
            {c=c+6;}
        else if(a[j]=='0')
            {c=c+6;}


        }
    printf("%d leds\n",c);
    }
  return 0;

}
