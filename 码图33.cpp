#include<iostream>
using namespace std;
void my_strcpy(char * destination,char * source)
{
	if(!destination||!source)
	{
		cout<<"error";
		return;
	}
	for(;(*destination++=*source++)!=' ';);
}
int main()
{
	char s[200]="ws",s1[200]="Good_morning! ";
	my_strcpy(s,s1);
	cout<<s<<endl;
	return 0;
}
