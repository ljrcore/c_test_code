#include <stdio.h>
#include <conio.h>

void main (void)
{
	int a,b,c,d,t;
	printf ("请输入4个整数,空格分隔,回车结束\n");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a>b) //这相当于冒泡排序法
	{
		t=a;
		a=b;
		b=t;//交换两个数
	}
	if (b>c)
	{
		t=b;
		b=c;
		c=t;//交换两个数
	}
	if (c>d)
	{
		t=c;
		c=d;
		d=t;//交换两个数
	}
	if (a>b)
	{
		t=a;
		a=b;
		b=t;//交换两个数
	}
	if (b>c)
	{
		t=b;
		b=c;
		c=t;//交换两个数
	}
	if (a>b)
	{
		t=a;
		a=b;
		b=t;//交换两个数
	}
	printf ("从小到大排列好的四个数为:%d %d %d %d\n",a,b,c,d);
	getch ();
}
