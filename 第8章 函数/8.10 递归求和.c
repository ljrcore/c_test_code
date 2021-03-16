#include <stdio.h>
#include <conio.h>

int sum(int n);//函数声明

int sum(int n)
{
	int s;
	if (n>1)
		s=n+sum(n-1);
	else
		s=1;//递归终止条件
	return s;
}

void main (void)
{
	int n,s;
	printf ("请输入n的值:\n");
	scanf ("%d",&n);
	s=sum(n);
	printf ("和为%d\n",s);
	getch();
}