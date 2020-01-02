#include <stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	if (n>=1 && n<80 && n%2!=0)
	{
	     int i,j;
		 for(i=1;i<=n;i+=2)
		  {
		  	for(j=1;j<=(n-i)/2;j++)
		  	{
		  		printf(" ");
		  	}
		  	for(j=1;j<=i;j++)
		  	{
		  		printf("*");
		  	}
		  	printf("\n");
		  } 
	} 
	else
	 {
	     printf("error"); 
	 } 
	return 0;
}
