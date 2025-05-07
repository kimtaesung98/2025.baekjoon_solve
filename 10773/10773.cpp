#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num, sum = 0;
    stack<int> s;

    cin >> n; // �ݺ� Ƚ�� �Է�

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 0 && !s.empty()) {
            s.pop(); // 0 �Է� �� pop ����
        }
        else if (num != 0) {
            s.push(num); // 0�� �ƴ� ��� push ����
        }
    }

    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;
    return 0;
}
