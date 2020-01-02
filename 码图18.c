#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	if(n>=3)
	{
		long long int i;
		for(i=2;i<=sqrt((double)n)+1;i++)
		{
			if(n%i==0)
			{
				printf("no");
				return 0;
			}
		}
		printf("yes");
		return 0;
	}
	else
	{
		printf("error");
	}	 
	return 0;
}
