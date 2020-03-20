#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,b,d=0,l=0,c=0;
    float s;
for(i=0;;i++)
{
    scanf("%d",&l);
    if(l<0)
    {
        break;
    }
    d=d+l;
    c++;
}
s=(float)d/c;
printf("%.2f\n",s);
  return 0;

}
