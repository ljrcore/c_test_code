#include <stdio.h>
#include <conio.h>

void main(void)
{
	int a,ge,shi,bai;
	printf ("������һ������:\n");
	scanf ("%d",&a);
	ge=a%10;
	shi=a/10%10;
	bai=a/100%10;
	printf ("�����ĸ�λΪ%d,ʮλΪ%d,��λΪ%d\n",ge,shi,bai);
	getch();
}

