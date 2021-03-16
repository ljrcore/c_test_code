#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,ge,shi,bai;
	printf ("请输入一个整数:\n");
	scanf ("%d",&a);
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	printf ("该数的个位为%d,十位为%d,百位为%d\n",ge,shi,bai);
	getch();
}

