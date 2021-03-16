#include <stdio.h>
#include <conio.h>

void main(void)
{
	char ch;
	printf ("请输入一个大写字母:\n");
	ch=getchar();
	printf ("转换成小写字母为:\n");
	putchar(ch+32);
	getch();
}
