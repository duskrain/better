/*ʵ�����ַ������ڲ�ɾ���ַ����ĺ���del������ԭ�����£�
void del(char * s,int n,int len) ;
��sָ����ַ����У���s��n���ַ���λ�ÿ�ʼ��ɾ��len���ַ�,���ͨ��ָ��s���ء�
n�Ǵ�0��ʼ����s�ĳ���-1Ϊֹ����0��ʼ��len=s���ַ�������ʱ��ȫ��ɾ����ԭ�ַ���Ϊ���ַ�����
ע�⣺ʹ�ÿո��ַ�����ʾ�ַ����Ľ�����
����sourceָ��λ�ã����α������ַ�'a'���ַ�'b'���ַ��ո�' '���ַ�'c'����sourceָ����ַ���Ϊ"ab"��
����Ϊfunctions.cpp��
�����쳣�����sΪnull��nΪ�����ȵȣ������"error"��
����Ҫ�������������Ϊ����
���磺sΪ�Կո��β���ַ���apple 
����del(s, 2, 2);֮��ɾ���������±���2��ʼ��2���ַ�pl�����Ϊ���Կո��β��
ape*/
#include<stdio.h>
#include<string.h>

void del(char* s, int n, int len)
{
//���� 
	//������� 5,6 s=null 
	if( !s || strlen(s)==0 )
	{
		printf("error");
		return;
	}
	//������� 7��9  apple��ab (9ʵ������sû�ı䵼��lenԽ��û����) 
	int k=0;
	//��Ȼ�õ����ַ����϶��Կո��β�ı�֤����ôk�����ո� 
	while(s[k]!=' ')
	{
		k++;	
	} 
	//apple�ո�ab->apple�ո� 
	//�������Һܾ� 
	while(s[k+1]==' ')
	{
		k++;
	}
	s[k+1]='\0';  
		
		
//ԭ�� 
	int str_len = strlen(s);
	//s������ n������ len������ n��len��������� 
	if (!str_len || n<0 || n>=str_len || len<0 || len>str_len || n+len-1>str_len-1 )
	{
		printf("error");
		return;
	}
	else
	{
		int i;
		for( i=n+len; i<=str_len; i++ )
		{
			s[i-len] = s[i]; 
		}
	}
}
