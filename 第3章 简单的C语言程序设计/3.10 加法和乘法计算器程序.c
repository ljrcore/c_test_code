#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,b,sum,mul;
	printf ("请输入两个整数,空格隔开:\n");
	scanf ("%d %d",&a,&b);
	sum=a+b;
	mul=a*b;
	printf ("两个数的和为%d,积为%d\n",sum,mul);
	getch();
}