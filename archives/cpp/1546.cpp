#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int sum = 0;
    int max = 0;
    double ans = 0;
    int nums[1001];
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        if (nums[i] > max) {
            max = nums[i];
        }
        sum += nums[i];
    }

    ans = ((double)sum / max * 100) / N;
    cout << fixed;
    cout.precision(5);
    cout << ans;

    return 0;
}