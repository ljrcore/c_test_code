#include <stdio.h>
#include <conio.h>

int sum(int n);//��������

int sum(int n)
{
	int s;
	if (n>1)
		s=n+sum(n-1);
	else
		s=1;//�ݹ���ֹ����
	return s;
}

void main (void)
{
	int n,s;
	printf ("������n��ֵ:\n");
	scanf ("%d",&n);
	s=sum(n);
	printf ("��Ϊ%d\n",s);
	getch();
}