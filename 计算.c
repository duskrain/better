#include <stdio.h>
int main()
{
	int n,i;
	float k=1;
	float x,sum=1;
	scanf("%f %d",&x,&n);
	i=1;
	while (i<=n)
	{
		k=k*(-1)*x/i;
		sum=sum+k;
		i++;
	}
	printf("%f",sum);
	return 0;
} 
