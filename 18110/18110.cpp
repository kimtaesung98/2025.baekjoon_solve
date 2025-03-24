#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void average(int a, vector<int>& arr, int n) {
    float sum = 0;
    for (int i = a; i < n - a; i++) {
        sum += arr[i];
    }
    int result = round(sum / (n - 2 * a));  // Use round() for proper rounding
    cout << result << endl;
}

int main() {
    int n;
    cin >> n;
    if (n == 0)cout << "0";
    else {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int a = round(n * 0.15);  // Using round() for accurate integer conversion
        average(a, arr, n);

        return 0;
    }
}