#include <stdio.h>
int main()
{
	int N,y,m,d;
	scanf("%d",&N);
	m=N/30;
	d=N%30;
	y=m/12;
	m=m%12;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d );

	return 0;
}
