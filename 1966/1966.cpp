#include <iostream>
#include <queue>
#include<vector>

using namespace std;

void print(vector<int>& v, queue<pair<int, int>>& q,int ob) {
    int cnt = 1;
    //printf("size of %d\n", q.size());
    int i = v.size() - 1;
    while(!q.empty()) {
        pair<int, int> front = q.front();

        if (front.second == v[i]) {//object_cnt
            if (front.first == ob)break;
            q.pop();
            i--;
            // print
            cnt++;
        }
        else {//sort
            q.push({front.first,front.second});
            q.pop();
        }
    }
    printf("%d\n", cnt);
}
int main() {
    int n, m, weight, object;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d %d", &m,&object);
        queue<pair<int, int>> q;
        vector<int> v;
        for (int j = 0; j < m; j++) {
            scanf_s("%d", &weight);
            q.push({j,weight});
            v.push_back(weight);
            sort(v.begin(), v.end());
        }

        print(v,q,object);
    }

    return 0;
}
