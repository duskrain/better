#include <stdio.h>
void swap(int * array,int n)
{
	int l;
	if(n<=0 || array<=0)
	{
		printf("error");
	}
	l=array[0];
	array[0]=array[n-1];
	array[n-1]=l;
}
int main(int argc, char *argv[])    //²âÊÔÓÃ 
{
	int b=4;
	int a[5]={1,2213,3,421};
	swap(a,b);
	printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
	
	return 0;
}
