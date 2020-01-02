#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char c[31]={};
	int l,i;
	gets(c);
	l=strlen(c);
	if(l%2==0)
	{
		l=l/2;
		i=l-1;
	}
	else
	{
		l=(l+1)/2;
		i=l-2;
	}
	for(;i>=0;i--)
	{
		if(c[i]!=c[l])
		{
			printf("false");
			return 0;;
		}
		l++;
	}
	printf("true");
	return 0;
}
