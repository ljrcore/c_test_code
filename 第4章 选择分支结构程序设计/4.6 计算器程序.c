#include <stdio.h>
#include <conio.h>

void main (void)
{
	double a,b,c;
	char op;//op��ʾ�����
	printf ("����������������,�ո����\n");
	scanf ("%lf %lf",&a,&b);
	fflush(stdin);//��仰����Ҫ��,��ջ�����m��������������������scanf����޷���������
	printf ("�����������\n");
	scanf ("%c",&op);
	switch(op)
	{
	case '+':c=a+b;break;
	case '-':c=a-b;break;
	case '*':c=a*b;break;
	case '/':c=a/b;break;
	}
	printf ("������Ϊ%lf\n",c);
	getch();
}
