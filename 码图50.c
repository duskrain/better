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


//����һ���ַ���(�޿ո�)�����ַ����ߵ�������50���ַ���
//��������apple�����elppa��

