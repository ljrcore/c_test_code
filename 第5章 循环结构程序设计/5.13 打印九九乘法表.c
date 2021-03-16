#include <Stdio.h>
#include <conio.h>

void main (void)
{
	int i,j;
	for (i=1;i<=9;i++)
	{
		for (j=1;j<=9;j++)
			printf ("%d * %d = %d ",i,j,i*j);
		printf ("\n");
	}
	getch();
}
