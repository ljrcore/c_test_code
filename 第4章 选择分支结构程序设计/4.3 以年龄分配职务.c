#include <stdio.h>
#include <conio.h>

void main (void)
{
	int age;
	printf ("������Ա��������:\n");
	scanf ("%d",&age);
	if (age >= 22 && age <= 30)
		printf ("��Ա����������ҵ��Ա\n");
	else //�ڸ�else��,�Ѿ�Ĭ��age�Ǳ�30Ҫ���
		if (age <= 45)
			printf ("��Ա������������Ա\n");
		else
			if (age <= 55)
				printf ("��Ա�����βֿ����Ա\n");
			else//���������56��ʱ
				printf ("��Ա������\n");
	getch();
}

