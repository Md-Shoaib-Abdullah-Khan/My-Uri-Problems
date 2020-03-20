#include<stdio.h>
int main()
{int i,j=0,b=0,n=0,x=0,y=0,z=0;
int c=0,a;

{start:
    n++;
       scanf("%d%d",&a,&b);
    if(a>b)
        {
        x++;
        }
    if(a<b)
        {
        y++;
        }
    if(a==b)
        {
        z++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&j);
    if(j==1)
    {
        goto start;
    }
    else if(j==2)
    {
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",n,x,y,z);
        if(x>y)
        {
            printf("Inter venceu mais\n");
        }
        else if(y>x)
        {
            printf("Gremio venceu mais\n");
        }
        else if(x==y)
        {
            printf("Não houve vencedor\n");
        }
        goto end;
    }

}
end:

    return 0;
}
