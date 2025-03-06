#include <iostream>
#include <vector>

using namespace std;

void cmp(vector<int>& vec) {
    size_t n = vec.size() / 2;  // size_t ���

    for (size_t i = 0; i <= n; i++) {
        if (vec[i] != vec[vec.size() - i - 1]) {
            printf("n\n");
            return;
        }
    }
    printf("yes\n");
}


int main() {
    int n;

    while (true) {
        // �Է°� �ޱ�
        scanf_s("%d", &n); // scanf_s ��� scanf ���

        if (n == 0) break;

        vector<int> vec;  // ���ο� ���ڿ� ���ؼ� ���� �ʱ�ȭ

        // ���ڸ� ���Ϳ� ����
        while (n > 0) {
            vec.push_back(n % 10);  // �� �ڸ����� ���Ϳ� ����
            n /= 10;  // ���� ���
        }

        // �� �Լ� ȣ��
        cmp(vec);
    }

    return 0;
}
