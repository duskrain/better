#include<stdio.h>

#define SIZE 4
	struct student
	{
		char num[21];
		int score;
	};
	typedef struct student STU;

    int main()
{
	int i,score_max=0,score_min=100;
	STU stu[SIZE];
	
	for(i=0;i<SIZE;i++)
	{
		scanf("%s%d",stu[i].num,&stu[i].score);
	}
	for(i=0;i<SIZE;i++)
	{
		if(stu[i].score>=score_max)
			score_max=stu[i].score;
		if(stu[i].score<=score_min)
			score_min=stu[i].score;
	}
	printf("%d\n",score_max);
	for(i=0;i<SIZE;i++)
	{
		if(stu[i].score==score_max)
			printf("%s\n",stu[i].num);
	}
	printf("%d\n",score_min);
	for(i=0;i<SIZE;i++)
	{
		if(stu[i].score==score_min)
	printf("%s\n",stu[i].num);
	}
	return 0;
}
