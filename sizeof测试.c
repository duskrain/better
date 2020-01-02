#include <stdio.h>
#include <string.h>
int main()
{
char a[100000]={"0.0000001"}; 
int o,i;
	o=strlen(a);
	i=sizeof(a);
	printf("%d,%d",o,i);
	return 0;
}
