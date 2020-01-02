#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[56]={0};
	gets(a);
	i=strlen(a)-1;
	for(;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}


//输入一个字符串(无空格)，将字符串颠倒输出。最长50个字符。
//例如输入apple，输出elppa。

