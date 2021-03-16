#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;
	printf ("请输入一个非0整数\n");
	scanf ("%d",&a);
	if (a>0)
		printf ("该数是正数\n");
	else
		printf ("该数是负数\n");
	if (a%2)
		printf ("该数是奇数\n");
	else
		printf ("该数是偶数\n");
	getch ();
}