#include <stdio.h>
#include <conio.h>

void main (void)
{
	int grade;
	char y;
	printf ("请输入学生的学习成绩\n");
	scanf ("%d",&grade);
	y=grade>=90 ? 'A' : (grade>=70 ? 'B' : (grade>=60 ? 'C' : 'D'));
	printf ("等级为%c\n",y);
	getch();
}
