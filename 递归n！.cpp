#include <iostream>
#include <math.h>
using namespace std;
int f(int n);

int main()
{
	int n;
	cin>>n;
	if(n<=12)
	{
		cout<<n<<"!="<<f(n)<<endl;
	}
	else
	{
		cout<<"12!="<<f(12)<<endl;
	}
	return 0;
}  

	int f(int n)
	{
		if(n==0)
		{
			return 1;
		}
		else
		{
			return n*f(n-1);
		}
	}
