#include <stdio.h>
#include <conio.h>
#include <math.h>

int sum(int x,int n);

int sum(int x,int n)
{
	int s;
	if (n>1)
		s=(int)pow(-1,n-1)*(int)pow(x,n)+sum(x,n-1);
	else
		s=x;
	return s;
}

void main(void)
{
	int x,n,s;
	printf ("请输入底数x的值和项数n,空格隔开:\n");
	scanf ("%d %d",&x,&n);
	s=sum(x,n);
	printf ("函数的值为%d\n",s);
	getch();
}
