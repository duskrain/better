#include <stdio.h>
#include <string.h>

void insert(char * s1,char * s2, int n)
{
	int l;
	if(!s1||!s2||n<0)
	{
		printf("error");
		return;
	}
	for(l=0;s1[l]!=' ';l++);
	if(n>l)
	{
		printf("error");
		return;
	}
	char s3[200]={};
	s1 += n;
	if(n!=l)
		strcpy(s3,s1);
	for(;(*s1++=*s2++)!=' ';);
	if(n<l)
	{
		s1--;
		*s1='\0';
	}
	if(n!=l)
		strcat(s1,s3);
}

int main()
{
	char s[200]="Hello_ ",sa[200]="Good_morning! ";
	int i;
	scanf("%d",&i);
 	insert(s,sa,i);
 	printf("%s",s);
	return 0;
}
