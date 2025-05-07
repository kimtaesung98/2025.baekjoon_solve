#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num, sum = 0;
    stack<int> s;

    cin >> n; // 반복 횟수 입력

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 0 && !s.empty()) {
            s.pop(); // 0 입력 시 pop 실행
        }
        else if (num != 0) {
            s.push(num); // 0이 아닐 경우 push 실행
        }
    }

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;
    return 0;
}
