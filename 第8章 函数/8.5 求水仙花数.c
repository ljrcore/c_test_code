#include <Stdio.h>
#include <conio.h>

void fun(void);

void fun(void)
{
	int i,j,k,n;
	printf ("水仙花数是:\n");
	for (n=100;n<=999;n++)
	{
		i=n/100;//分解出百位
		j=n/10%10;//分解出十位
		k=n%10;//分解出个位
		if (n == i*i*i+j*j*j+k*k*k)
			printf ("%d ",n);
	}
	printf ("\n");
}

void main(void)
{
	fun();//该函数用于求出100到999之间的全部水仙花数
	getch();
}
