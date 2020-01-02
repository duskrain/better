#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char a[22]={0};
	for(i=0;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{
			break;
		}
		if(a[i]>='a' && a[i]<='z')
		{
			a[i] += ('A'-'a');
		}
	}
	printf("%s",a);
	return 0;
}


//接收输入的一个字符串(无空格、制表符等)，
//将字符串中的小写字母转换为大写字母，输出转换后的字符串，最后必须输出回车。
//最长输入20个有效字符（不包括回车）。
//例如输入：apple 输出：APPLE
//如果字符串中包含了其他字符，均不进行转换，只转换小写字母为大写字母。
//如输入：test2test* 输出：TEST2TEST*
