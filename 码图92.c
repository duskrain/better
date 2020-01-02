#include<stdio.h> 
#include<math.h>
int main()
{
	long long int k,m,n;
	scanf("%lld",&m);
	k=1;
	n=pow(2,(double)k);
	while(n<m)
 		{
		k=k+1;
		n=pow(2,(double)k);
		}
		if(n>m)
			k=k-1;	
	printf("%lld",k);	
}
