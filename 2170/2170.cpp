#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int x, y;
    vector<pair<int, int>> vec;

    while (n--) {
        scanf("%d %d", &x, &y);
        vec.push_back(make_pair(x, y));
    }

    // 시작점을 기준으로 정렬
    sort(vec.begin(), vec.end());

    int distance = 0;
    int start = vec[0].first;
    int now_max = vec[0].second;

    for (int i = 1; i < vec.size(); i++) {
        if (now_max >= vec[i].first) {
            // 겹침 → 현재 구간 확장
            now_max = max(now_max, vec[i].second);
        } else {
            // 겹치지 않음 → 이전 구간 길이 더함
            distance += now_max - start;
            start = vec[i].first;
            now_max = vec[i].second;
        }
    }

    // 마지막 구간 더하기
    distance += now_max - start;
    printf("%d\n", distance);

    return 0;
}
