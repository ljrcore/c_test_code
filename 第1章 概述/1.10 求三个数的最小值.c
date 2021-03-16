#include <stdio.h>
#include <conio.h>

void main (void)
{
	int x,y,z,min;
	printf ("请输入三个整数,空格隔开:\n");
	scanf ("%d %d %d",&x,&y,&z);
	if (x<y)//先求x和y中的较小者
		min=x;
	else
		min=y;
	if (z<min)//再将min和z进行比较
		min=z;
	printf ("最小值为%d\n",min);
	getch();
}
