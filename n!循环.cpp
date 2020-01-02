#include <iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cin>>n;
	sum=1;
	for(i=1;i<=n;i++)
	{
		sum*=i;
	}
	
	cout<<n<<"!="<<sum<<endl;
	return 0;
}
