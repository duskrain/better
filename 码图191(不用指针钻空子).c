#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,a,b;
	scanf("%d",&a);
	for(i=1;i<=2;i++)
	{
		scanf("%d",&b);
		if(a<b)
		{
			a=b;
		}
	}
	printf("%d",a);
	return 0;
}

//输入3个整数，用指针指向最大整数并输出
//输入:
//1 2 3
//输出:
//3
