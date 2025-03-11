#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int object, vector<int> &v) {
	int start = 0;
	int end = v.size() - 1;
	int i =  (start + end) / 2;
	int result = 0;
	while(start <= end) {
		if (object == v[i]) {
			//printf("%d : 1\n",object);
			result = 1;
			break;
		}
		else if (object > v[i])start = i + 1;
		else end = i - 1;
		i = (start + end) / 2;
	}
	//printf("%d : 0\n",object);
	printf("%d\n", result);
}

int main() {
	int n,m;scanf_s("%d", &n);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &m);
		v.push_back(m);
	}
	sort(v.begin(), v.end());

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &m);
		print(m,v);
	}
}