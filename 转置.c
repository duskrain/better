#include <stdio.h>

void move(int array[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",array[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int a[3][3]={0},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	move(a);
	return 0;
}
