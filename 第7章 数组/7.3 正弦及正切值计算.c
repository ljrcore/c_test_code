#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14

void main (void)
{
	double sinValue[91],tanValue[46];//���������������ڴ洢����õ�������ֵ������ֵ
	int i;
	for (i=0;i<91;i++)
		sinValue[i]=sin(i/180.0*PI);//ע��ǶȺͻ���֮��Ļ���
	for (i=0;i<46;i++)
		tanValue[i]=tan(i/180.0*PI);
	printf ("����õ�������ֵΪ:\n");
	for (i=0;i<91;i++)
		printf ("sin(%d��)=%lf\n",i,sinValue[i]);
	printf ("����õ�������ֵΪ:\n");
	for (i=0;i<46;i++)
		printf ("tan(%d��)=%lf\n",i,tanValue[i]);
	getch();
}
