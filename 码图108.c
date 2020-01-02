#include <stdio.h>
#include <string.h>

char c[2000000];
int main(int argc, char *argv[])
{
	long long int i;
	for(i=0;(c[i]=getchar())!='\n';i++);
	for(i=i-1;i>=0;i--)
	{
		printf("%c",c[i]);
	}
	return 0;
}
