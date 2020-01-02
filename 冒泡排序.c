#include <stdio.h>
#define N 10
int main()
{
	int str[N]={0};
	int i,j;
	int temp;
	for(i=0;i<=N-1;i++)
	{
		scanf("%d",&str[i]);
	}
	for(i=0;i<=N-1;i++)
	{
		for(j=0;j<=N-i;j++)
		{
			if(str[j]>str[j+1])
			{
				temp=str[j+1];
				str[j+1]=str[j];
				str[j]=temp;	
			}
		}
	}
	for(i=0;i<=N-1;i++)
	{
		printf("%d ",str[i]);
	}
	return 0;
} 
