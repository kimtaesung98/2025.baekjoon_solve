#include <iostream>
using namespace std;

struct Point {
    long long x, y;
};

// CCW �Լ�
int ccw(Point A, Point B, Point C) {
    long long val = (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
    if (val > 0) return 1;    // �ݽð�
    if (val < 0) return -1;   // �ð�
    return 0;                 // ������
}

int main() {
    Point A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y;
    cin >> C.x >> C.y >> D.x >> D.y;

    int ab_c = ccw(A, B, C);
    int ab_d = ccw(A, B, D);
    int cd_a = ccw(C, D, A);
    int cd_b = ccw(C, D, B);

    if (ab_c * ab_d < 0 && cd_a * cd_b < 0)
        cout << 1 << "\n";  // ����
    else
        cout << 0 << "\n";  // �������� ����
}
