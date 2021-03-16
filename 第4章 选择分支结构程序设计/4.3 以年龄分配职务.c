#include <stdio.h>
#include <conio.h>

void main (void)
{
	int age;
	printf ("请输入员工的年龄:\n");
	scanf ("%d",&age);
	if (age >= 22 && age <= 30)
		printf ("该员工担任外勤业务员\n");
	else //在该else下,已经默认age是比30要大的
		if (age <= 45)
			printf ("该员工担任内勤文员\n");
		else
			if (age <= 55)
				printf ("该员工担任仓库管理员\n");
			else//当年龄大于56岁时
				printf ("该员工退休\n");
	getch();
}

