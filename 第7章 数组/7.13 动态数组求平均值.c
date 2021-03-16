#include <stdio.h>
#include <conio.h>
#include <malloc.h> //malloc函数的头文件

void main(void)
{
	int* array;//定义一个整型指针array,用于实现动态数组
	int i,cnt;
	double ave=0;
	printf ("请输入要输入的整数的个数:\n");
	scanf ("%d",&cnt);
	array=(int*)malloc(sizeof(int)*cnt);//动态申请数组
	printf ("请输入%d个整数,空格分隔,回车结束:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%d",&array[i]);
	for (i=0;i<cnt;i++)
		ave+=array[i];
	ave/=(double)cnt;
	printf ("折%d个数的平均值为%lf\n",cnt,ave);
	free(array);//必须释放内存空间
	getch();
}


