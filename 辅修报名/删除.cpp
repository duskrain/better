/*实现在字符串的内部删除字符串的函数del。函数原型如下：
void del(char * s,int n,int len) ;
在s指向的字符串中，从s第n个字符的位置开始，删除len个字符,结果通过指针s返回。
n是从0开始，到s的长度-1为止。从0开始，len=s的字符串长度时，全部删除，原字符串为空字符串。
注意：使用空格字符来表示字符串的结束。
例如source指向位置，依次保存了字符'a'，字符'b'，字符空格' '，字符'c'，则source指向的字符串为"ab"。
保存为functions.cpp。
遇到异常情况（s为null，n为负数等等），输出"error"；
否则不要随意输出，会视为错误。
例如：s为以空格结尾的字符串apple 
调用del(s, 2, 2);之后，删除了数组下标以2开始的2个字符pl，结果为（以空格结尾）
ape*/
#include<stdio.h>
#include<string.h>

void del(char* s, int n, int len)
{
//新增 
	//解决问题 5,6 s=null 
	if( !s || strlen(s)==0 )
	{
		printf("error");
		return;
	}
	//解决问题 7，9  apple空ab (9实质上是s没改变导致len越界没报错) 
	int k=0;
	//既然得到了字符串肯定以空格结尾的保证，那么k锁定空格 
	while(s[k]!=' ')
	{
		k++;	
	} 
	//apple空格ab->apple空格 
	//会往后找很久 
	while(s[k+1]==' ')
	{
		k++;
	}
	s[k+1]='\0';  
		
		
//原版 
	int str_len = strlen(s);
	//s有问题 n有问题 len有问题 n，len组合有问题 
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
