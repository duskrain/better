#include <stdio.h>
typedef struct Person{
   int age;
   int height;
}Person;

void swap(Person * array,int n)
{
	if(n<=0 || array<=0)
	{
		printf("error");
		return;
	}
	int l;
	l=array[0].height;
	array[0].height=array[n-1].height;
	array[n-1].height=l;
}
int main(int argc, char *argv[])
{
	
	return 0;
}
