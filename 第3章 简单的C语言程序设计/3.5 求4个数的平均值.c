#include <stdio.h>
#include <conio.h>

void main(void)
{
	double a,b,c,d,ave;
	printf ("请输入4个数,空格隔开:\n");
	scanf ("%lf %lf %lf %lf",&a,&b,&c,&d);
	ave=(a+b+c+d)/4;
	printf ("平均值为%lf\n",ave);
	getch();
}
