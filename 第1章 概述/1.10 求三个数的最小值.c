#include <stdio.h>
#include <conio.h>

void main (void)
{
	int x,y,z,min;
	printf ("��������������,�ո����:\n");
	scanf ("%d %d %d",&x,&y,&z);
	if (x<y)//����x��y�еĽ�С��
		min=x;
	else
		min=y;
	if (z<min)//�ٽ�min��z���бȽ�
		min=z;
	printf ("��СֵΪ%d\n",min);
	getch();
}
