#include <stdio.h>
#include <conio.h>

void main (void)
{
	int a[20],i,cnt,t;
	printf ("请输入要输入的元素的个数,最多20个\n");
	scanf ("%d",&cnt);
	printf ("请输入%d个元素,空格隔开,回车结束:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%d",&a[i]);
	for (i=0;i<cnt/2;i++)//通过交换元素来实现
	{
		t=a[i];
		a[i]=a[cnt-1-i];
		a[cnt-1-i]=t;
	}
	printf ("完成镜像对调后的数组元素为:\n");
	for (i=0;i<cnt;i++)
		printf ("%d ",a[i]);
	printf ("\n");
	getch();
}
