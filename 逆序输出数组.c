#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,t,n;
	char a[100];
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(a);
	n=strlen(a);
	
	for(i=0;i<=n/2;i++){
		t=a[i];
  		a[i]=a[n-1-i];
  		a[n-1-i]=t;
	}	
	for(j=0;j<n;j++)
		printf("%c",a[j]);
	  return 0;
 } 
