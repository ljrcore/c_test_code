#include <stdio.h>
#include <conio.h>

void fun(int n,int* a);

void fun(int n,int* a)
{
	int i,tmp;
	a[0]=2;
	a[1]=3;
	for (i=2;i<10;i++)
	{
		tmp=a[i-2]*a[i-1];
		if (tmp<10)//˵����һλ��
			a[i]=tmp;
		else//�������λ��
		{
			a[i]=tmp/10%10;//��ȡʮλ
			a[i+1]=tmp%10;//��ȡ��λ
			i++;
		}
	}
}

void main (void)
{
	int n=10,a[10],i;
	fun(n,a);//�ú������ڰ��������ɸ����е�ǰ10��
	printf ("�����е�ǰ10��Ϊ:\n");
	for (i=0;i<10;i++)
		printf ("%d ",a[i]);
	printf ("\n");
	getch();
}
