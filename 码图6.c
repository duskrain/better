#include <stdio.h>
void maxInt(int * array,int n,int * result)
{
	int i;
	if(n<=0 || array<=0 || result<=0)
	{
		printf("error");
		return;
	}
	*result=*array;
	for(i=1;i<=n-1;i++)
	{
		if(*(array+i)>*result)
		{
			*result=*(array+i);
		}
	}
}
int main(int argc, char *argv[])
{
	
	return 0;
}
