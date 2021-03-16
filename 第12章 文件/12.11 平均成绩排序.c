#include <stdio.h>
#include <conio.h>

struct student
{
	char num[20];//学号
	char name[20];//姓名
	int s1,s2,s3;//三门课成绩
	double ave;//平均成绩
};

void main (void)
{
	struct student stu[5],t;
	FILE* fp;
	int i,j;
	fp=fopen("stu_list.txt","r");//以"读"方式打开文件
	for (i=0;i<5;i++)
		fscanf (fp,"%s %s %d %d %d %lf",stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3,&stu[i].ave);
	fclose(fp);
	for (i=0;i<4;i++)
		for (j=i+1;j<5;j++)
			if (stu[i].ave<stu[j].ave)//按平均分从大到小排列
			{
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;
			}
	fp=fopen("stu_sort.txt","w");
	for (i=0;i<5;i++)
		fprintf (fp,"%s %s %d %d %d %lf\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].ave);
	fclose(fp);
	getch();
}

