#include <stdio.h>
#include <conio.h>

void main(void)
{
	int score,cnt=0;
	double ave=0;
	printf ("������ѧ���ĳɼ�,����-1��ʾ����:");
	scanf ("%d",&score);
	while (score != -1)
	{
		ave+=score;
		cnt++;
		if (score<60)
			printf ("��ѧ���ɼ�����60��,�ɼ�Ϊ%d\n",score);
		printf ("������ѧ���ĳɼ�,����-1��ʾ����:");
		scanf ("%d",&score);
	}
	if (cnt)
		printf ("��Щѧ����ƽ���ɼ�Ϊ%lf\n",(double)ave/cnt);
	else
		printf ("û��������Ч��ѧ���ɼ�\n");
	getch();
}
