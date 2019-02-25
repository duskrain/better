#include <iostream>
#include <math.h>

using namespace std;

int judge(int x);

int main() {
	int n;
	int i;
	int k = 0;
	int a[100001] = { 0 };
	cin >> n;
	for (i = 2; i <= n; i++) {
		if (judge(i) == 1) {
			a[k] = i;
			k++;
		}
	}
	for (i = 0; i < k-1; i++) {
		cout << a[i] << ",";
}
	cout << a[k - 1] << endl;
	return 0;
}

int judge(int x) {
	if (x < 2) {
		return 0;
	}
	else {
		for (int i = 2; i <= sqrt((float)x); i++) {
			if (x%i == 0) {
				return 0;
			}
		}
		return 1;
	}
}
