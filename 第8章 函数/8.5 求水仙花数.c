#include <Stdio.h>
#include <conio.h>

void fun(void);

void fun(void)
{
	int i,j,k,n;
	printf ("ˮ�ɻ�����:\n");
	for (n=100;n<=999;n++)
	{
		i=n/100;//�ֽ����λ
		j=n/10%10;//�ֽ��ʮλ
		k=n%10;//�ֽ����λ
		if (n == i*i*i+j*j*j+k*k*k)
			printf ("%d ",n);
	}
	printf ("\n");
}

void main(void)
{
	fun();//�ú����������100��999֮���ȫ��ˮ�ɻ���
	getch();
}
