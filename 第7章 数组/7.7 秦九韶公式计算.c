#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (void)
{
	int a[11]={1,2,3,4,5,6,7,8,9,10,11},i,j,cnt;//����a���ڴ洢10�ζ���ʽ�ĸ���ϵ��,������ĿҪ��ӦΪ11��,a0��a10ֱ��ͨ������ֵ�ķ�ʽ����
	double x[20],p[20]={0};//x�������ڴ洢������Ա�����ֵ,p����洢������
	printf ("������Ҫ����Ľ��������:\n");
	scanf ("%d",&cnt);
	printf ("������%d���Ա���x��ֵ,���20��,�ո�ָ�,�س�����:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%lf",&x[i]);
	for (i=0;i<cnt;i++)
		for (j=0;j<11;j++)
			p[i]+=a[j]*pow(x[i],10-j);
	printf ("����õ��Ķ���ʽ��ֵΪ:\n");
	for (i=0;i<cnt;i++)
		printf ("%lf ",p[i]);
	printf ("\n");
	getch();
}




