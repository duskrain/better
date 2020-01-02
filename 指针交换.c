#include <stdio.h>
#define SIZE 4
void swap(int *a,int*b);

	struct student
	{
		char num[21];
		int score;
	};
	typedef struct student STU; 

int main()
{
	int i,score_max=0;
	STU stu[SIZE];
	for(i=0;i<SIZE;i++)
	{
		scanf("%s %d",stu[i].num,&stu[i].score);
	}
    for(i=0;i<SIZE;i++)
	{
		if(stu[i].score>score_max)
		{
			swap(&stu[i].score,&score_max);
		}
	}
	printf("%d",score_max);
	return 0;
} 
void swap(int *a,int*b)
{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
}
