#include <stdio.h>
#include <conio.h>

void fun(void);

void fun(void)
{
	int m,i,s;
	printf ("10000���ڵ���������Ϊ:\n");
	for (m=1;m<=10000;m++)
	{
		s=0;//��仰������,ÿ���ж�ǰ��������s
		for (i=1;i<m;i++)
			if (m%i==0)
				s+=i;
		if (m==s)
			printf ("%d ",m);
	}
}

void main (void)
{
	fun();//�ú���������10000���ڵ���������
	getch();
}