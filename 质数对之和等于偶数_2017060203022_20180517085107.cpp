#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n,i,j;
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("Error");
		return 0;
	}
	for(i=3;i<n;i++)    //i<=2已不可能 
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				j=1;break;
			}
		}
		if(j!=1)
		{
			if(n-i<3)
			{
				continue;
			} 
			for(j=2;j<n-i;j++)
			{
				if((n-i)%j==0)
				{
					j=1;break;
				}
			}
			if(j!=1)
			{
				printf("%d+%d\n",i,n-i);
			}
		}
	}
	return 0;
}