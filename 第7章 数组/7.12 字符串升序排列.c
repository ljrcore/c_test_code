#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (void)
{
	char s[20][80],t[80];
	int i,j,cnt;
	printf ("������Ҫ������ַ����ĸ���,���20��:\n");
	scanf ("%d",&cnt);
	printf ("������%d���ַ���(�����ո�),�س�����:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%s",s[i]);
	for (i=0;i<cnt-1;i++)//����ѡ�����򷨶��ַ��������ֵ���������
		for (j=i+1;j<cnt;j++)
			if (strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	printf ("�����Ľ��Ϊ:\n");
	for (i=0;i<cnt;i++)
		printf ("%s\n",s[i]);
	getch();
}

