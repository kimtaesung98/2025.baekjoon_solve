#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, c,m;
	cin >> n >> c;
	int* arr = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> m;
		arr[i] = m;
	}
	sort(arr, arr + n);

	int left = arr[0];
	int right = arr[n - 1];
	int ans = 0;


}