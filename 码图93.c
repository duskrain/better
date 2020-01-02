#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int i,j,k=0,a[99],judge;
	a[k]='\0';
	for(i=2;i<=100;i++)
	{
		judge=1;
		for(j=0;a[j]!='\0';j++)
		{
			if(i%a[j]==0)
			{
				judge=0;
				break;
			}
		}
		if(judge)
		{
			a[k]=i;
			printf("%d,",i);
			a[++k]='\0';
		}
	}
	return 0;
}
