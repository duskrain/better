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



//����2���������ո����֣���������Լ������С�����������������֣�
//��������5�ո�10�����ӦΪ5,10
