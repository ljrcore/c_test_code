#include <stdio.h>
#include <conio.h>
#include <string.h>

void main (void)
{
	char s[20][80],t[80];
	int i,j,cnt;
	printf ("请输入要输入的字符串的个数,最多20个:\n");
	scanf ("%d",&cnt);
	printf ("请输入%d个字符串(不带空格),回车结束:\n",cnt);
	for (i=0;i<cnt;i++)
		scanf ("%s",s[i]);
	for (i=0;i<cnt-1;i++)//利用选择排序法对字符串进行字典升序排列
		for (j=i+1;j<cnt;j++)
			if (strcmp(s[i],s[j])>0)
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
	printf ("排序后的结果为:\n");
	for (i=0;i<cnt;i++)
		printf ("%s\n",s[i]);
	getch();
}

