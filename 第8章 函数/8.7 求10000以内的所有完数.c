#include <stdio.h>
#include <conio.h>

void fun(void);

void fun(void)
{
	int m,i,s;
	printf ("10000以内的所有完数为:\n");
	for (m=1;m<=10000;m++)
	{
		s=0;//这句话不能少,每次判断前必须重置s
		for (i=1;i<m;i++)
			if (m%i==0)
				s+=i;
		if (m==s)
			printf ("%d ",m);
	}
}

void main (void)
{
	fun();//该函数用于求10000以内的所有完数
	getch();
}