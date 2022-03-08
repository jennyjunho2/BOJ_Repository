#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<int> nums;
vector<int> acc_num;

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }

    acc_num = nums;
    acc_num.insert(acc_num.begin(), 0);
    FOR(i, 1, N+1) {
        acc_num[i] = acc_num[i-1] + acc_num[i];
    }

    while (M--) {
        int i, j; cin >> i >> j;
        cout << acc_num[j] - acc_num[i-1] << endl;
    }

    return 0;
}