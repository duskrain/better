#include<iostream>
using namespace std;
void my_strcat(char * destination,const char * source)
{if(!destination||!source){cout<<"error";return;}
 for(;*destination!=' ';destination++);
 for(;(*destination++=*source++)!=' ';);
}
int main()
{char s[200]="Hello_ ",s1[200]="Good_morning! ";
 my_strcat(s,s1);
 cout<<s<<endl;
 return 0;
}
