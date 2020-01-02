#include <stdio.h>

int main()
{
	int m,n,ia,ib;
	scanf("%d %d",&m,&n);
	for(ia=1;ia<=m && ia<=n;ia++)
	{
		if(m%ia==0 && n%ia==0)
		{
			ib=ia;
		}
	}
	printf("%d,",ib);
	ia=(m>n)?m:n;
	for(;;ia++)
	{
		if(ia%m==0 && ia%n==0)
		{
			printf("%d",ia);
			return 0;
		}
	}
}



//输入2个整数（空格区分），输出最大公约数和最小公倍数（，逗号区分）
//例如输入5空格10，输出应为5,10
