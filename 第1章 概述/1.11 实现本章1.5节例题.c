#include <stdio.h>
#include <conio.h>

void main (void)
{
	int age,price,flag;//flag���ڱ�ʾ�ο��ǲ���ѧ��
	double ticket;
	printf ("�������ο�����:");
	scanf ("%d",&age);
	printf ("��������ͨƱ��:");
	scanf ("%d",&price);
	printf ("�������ο����,1��ʾ��ѧ��,0��ʾ����ѧ��:");
	scanf ("%d",&flag);
	if (age<=12)//��ͯƱ10Ԫ
		ticket=10;
	else
		if (age>=60)//����Ʊ�Ż�����
			ticket=price*0.3;
		else//��������ε��˰�����ݽ����ж�
			if (flag == 1)//��ѧ��,�Ż�����
				ticket=price*0.5;
			else//��ѧ��,��ͨƱ��
				ticket=price;
	printf ("����Ʊ��Ϊ%lfԪ\n",ticket);
	getch();
}


