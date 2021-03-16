#include <stdio.h>
#include <conio.h>

int cal(int x,int n);

int cal(int x,int n)
{
	int y;
	if (n>1)
		y=x*cal(x,n-1);
	else//递归终止条件
		y=x;
	return y;
}

void main(void)
{
	int x,n,y;
	printf ("请输入底数和质数,空格隔开:");
	scanf ("%d %d",&x,&n);
	y=cal(x,n);//该函数用于递归计算幂级数的值
	printf ("最终结果为%d\n",y);
	getch();
}
