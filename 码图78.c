#include <stdio.h>
#include <stdlib.h>
int a[200000];
int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b; 
}

int main(int argc, char *argv[])
{
	float n;
	int i,j,k,temp;
	scanf("%f",&n);
	if(n<=0 || n!=(int)n)
	{
		printf("ERROR");
		return 0;
	}
	for(i=0;i<(int)n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,(int)n,sizeof(a[1]),cmp);
	
	if((int)n%2==0)
	{
		printf("%d",a[(int)n/2-1]);
	}
	else
	{
		printf("%d",a[((int)n+1)/2-1]);
	}
	
	return 0;
}
