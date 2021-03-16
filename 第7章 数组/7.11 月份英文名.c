#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
{
	char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};//该二维字符数组用于存储12个月份的英文名称
	int num;
	printf ("请输入月份号:\n");
	scanf ("%d",&num);
	while (num) //输入不为0时进行循环
	{
		if (num<0 || num>12)
			printf ("输入信息有误,请重新输入\n");
		else
			printf ("该月份的英文名称为%s\n",month[num-1]);
		printf ("请输入月份号:\n");
		scanf ("%d",&num);
	}
	printf ("程序结束\n");
	getch();
}

