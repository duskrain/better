#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=1 && n<=80 && n%2!=0)
	{
		int i,j;
		for(i=n;i>0;i-=2)
		{
			for(j=1;j<=(n-i)/2;j++)
			{
				cout<<" ";
			}
			for(j=1;j<=i;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"error"<<endl;
	}
	return 0;
}
