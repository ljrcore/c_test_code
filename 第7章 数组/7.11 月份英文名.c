#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(void)
{
	char month[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};//�ö�ά�ַ��������ڴ洢12���·ݵ�Ӣ������
	int num;
	printf ("�������·ݺ�:\n");
	scanf ("%d",&num);
	while (num) //���벻Ϊ0ʱ����ѭ��
	{
		if (num<0 || num>12)
			printf ("������Ϣ����,����������\n");
		else
			printf ("���·ݵ�Ӣ������Ϊ%s\n",month[num-1]);
		printf ("�������·ݺ�:\n");
		scanf ("%d",&num);
	}
	printf ("�������\n");
	getch();
}

