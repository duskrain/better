#include <stdio.h>
void find(int k)
{
	  int i,j; 
	   int sum=0;
	 int n=0;
	 	 int fz[10]={0};
for (i=1;i<=k;i++)
{
	 int fz[10]={0};
	for(j=1;j<i;j++)
	{
	if (i%j==0)
	   {
	   sum+=j;
	   }
    }
if (sum==i)
{
printf("%d=",i);
	for(j=2;j<=sum;j++)
	{
	while(sum%j==0)
	   {
	   fz[n]=j;
	   n++;
	   }
    }
for (j=0;j<=n-2;j++)
{
	printf("%d+",fz[j]);
}
printf("%d\n",fz[n-1]);
}
}
}

int main()
{
	int k;
	scanf("%d",&k);
	if(k>10000)
	k=8300;
	find(k);
}
