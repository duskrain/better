#include <stdio.h>

int main()
{
	int a;
	while(a=getchar())
	{
		if(a=='\0' || a==' ' || a=='\n')
		{
			break;
		}
		printf("%c",a);
	}
	printf("\n");
}


//接收输入的一个字符串(无空格、制表符等)，
//原封不动输出该字符串，最后必须输出回车。
//最长输入20个有效字符（不包括回车）。
//例如输入：apple 输出：apple
//输入：test2test* 输出：test2test*
