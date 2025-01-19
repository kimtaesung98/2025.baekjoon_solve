#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Node {
public:
    int a, b, weight;
    
    Node(int a, int b, int weight) : a(a), b(b), weight(weight) {}
    
};

bool compare(Node a, Node b) {
    return a.weight < b.weight;
}

class unionfind {
private:
    vector <int> parent, rank;
public:
    unionfind(int n) {
        //노드 연결 확인
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unionset(int x, int y) {
        int rootx = find(x);
        int rooty = find(y);

        if (rootx == rooty) return false;//사이클 발생

        if (rank[rootx] > rank[rooty]) {
            parent[rooty] = rootx;
        }
        else if (rank[rootx] < rank[rooty]) {
            parent[rootx] = rooty;
        }
        else {
            parent[rooty] = rootx;
            rank[rootx]++;
        }
        return true;
    }
};

int main() {
    int n, m;
    scanf_s("%d %d", &n, &m);

    vector<Node> node;

    for (int i = 0; i < m; i++) {
        int a, b, c;
        scanf_s("%d %d %d", &a, &b, &c);
        node.push_back(Node(a - 1, b - 1, c));
    }
    sort(node.begin(), node.end(), compare);

    /*.
    for (int i = 0; i < node.size(); i++) {
        printf("%d ", node[i].weight);
    }
    */

    unionfind uf(n);
    int sum = 0;
    
    for (auto& edge : node) {
        if (uf.unionset(edge.a, edge.b)) {
            sum += edge.weight;
        }
    }
    
    printf("%d", sum);
}