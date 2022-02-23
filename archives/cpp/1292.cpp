#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;
    vector<int> nums(1000);

    int idx = 0;
    FOR(i, 1, 1001) {
        for (int j = 0; j < i && idx < 1000; j++) {
            nums[idx++] = i;
        }
    }

    int result = 0;
    FOR(i, A-1, B) {
        result += nums[i];
    }

    cout << result;

    return 0;
}