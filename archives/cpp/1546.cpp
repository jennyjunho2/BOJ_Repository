#include <bits/stdc++.h>
using namespace std;

int nums[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    int sum = 0; int max_num = 0;
    double ans = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        max_num = max(nums[i], max_num);
        sum += nums[i];
    }

    ans = ((double)sum / max_num * 100) / N;
    cout << fixed; cout.precision(5);
    cout << ans;

    return 0;
}