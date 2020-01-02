#include <stdio.h>
#include <string.h>
void * reversememcpy ( void * destination, const void * source, int num )
{ 
	if(!destination || !source || num<0 || num>strlen((const char*)source))
	{
		printf("error");
	}
	else
	{	
		char* dest_tmp=(char*)destination;
  		const char* src_tmp=(const char*)source;
    	dest_tmp+=num-1;
    	while(num--)
    	{
       		*dest_tmp--=*src_tmp++;
    	}
	}
	
    return destination;
}

//����һ��timeout 
int main()
{
	const char s[200]="wsrds";
	char sby[200]="";
	int i=2;
 	reversememcpy(sby,s,i);
 	printf("%s",sby);
	return 0;
}

//����ԭ�ͣ� void * reversememcpy ( void * destination, const void * source, int num );
//����Ҫ�� ��source��ָ���ڴ��ַ����ʼλ�ÿ�ʼ����num���ֽڣ����ֽ����򱣴浽Ŀ��destination��ָ���ڴ��ַ����ʼλ���С�
//����ֵ��Ϊdestination
//
//ע�⣺
//1. ������ʵ�ֵ��ǰ��ֽ����򿽱�������sourceָ��λ�ã�������α�����'a','b','c','d'����num=4ʱ�������򿽱���destinationָ���λ��Ӧ������'d','c','b','a'.
//2. ��Դ�ļ�����Ϊfunctions.cpp��
//3. �����쳣��������"error"������Ҫ�������������Ϊ����
