#include <stdio.h>
#include <conio.h>

int cal(int x,int n);

int cal(int x,int n)
{
	int y;
	if (n>1)
		y=x*cal(x,n-1);
	else//�ݹ���ֹ����
		y=x;
	return y;
}

void main(void)
{
	int x,n,y;
	printf ("���������������,�ո����:");
	scanf ("%d %d",&x,&n);
	y=cal(x,n);//�ú������ڵݹ�����ݼ�����ֵ
	printf ("���ս��Ϊ%d\n",y);
	getch();
}
