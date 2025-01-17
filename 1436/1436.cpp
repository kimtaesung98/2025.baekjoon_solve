#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt = 0;
	int num = 666;
	int n; scanf_s("%d", &n);
	string stitle;
	while (1) {
		stitle = to_string(num);
		if (stitle.find("666") != -1) {
			cnt++;
			if (n == cnt) {
				printf("%d", num);
				break;
			}
		}
		num++;
	}
}