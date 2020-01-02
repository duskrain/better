#include <iostream>
using namespace std;
void * reversememcpy ( void * destination, const void * source, int num )
{
	if(!destination || !source || num<0)
	{
		cout<<"error";
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
	char s[200]="wsrdsd",sa[200]="";
	int i=4;
 	reversememcpy(sa,s,i);
 	cout<<sa<<endl;
	return 0;
}
