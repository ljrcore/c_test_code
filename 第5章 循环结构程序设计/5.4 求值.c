#include <stdio.h>
#include <conio.h>

void main(void)
{
	double s=0;
	int i,t=1;
	for (i=1;i<=100;i++)
	{
		s+=t*1.0/i;
		t=-t;
	}
	printf ("���ս��Ϊ:%lf\n",s);
	getch();
}
