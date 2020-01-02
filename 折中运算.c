#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int number[100];
	for(i=0;i<n-1;i++)
	   {
	   	scanf("%d,",&number[i]);
	   } 
	   scanf("%d",&number[n-1]);
	   int j;
	   scanf("%d",&j);
	   int min=0;
	   int mid;
	   int high=n-1;
	   mid=(min+high)/2;
	   while(min<=high)
	     {
	     	if(number[mid]==j)
	     	{
	     		printf("%d",mid+1);
	     		return 0;
	     	}
           else if(j>number[mid])
	     	  {
	     	  	min=mid+1;
		      }
		    else
			{
		    	high=mid-1;
		    }
		    mid=(min+high)/2;
	     }
	return 0;
}
