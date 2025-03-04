#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main() {
	int n, m; scanf_s("%d ", &n);
	stack<int> s;
	string result;

	int index = 1;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &m);
		while (index <= m) {
			//printf("index : ");
			//printf("%d ",index);
			s.push(index++);
			result += "+";
		}
		if (s.top() == m) {
			//printf("\ns: %d\n", s.top());
			s.pop();
			result += "-";
		}
		else {
			printf("NO");
			return 0;
		}
	}
	for (int i = 0; i < result.length(); i++) {
		printf("%c\n", result[i]);
	}
	
}