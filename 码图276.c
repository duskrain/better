#include <stdio.h>

int main()
{
	double n;
	int i,num;
	scanf("%lf",&n);
	int a[100][3]={};
	if(n==0 || n>10)
	{
		printf("error");
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	num=1;
	re: ;
	for(i=0;i<n;i++)
	{
		if(num%a[i][0]==a[i][1])
		{
			if(i==n-1)
			{
				printf("%d",num);
				return 0;
			}
			continue;
		}
		else
		{
			num++;
			goto re;
		}
	}
	return 0;
}
