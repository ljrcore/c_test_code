#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
	double a,b,c,S,area;
	printf ("�����������ε����߳�,�ո����,��֤�����������:\n");
	scanf ("%lf %lf %lf",&a,&b,&c);
	S=(a+b+c)/2;
	area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf ("�����ε����Ϊ%lf\n",area);
	getch();
}