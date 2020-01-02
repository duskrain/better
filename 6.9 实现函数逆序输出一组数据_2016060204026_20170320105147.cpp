#include<iostream>

using namespace std;
void isort(int a[], int n);

//int main(){
//	int a[] = {5, 0, 3, 1, 2, 3, 4, 5};
//	isort(a, 8);
//}

void isort(int a[], int n){
	//int maxIndex, tmp;
	//for(int i = 0; i < n; i++){
	//	maxIndex = i;
	//	for(int j = i+1; j < n; j++){
	//		if(a[maxIndex] < a[j]){
	//			maxIndex = j;
	//		}
	//	}

	//	if(maxIndex != i){
	//		tmp = a[i];
	//		a[i] = a[maxIndex];
	//		a[maxIndex] = tmp;
	//	}

	//	cout<<a[i]<<",";
	//}

	for(int i = n-1; i > 0 ; i--)
		cout << a[i] << ",";

	cout<<a[0];
}