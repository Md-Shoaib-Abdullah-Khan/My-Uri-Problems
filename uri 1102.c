#include<stdio.h>
int main()
{int i,j,a,b=0,x,y,c=0;
for(i=0;;i++)
{scanf("%d%d",&a,&b);

    if(a!=b)
    {if(a<b)
     {
     printf("Crescente\n");
     }
    else
     {
     printf("Decrescente\n");
     }

    }
    else
        {
                break;
        }

}


    return 0;
}
