#include<iostream>

using namespace std;

void find(int j);
void judge(int n);

/*int main(){
	int j;
	cin>>j;
	find(j);
}*/

void find(int j){
	for(int i = 6; i<= j; i++)
		judge(i);
}

void judge(int n){
	int * a = new int[n-1];
	int count = 1;
	int sum = 0;
	a[0] = 1;
	for(int i = 2; i < n-1; i++ ){
		if(n % i == 0){
			a[count] = i;
			count ++;
		}
	}

	for(int i = 0; i < count ; i++)
		sum += a[i];

	if(sum == n){
		cout<<n<<"=";
		for(int i = 0; i < count ; i++){
			cout<<a[i];
			if(i<count-1)
				cout<<"+";
			else
				cout<<endl;
		}
	}
		
}
