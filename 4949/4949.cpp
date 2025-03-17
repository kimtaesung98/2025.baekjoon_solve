#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')') {
            if (s.empty() || s.top() != '(') return false;
            s.pop();
        }
        else if (ch == ']') {
            if (s.empty() || s.top() != '[') return false;
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string str;

    while (true) {
        getline(cin, str); // 한 줄 입력 받기

        if (str == ".") break; // 종료 조건

        if (isBalanced(str))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
