#include <stdio.h>
#include <conio.h>

void main (void)
{
	int a[20],i,cnt,t;
	printf ("������Ҫ�����Ԫ�صĸ���,���20��\n");
	scanf ("%d",&cnt);
	printf ("������%d��Ԫ��,�ո����,�س�����:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%d",&a[i]);
	for (i=0;i<cnt/2;i++)//ͨ������Ԫ����ʵ��
	{
		t=a[i];
		a[i]=a[cnt-1-i];
		a[cnt-1-i]=t;
	}
	printf ("��ɾ���Ե��������Ԫ��Ϊ:\n");
	for (i=0;i<cnt;i++)
		printf ("%d ",a[i]);
	printf ("\n");
	getch();
}
