#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,m,j;
	for(i=1;i<=1000;i++)
	{
		m=i;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				m-=j;
			}
		}
		if(!m)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

//一个数如果恰好等于它的因子之和，就被成为完数。
//例如6的因子为1,2,3，而6=1+2+3，所以6是一个完数。
//编程找出1-1000之间的所有完数，并按照从小到大的顺序输出，输出的每个数都必须以回车结尾。
