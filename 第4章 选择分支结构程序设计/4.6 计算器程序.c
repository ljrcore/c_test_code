#include <stdio.h>
#include <conio.h>

void main (void)
{
	double a,b,c;
	char op;//op表示运算符
	printf ("请输入两个运算数,空格隔开\n");
	scanf ("%lf %lf",&a,&b);
	fflush(stdin);//这句话必须要有,清空缓冲区m否则下面的输入操作符的scanf语句无法正常运行
	printf ("请输入运算符\n");
	scanf ("%c",&op);
	switch(op)
	{
	case '+':c=a+b;break;
	case '-':c=a-b;break;
	case '*':c=a*b;break;
	case '/':c=a/b;break;
	}
	printf ("计算结果为%lf\n",c);
	getch();
}
