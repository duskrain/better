#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<=0 || b<=0 || c<=0)
	{
		printf("error");
		return 0;
	}
	if(a+b>c && c+a>b && b+c>a)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}


//�������������߳��ȣ��ж��Ƿ�Ϊ�����Ρ��ǣ����yes�������no���߳���Ϊ����ʱ�����error��
//���������ߵĳ����Զ��ŷָ������磺
//���룺1,2,3�س�
//�����no
