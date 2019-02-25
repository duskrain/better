/*输入为：需要替换的字符,替换后的字符,字符串，将字符串中需要替换的字符替换并输出
例如
输入：e,a,hello回车
输出：hallo回车
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
