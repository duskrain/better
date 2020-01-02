#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k;
	int sum=0;
	int lf=0;
	for(i=1;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<10;k++)
			{
				sum=i*100+j*10+k;
				lf=pow(i,3)+pow(j,3)+pow(k,3);
				if(sum==lf)
				{
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
