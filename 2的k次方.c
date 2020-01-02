#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int m;
	scanf("%u",&m);
	unsigned int j;
	long long int k=0;
    for(j=0;k<=m;j++)
    {
    	k=pow(2,(double)j);
    }
    printf("%u",j-2);
	return 0;
}
