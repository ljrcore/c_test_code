#include <stdio.h>
#include <conio.h>

struct student
{
	char num[20];//ѧ��
	char name[20];//����
	int s1,s2,s3;//���ſγɼ�
	double ave;//ƽ���ɼ�
};

void main(void)
{
	struct student stu[6],tmp;
	FILE* fp;
	int i,j;
	fp=fopen("stu_sort.txt","r");//��"��"��ʽ���ļ�
	for (i=0;i<5;i++)
		fscanf (fp,"%s %s %d %d %d %lf",stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3,&stu[i].ave);
	fclose(fp);
	printf ("�������µ�ѧ����ѧ�š�������3�ſγɼ�:\n");
	scanf ("%s %s %d %d %d",tmp.num,tmp.name,&tmp.s1,&tmp.s2,&tmp.s3);
	tmp.ave=(tmp.s1+tmp.s2+tmp.s3)/3.0;
	for (i=0;tmp.ave<stu[i].ave;i++)//Ѱ�Ҳ����,��Ϊi
		;
	for (j=4;j>=i;j--)//����ƶ�Ԫ��
		stu[j+1]=stu[j];
	stu[i]=tmp;
	fp=fopen("stu_new.txt","w");//��"д"��ʽ��һ���µ��ļ���д��������
	for (i=0;i<6;i++)
		fprintf (fp,"%s %s %d %d %d %lf\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,stu[i].s3,stu[i].ave);
	fclose(fp);
	getch();
}

	

