#include <stdio.h>
int main()
{
	int a,b,c,v;
	scanf("%d %d %d", &a,&b,&c);
	v=volume(a,b,c);
	printf("%d\n",v);
	return 0;
}
int volume
(int a,int b,int c)
{
	int p;
	p=a*b*c;
	return(p);
}
