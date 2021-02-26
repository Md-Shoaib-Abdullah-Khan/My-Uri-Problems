#include<stdio.h>
int main()
{int i,j,a,b=0,x,y,c=0;
for(i=0;;i++)
{scanf("%d%d",&a,&b);

    if(a>0&&b>0)
        {
            printf("primeiro\n");

        }
    else if(a<0&&b>0)
        {
            printf("segundo\n");

        }
    else if(a>0&&b<0)
        {
            printf("quarto\n");

        }
    else if(a<0&&b<0)
        {
            printf("terceiro\n");

        }
    else
    {
            break;
    }

}


    return 0;
}
