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


//���������һ���ַ���(�޿ո��Ʊ����)��
//ԭ�ⲻ��������ַ���������������س���
//�����20����Ч�ַ����������س�����
//�������룺apple �����apple
//���룺test2test* �����test2test*
