#include <stdio.h>
#include <conio.h>
#include <malloc.h> //malloc������ͷ�ļ�

void main(void)
{
	int* array;//����һ������ָ��array,����ʵ�ֶ�̬����
	int i,cnt;
	double ave=0;
	printf ("������Ҫ����������ĸ���:\n");
	scanf ("%d",&cnt);
	array=(int*)malloc(sizeof(int)*cnt);//��̬��������
	printf ("������%d������,�ո�ָ�,�س�����:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%d",&array[i]);
	for (i=0;i<cnt;i++)
		ave+=array[i];
	ave/=(double)cnt;
	printf ("��%d������ƽ��ֵΪ%lf\n",cnt,ave);
	free(array);//�����ͷ��ڴ�ռ�
	getch();
}


