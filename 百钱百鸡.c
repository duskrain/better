#include <stdio.h>
int main()
{
	int a,b,c;
	char ch='a';
	for (a=0;a<20;a++)
	{ 
	for (b=0;b<34;b++)
	{ 
    c=100-a-b;
	if(c%3==0&&a*5+b*3+c/3==100)
	{
	printf("%c",ch);
	ch+=1;
	printf("%d,",a);
	printf("%c",ch);
	ch+=1;
	printf("%d,",b);
	printf("%c",ch);
	ch+=1;
	printf("%d\n",c);
    }
	} 
	} 
	return 0;
} 
