#include <stdio.h>
#include <conio.h>

void main (void)
{
	int a,b,c,d,t;
	printf ("������4������,�ո�ָ�,�س�����\n");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a>b) //���൱��ð������
	{
		t=a;
		a=b;
		b=t;//����������
	}
	if (b>c)
	{
		t=b;
		b=c;
		c=t;//����������
	}
	if (c>d)
	{
		t=c;
		c=d;
		d=t;//����������
	}
	if (a>b)
	{
		t=a;
		a=b;
		b=t;//����������
	}
	if (b>c)
	{
		t=b;
		b=c;
		c=t;//����������
	}
	if (a>b)
	{
		t=a;
		a=b;
		b=t;//����������
	}
	printf ("��С�������кõ��ĸ���Ϊ:%d %d %d %d\n",a,b,c,d);
	getch ();
}
