/*����Ϊ����Ҫ�滻���ַ�,�滻����ַ�,�ַ��������ַ�������Ҫ�滻���ַ��滻�����
����
���룺e,a,hello�س�
�����hallo�س�
*/
#include<stdio.h>
#include<string.h>
#include<cstdio>
#include <iostream>
using namespace std;
int main(){
	char a;
	char b;
	char c[100];
	cin>>a;
	cin>>b;
    cin>>c;
	for(int i=0;i<strlen(c);i++){
		if(c[i]==a){
			c[i]=b;
		}
	}
	cout<<c;
	return 0;
}
