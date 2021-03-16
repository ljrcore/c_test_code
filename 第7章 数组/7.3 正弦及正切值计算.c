#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14

void main (void)
{
	double sinValue[91],tanValue[46];//定义两个数组用于存储计算得到的正弦值和正切值
	int i;
	for (i=0;i<91;i++)
		sinValue[i]=sin(i/180.0*PI);//注意角度和弧度之间的换算
	for (i=0;i<46;i++)
		tanValue[i]=tan(i/180.0*PI);
	printf ("计算得到的正弦值为:\n");
	for (i=0;i<91;i++)
		printf ("sin(%d度)=%lf\n",i,sinValue[i]);
	printf ("计算得到的正切值为:\n");
	for (i=0;i<46;i++)
		printf ("tan(%d度)=%lf\n",i,tanValue[i]);
	getch();
}
