#include <stdio.h>
#include <conio.h>

void main (void)
{
	double f,c;
	printf ("������һ�������¶�:\n");
	scanf ("%lf",&f);
	c=5*(f-32)/9;
	printf ("��Ӧ�������¶�Ϊ%.2lf\n",c);
	getch();
}
