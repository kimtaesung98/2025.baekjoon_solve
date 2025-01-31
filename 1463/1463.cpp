#include<iostream>
using namespace std;

int arr[1000001] = { 0 };

int main() {
	int n; scanf_s("%d", &n);
	arr[1] = 0;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0)arr[i] = min(arr[i / 2] + 1, arr[i]);
		if (i % 3 == 0)arr[i] = min(arr[i / 3] + 1, arr[i]);
	}

	printf("%d", arr[n]);
}