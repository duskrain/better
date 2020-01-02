#include <stdio.h>
void printSize(int * first,int * last)
{
	int n;
	n=last-first+1;
	if(n<=0 || last<=0 || first<=0)
	{
		printf("error");
		return;
	}
	printf("%d,%d\n",n,4*n);
} 
int main(int argc, char *argv[])
{
	
	return 0;
}
