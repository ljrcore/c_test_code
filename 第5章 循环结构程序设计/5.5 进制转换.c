#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void main(void)
{
	int t,a,i;
	char str[80];
	printf ("���������(2��8��16):\n");
	scanf ("%d",&t);
	if (t ==16)
	{
		printf ("������ʮ��������:");
		scanf ("%x",&a);
	}
	if (t ==8)
	{
		printf ("������˽�����:");
		scanf ("%o",&a);
	}
	if (t == 2)
	{
		a=0;
		printf ("�������������:");
		scanf ("%s",str);
		strrev(str);//��str����
		for (i=0;str[i];i++)
			a+=(str[i]-48)*(int)pow(2,i);
	}
	printf ("��Ӧ��ʮ������Ϊ:%d\n",a);
	getch();
}