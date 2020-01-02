#include <stdio.h>

int main() 
{
	int i,j;
	double n;
	double num[20]={0};
	char array[20]={0};
	for(i=0;;i++)
	{
		scanf("%lf",&num[i]);
		scanf("%c",&array[i]);
		if(array[i]==';')
		{
			n=num[0];
			break;
		}
		if(array[i]!='+' && array[i]!='-')
		{
			printf("error");
			return 0;
		}
	}
	for(j=0;j<i;j++)
	{
		switch (array[j])
		{
			case '+': {
				n += num[j+1];
				break;
			}
			case '-': {
				n -= num[j+1];
				break;
			}
		}
	}
	printf("%.6lf",n);
	return 0;
} 
