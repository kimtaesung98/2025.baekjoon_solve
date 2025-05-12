#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sum = 0,result = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		result += sum;
	}
	cout << result;
	delete[] arr;
}