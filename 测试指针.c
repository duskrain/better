#include <stdio.h> 
int main()
{
	char *point[]={"one","two","three","fourth"};
	point[2]=point[3];
    point[2]+=2;
	printf("%s\n",point[2]++);
	printf("%s",point[2]);
	return 0;
}

