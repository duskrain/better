#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c,*p;
	scanf("%d %d %d",&a,&b,&c);
	p=&a;
	if(*p<b)
	{
		p=&b;
	}
	if(*p<c)
	{
		p=&c;
	}
	printf("%d",*p);
	return 0;
}
