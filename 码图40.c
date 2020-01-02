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

//还有一组timeout 
int main()
{
	const char s[200]="wsrds";
	char sby[200]="";
	int i=2;
 	reversememcpy(sby,s,i);
 	printf("%s",sby);
	return 0;
}

//函数原型： void * reversememcpy ( void * destination, const void * source, int num );
//功能要求： 从source所指的内存地址的起始位置开始拷贝num个字节，按字节逆序保存到目标destination所指的内存地址的起始位置中。
//返回值：为destination
//
//注意：
//1. 本函数实现的是按字节逆序拷贝。例如source指向位置，如果依次保存了'a','b','c','d'，当num=4时，则逆序拷贝后destination指向的位置应该依次'd','c','b','a'.
//2. 将源文件命名为functions.cpp。
//3. 遇到异常情况，输出"error"；否则不要随意输出，会视为错误。
