#include <stdio.h>
#include <conio.h>

struct student
{
	char num[20];//学号
	char name[20];//姓名
	int s1,s2,s3;//三门课成绩
	double ave;//平均成绩
};

void main(void)
{
	struct student stu[6],tmp;
	FILE* fp;
	int i,j;
	fp=fopen("stu_sort.txt","r");//以"读"方式打开文件
	for (i=0;i<5;i++)
		fscanf (fp,"%s %s %d %d %d %lf",stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3,&stu[i].ave);
	fclose(fp);
	printf ("请输入新的学生的学号、姓名、3门课成绩:\n");
	scanf ("%s %s %d %d %d",tmp.num,tmp.name,&tmp.s1,&tmp.s2,&tmp.s3);
	tmp.ave=(tmp.s1+tmp.s2+tmp.s3)/3.0;
	for (i=0;tmp.ave<stu[i].ave;i++)//寻找插入点,记为i
		;
	for (j=4;j>=i;j--)//向后移动元素
		stu[j+1]=stu[j];
	stu[i]=tmp;
	fp=fopen("stu_new.txt","w");//以"写"方式打开一个新的文件并写入新数据
	for (i=0;i<6;i++)
		fprintf (fp,"%s %s %d %d %d %lf\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].ave);
	fclose(fp);
	getch();
}

	

