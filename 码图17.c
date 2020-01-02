#include <stdio.h>

int feibo(int n);

int main(int argc, char *argv[])
{
	int n,i=1,m=1;
	scanf("%d",&n);
	for(;n>=3;n--)
	{
		if(m<i)
		{
			m=m+i;
		}
		else
		{
			i=m+i;
		}
	}
	n=(m>i)?m:i;
	printf("%d",n);
	return 0;
}



//有一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第三个月后每个月又生一对兔子。
//假设所有的兔子都不死，问第n个月时有几对兔子。即求第n个Fibonacci数。
//例如输入1，输出1；
//输入2，输出1；
//输入3，输出2；
//输入4，输出3；
