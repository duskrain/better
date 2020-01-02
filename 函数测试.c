#include <stdio.h>
#define SIZE 4
void find(int a);

	struct student
	{
		char num[21];
		int score;
	};
	typedef struct student STU; 
	
	void find (int a)
	{     int i;
		  int b=1;
			for(i=0;i<SIZE;i++)
	{
		if(stu[i].score==a)
			{
			printf("yes,it's'%s\n",stu[i].num);
			b=0;
		    }
		    if(b=0)
		printf("not find");
	}

int main()
{
	int i,a;
	scanf("%d",&a);
	STU stu[SIZE];
	for(i=0;i<SIZE;i++)
	{
		scanf("%s %d",stu[i].num,&stu[i].score);
	}
    find(a);
	return 0;
} 

