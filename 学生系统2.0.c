#include <stdio.h>
#define SIZE 4
void swap (int *a,int *b);
void in (stu); 
void find (stu); 
void mp(stu);
void pj (stu);

	struct student
	{
		char num[21];
		int score;
	};
	typedef struct student STU;
	
	void pj (stu)
	{
		int i,sum=0;
		float k;
		for (i=0;i<=SIZE;i++)
		{
			sum+=stu.score[i];
		}
		k=sum/SIZE;
		for(i=0;i<=SIZE-1;i++)
		{
			if(stu.score[i]<k)
			printf("%s的成绩为%d",stu.num[i],stu.score[i]);
		}
	}
	
	void mp (stu)
	{   int i,j;
	int temp;
		for(i=0;i<=SIZE-1;i++)
	{
		for(j=0;j<=SIZE-i;j++)
        {
        	 if(stu.score[j]>stu.score[j+1])
			{
				temp=stu.score[j+1];
				stu.score[j+1]=stu.score[j];
				stu.score[j]=temp;	
			}
        }
	}	
	for (i=0;i<=SIZE-1;i++)
	{
		printf("%d",stu[i].score)
	}	
	}
	
	void swap (int *a;int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}
	void in (stu)
	{   int i;
		for(i=0;i<SIZE;i++)
	{
		scanf("%s%d",stu[i].num,&stu[i].score);
	}
	}
	
	void find (stu)
	{     int i;
		  int a,b=1;
		  scanf("%d",&a);
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

	}

    int main()
{
	int i,score_max=0,score_min=100;
	STU stu[SIZE];
	
in;//读入 

find;//查找 

mp;//排序

pj;//平均 

	
	for(i=0;i<SIZE;i++)
	{
		if(stu[i].score>=score_max)
			swap(score_max&,&stu[i].score);
	}
	printf("%d\n",score_max);//输出最大成绩 (指针） 
	
	return 0;
}
