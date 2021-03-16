#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (void)
{
	int a[11]={1,2,3,4,5,6,7,8,9,10,11},i,j,cnt;//数组a用于存储10次多项式的各项系数,按照题目要求应为11个,a0到a10直接通过赋初值的方式给定
	double x[20],p[20]={0};//x数组用于存储输入的自变量的值,p数组存储计算结果
	printf ("请输入要计算的结果的数量:\n");
	scanf ("%d",&cnt);
	printf ("请输入%d个自变量x的值,最多20个,空格分隔,回车结束:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%lf",&x[i]);
	for (i=0;i<cnt;i++)
		for (j=0;j<11;j++)
			p[i]+=a[j]*pow(x[i],10-j);
	printf ("计算得到的多项式的值为:\n");
	for (i=0;i<cnt;i++)
		printf ("%lf ",p[i]);
	printf ("\n");
	getch();
}




