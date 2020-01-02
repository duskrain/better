#include<stdio.h>
#define size 4
	struct student
	{   
	    char name[21];
	    int sex;
		char num[21];
		float high;
		int score_c;
		int score_wjf;
	};
	typedef struct student STU;

    int main()
{
	int n;
    int sum=0,add=0;
	int i,score_max=0,score_min=100;
	scanf("%d",&n);
	STU stu[size];
	for(i=0;i<n;i++)
	{
		scanf("%s%d%s%f%d%d",stu[i].name,&stu[i].sex,&stu[i].num,&stu[i].high,&stu[i].score_c,&stu[i].score_wjf);
	}
	for(i=0;i<n;i++)
	{
		sum+=stu[i].score_c;
		add+=stu[i].score_wjf;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].score_c>=score_max)
			score_max=stu[i].score_c;
		if(stu[i].score_c<=score_min)
			score_min=stu[i].score_c;
	}
	printf("C_average:%d\n",sum/n);
	printf("C_max:%d\n",score_max);
	for(i=0;i<n;i++)
	{
		if(stu[i].score_c==score_max)
			printf("%s %d %s %.2f %d %d\n",stu[i].name,stu[i].sex,stu[i].num,stu[i].high,stu[i].score_c,stu[i].score_wjf);
	}
	printf("C_min:%d\n",score_min);
    score_max=0;
	score_min=100;
	for(i=0;i<n;i++)
	{
		if(stu[i].score_wjf>=score_max)
			score_max=stu[i].score_wjf;
		if(stu[i].score_wjf<=score_min)
			score_min=stu[i].score_wjf;
	}
	printf("Calculus_average:%d\n",add/n);
	printf("Calculus_max:%d\n",score_max);
	for(i=0;i<n;i++)
	{
		if(stu[i].score_c==score_max)
			printf("%s %d %s %.2f %d %d\n",stu[i].name,stu[i].sex,stu[i].num,stu[i].high,stu[i].score_c,stu[i].score_wjf);
	}
	printf("Calculus_min:%d\n",score_min);
	return 0;
}
