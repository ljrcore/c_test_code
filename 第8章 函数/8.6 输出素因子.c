#include <stdio.h>
#include <conio.h>

void prin(int m);

void prim(int m)
{
	int i=2;
	printf ("整数%d的素因子为:",m);
	while (m>1)
		if (m%i==0)
		{
			printf ("%d ",i);
			m/=i;
		}
		else
			i++;
	printf ("\n");
}

void main (void)
{
	int m;
	printf ("请输入一个整数:\n");
	scanf ("%d",&m);
	prim(m);//该函数用于输出整数m的全部素因子
	getch();
}

