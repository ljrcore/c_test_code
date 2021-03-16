#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main(void)
{
	int t,a,i;
	char str[80];
	printf ("请输入进制(2或8或16):\n");
	scanf ("%d",&t);
	if (t ==16)
	{
		printf ("请输入十六进制数:");
		scanf ("%x",&a);
	}
	if (t ==8)
	{
		printf ("请输入八进制数:");
		scanf ("%o",&a);
	}
	if (t == 2)
	{
		a=0;
		printf ("请输入二进制数:");
		scanf ("%s",str);
		strrev(str);//将str逆置
		for (i=0;str[i];i++)
			a+=(str[i]-48)*(int)pow(2,i);
	}
	printf ("对应的十进制数为:%d\n",a);
	getch();
}