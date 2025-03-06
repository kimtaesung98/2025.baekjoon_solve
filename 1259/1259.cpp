#include <iostream>
#include <vector>

using namespace std;

void cmp(vector<int>& vec) {
    size_t n = vec.size() / 2;  // size_t 사용

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
        // 입력값 받기
        scanf_s("%d", &n); // scanf_s 대신 scanf 사용

        if (n == 0) break;

        vector<int> vec;  // 새로운 숫자에 대해서 벡터 초기화

        // 숫자를 벡터에 저장
        while (n > 0) {
            vec.push_back(n % 10);  // 각 자릿수를 벡터에 넣음
            n /= 10;  // 숫자 축소
        }

        // 비교 함수 호출
        cmp(vec);
    }

    return 0;
}
