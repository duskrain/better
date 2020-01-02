#include <stdio.h>
#define SIZE 4
void in (int i);
struct student
	{
		char num[21];
		int score;
	};
	typedef struct student STU; 


int main() 
{
	int i=SIZE;
	STU stu[SIZE];
	in;
    for(i=0;i<=SIZE-1;i++)
	{
	    printf("%sµÄ³É¼¨Îª%d\n",stu[i].num,stu[i].score);
	}
	return 0;
}
void in (int i)
{
	int j;
	for(j=0;j<i;j++)
	{
		scanf("%s %d",stu[i].num,&stu[i].score);
	}
}
