#include <stdio.h>
#include <conio.h>

void main (void)
{
	int age,price,flag;//flag用于表示游客是不是学生
	double ticket;
	printf ("请输入游客年龄:");
	scanf ("%d",&age);
	printf ("请输入普通票价:");
	scanf ("%d",&price);
	printf ("请输入游客身份,1表示是学生,0表示不是学生:");
	scanf ("%d",&flag);
	if (age<=12)//儿童票10元
		ticket=10;
	else
		if (age>=60)//老年票优惠三折
			ticket=price*0.3;
		else//其它年龄段的人按照身份进行判断
			if (flag == 1)//是学生,优惠五折
				ticket=price*0.5;
			else//非学生,普通票价
				ticket=price;
	printf ("最终票价为%lf元\n",ticket);
	getch();
}


