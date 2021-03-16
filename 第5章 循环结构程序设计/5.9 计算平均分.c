#include <stdio.h>
#include <conio.h>

void main(void)
{
	int score,cnt=0;
	double ave=0;
	printf ("请输入学生的成绩,输入-1表示结束:");
	scanf ("%d",&score);
	while (score != -1)
	{
		ave+=score;
		cnt++;
		if (score<60)
			printf ("该学生成绩低于60分,成绩为%d\n",score);
		printf ("请输入学生的成绩,输入-1表示结束:");
		scanf ("%d",&score);
	}
	if (cnt)
		printf ("这些学生的平均成绩为%lf\n",(double)ave/cnt);
	else
		printf ("没有输入有效的学生成绩\n");
	getch();
}
