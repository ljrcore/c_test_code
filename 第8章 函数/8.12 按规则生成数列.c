#include <stdio.h>
#include <conio.h>

void fun(int n,int* a);

void fun(int n,int* a)
{
	int i,tmp;
	a[0]=2;
	a[1]=3;
	for (i=2;i<10;i++)
	{
		tmp=a[i-2]*a[i-1];
		if (tmp<10)//说明是一位数
			a[i]=tmp;
		else//如果是两位数
		{
			a[i]=tmp/10%10;//获取十位
			a[i+1]=tmp%10;//获取个位
			i++;
		}
	}
}

void main (void)
{
	int n=10,a[10],i;
	fun(n,a);//该函数用于按规则生成该数列的前10项
	printf ("该数列的前10项为:\n");
	for (i=0;i<10;i++)
		printf ("%d ",a[i]);
	printf ("\n");
	getch();
}
