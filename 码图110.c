#include <stdio.h>
#include <string.h>
struct Student
{
	char name[21];
	int sex;
	int birthday;
	float height;
	int C;
	int Calculus;
}student[20];

int main(int argc, char *argv[])
{   
	int n,i,j,C_max=0,C_min=100,Calculus_max=0,Calculus_min=100,C_average=0,Calculus_average=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=0;(student[i].name[j]=getchar())!=' ';j++);
		student[i].name[j]='\0';
		scanf("%d %d %f %d %d",&student[i].sex,&student[i].birthday,&student[i].height,&student[i].C,&student[i].Calculus);
		C_average += student[i].C;
		Calculus_average += student[i].Calculus;
		C_max=(student[i].C>C_max)?student[i].C:C_max;
		C_min=(student[i].C<C_min)?student[i].C:C_min;
		Calculus_max=(student[i].Calculus>Calculus_max)?student[i].Calculus:Calculus_max;
		Calculus_min=(student[i].Calculus<Calculus_min)?student[i].Calculus:Calculus_min;
	}
	C_average /= n;
	Calculus_average /= n;
	
	printf("C_average:%d\nC_max:%d\n",C_average,C_max);
	for(i=1;i<=n;i++)
		if (student[i].C==C_max)
			printf("%s %d %d %.2f %d %d\n",student[i].name,student[i].sex,student[i].birthday,student[i].height,student[i].C,student[i].Calculus);
	printf("C_min:%d\nCalculus_average:%d\nCalculus_max:%d\n",C_min,Calculus_average,Calculus_max);
	for(i=1;i<=n;i++)
		if (student[i].Calculus==Calculus_max)
			printf("%s %d %d %.2f %d %d\n",student[i].name,student[i].sex,student[i].birthday,student[i].height,student[i].C,student[i].Calculus);
	printf("Calculus_min:%d\n",Calculus_min);
	return 0;
}


//编写学生管理系统，其中学生的信息有姓名（汉语拼音，最多20个字符），性别（男/女，用1表示男，2表示女）、
//生日（19850101（年月日））、身高（以m为单位），还需要处理C语言、微积分两门课的成绩，请编写程序实现功能：
//输入学生的人数和每个学生的信息；输出每门课程的总平均成绩、最高分和最低分，以及获得最高分的学生的信息。
//需要注意的是某门课程最高分的学生可能不只一人。
//
//输入输出格式要求：
//	身高输出时保留两位小数，请按照例子中进行输出，请勿输出其他字符
//例如：
//输入：3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90回车
//输出：
//C_average:87回车
//C_max:89回车
//lisi 1 19920202 1.56 89 88回车
//wangwu 2 19910303 1.60 89 90回车
//C_min:85回车
//Calculus_average:89回车
//Calculus_max:90回车
//zhangsan 1 19910101 1.85 85 90回车
//wangwu 2 19910303 1.60 89 90回车
//Calculus_min:88回车
