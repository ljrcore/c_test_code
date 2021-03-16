#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
	double a,b,c,S,area;
	printf ("请输入三角形的三边长,空格隔开,保证能组成三角形:\n");
	scanf ("%lf %lf %lf",&a,&b,&c);
	S=(a+b+c)/2;
	area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf ("三角形的面积为%lf\n",area);
	getch();
}