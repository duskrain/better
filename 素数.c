#include <stdio.h>
#include <math.h> 
int main()
{
int n;
	scanf("%d",&n);
	if(n>3)
	{
		long long int i; 
		int N;
		N=sqrt((double)n)+1;
	 for (i=2;i<=N;i++)
	 {
	 if (n%i==0)
	  { 
	   printf("no");
	   return 0;
      } 
     }
    printf("yes");
    return 0;
    }
    else 
    { 
    printf("error");
    } 
return 0;
}
 

