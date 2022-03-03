#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

bool cmp(const int& A, const int& B){
    return A > B;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> A;
    vector<int> B;

    FOR(i, 0, N) {
        int temp; cin >> temp;
        A.push_back(temp);
    }
    FOR(i, 0, N){
        int temp; cin >> temp;
        B.push_back(temp);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);

    int ans = 0;
    FOR(i, 0, N){
        ans += A[i] * B[i];
    }

    cout << ans;

    return 0;
}