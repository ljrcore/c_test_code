#include <stdio.h>
#include <conio.h>

void main (void)
{
	int grade;
	char y;
	printf ("������ѧ����ѧϰ�ɼ�\n");
	scanf ("%d",&grade);
	y=grade>=90 ? 'A' : (grade>=70 ? 'B' : (grade>=60 ? 'C' : 'D'));
	printf ("�ȼ�Ϊ%c\n",y);
	getch();
}
