#include <stdio.h>
#include <string.h>
int main()
{
	char a[20];
	char b[20];
	int i,t=2;
	printf("������a����\n");
	gets(a);
	printf("������b����\n");
	gets(b);
	for(i=0;;i++)
	{
		if(a[i]=='\0' && b[i]=='\0')
		{
			t=0;
			break;
		}
		if(a[i]<b[i] || a[i]=='\0')
		{
			t=-1;
			break;
		}
		if(a[i]>b[i] || b[i]=='\0')
		{
			t=1;
			break;
		}
	}
	printf("%d",t);
	return 0;
}
