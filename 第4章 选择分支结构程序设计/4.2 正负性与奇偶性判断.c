#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a;
	printf ("������һ����0����\n");
	scanf ("%d",&a);
	if (a>0)
		printf ("����������\n");
	else
		printf ("�����Ǹ���\n");
	if (a%2)
		printf ("����������\n");
	else
		printf ("������ż��\n");
	getch ();
}