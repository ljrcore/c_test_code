#include <stdio.h>
#include <conio.h>

void main (void)
{
	int a[10],i,max,num;
	printf ("������10��ѧ���ĳɼ�,�ո�ָ�,�س�����:\n");
	for (i=0;i<10;i++)
		scanf ("%d",&a[i]);
	max=a[0];//��ʼ��maxΪ��һ��ֵ
	for (i=1;i<10;i++)
		if (a[i]>max)
		{
			max=a[i];
			num=i+1;
		}
	printf ("�ɼ�����ߵ����Ϊ%d,�ɼ�Ϊ%d\n",num,max);
	getch();
}
