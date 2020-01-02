#include <stdio.h>
#include <string.h>
void isort(int a[], int n)
{
	int t,i;
	for(i=0;i<=(n/2);i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(i=0;i<n;i++)
		printf("%c,",a[i]);
}
int main()
{
	int a[100];
	int n;
	gets(a);
	n=strlen(a);
	isort;
	return 0;
}
