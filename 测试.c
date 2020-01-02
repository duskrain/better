#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int j,i=0;
	char a[]="ipod";
	i=strlen("ipod");
	j=strlen(a);
	printf("%d %5d\n",i,j);
	i=sizeof("ipod");
	j=sizeof(a);
	printf("%d %5d",i,j);
	return 0; 
}

