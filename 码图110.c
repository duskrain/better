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


//��дѧ������ϵͳ������ѧ������Ϣ������������ƴ�������20���ַ������Ա���/Ů����1��ʾ�У�2��ʾŮ����
//���գ�19850101�������գ�������ߣ���mΪ��λ��������Ҫ����C���ԡ�΢�������ſεĳɼ������д����ʵ�ֹ��ܣ�
//����ѧ����������ÿ��ѧ������Ϣ�����ÿ�ſγ̵���ƽ���ɼ�����߷ֺ���ͷ֣��Լ������߷ֵ�ѧ������Ϣ��
//��Ҫע�����ĳ�ſγ���߷ֵ�ѧ�����ܲ�ֻһ�ˡ�
//
//���������ʽҪ��
//	������ʱ������λС�����밴�������н��������������������ַ�
//���磺
//���룺3 zhangsan 1 19910101 1.85 85 90 lisi 1 19920202 1.56 89 88 wangwu 2 19910303 1.6 89 90�س�
//�����
//C_average:87�س�
//C_max:89�س�
//lisi 1 19920202 1.56 89 88�س�
//wangwu 2 19910303 1.60 89 90�س�
//C_min:85�س�
//Calculus_average:89�س�
//Calculus_max:90�س�
//zhangsan 1 19910101 1.85 85 90�س�
//wangwu 2 19910303 1.60 89 90�س�
//Calculus_min:88�س�
