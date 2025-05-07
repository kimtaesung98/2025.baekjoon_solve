#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int n; scanf("%d", &n);
    int mask = 0;
    char cmd[10]; // ��ɾ ���� char �迭

    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        string c = cmd; // char �迭�� string���� ��ȯ

        if (c == "add") {
            int x; scanf("%d", &x);
            mask |= (1 << (x - 1));
        }
        else if (c == "remove") {
            int x; scanf("%d", &x);
            mask &= ~(1 << (x - 1));
        }
        else if (c == "check") {
            int x; scanf("%d", &x);
            printf("%d\n", (mask & (1 << (x - 1))) ? 1 : 0);
        }
        else if (c == "toggle") {
            int x; scanf("%d", &x);
            mask ^= (1 << (x - 1));
        }
        else if (c == "all") {
            mask = (1 << 20) - 1; // 20��Ʈ ��ü ON
        }
        else if (c == "empty") {
            mask = 0;
        }
    }

    return 0;
}
