#include <stdio.h>
#include <conio.h>

void prin(int m);

void prim(int m)
{
	int i=2;
	printf ("����%d��������Ϊ:",m);
	while (m>1)
		if (m%i==0)
		{
			printf ("%d ",i);
			m/=i;
		}
		else
			i++;
	printf ("\n");
}

void main (void)
{
	int m;
	printf ("������һ������:\n");
	scanf ("%d",&m);
	prim(m);//�ú��������������m��ȫ��������
	getch();
}

