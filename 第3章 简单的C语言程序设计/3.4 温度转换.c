#include <stdio.h>
#include <conio.h>

void main (void)
{
	double f,c;
	printf ("请输入一个华氏温度:\n");
	scanf ("%lf",&f);
	c=5*(f-32)/9;
	printf ("对应的摄氏温度为%.2lf\n",c);
	getch();
}
