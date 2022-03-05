#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B; cin >> A >> B;
    if (A.length() < B.length()) {
        A.swap(B);
    }

    int A_len = A.length();
    int B_len = B.length();
    FOR(i, 0, A_len - B_len) {
        B = "0" + B;
    }

    FOR(i, 0, A_len) {
        cout << (A[i]-'0') + (B[i]-'0');
    }

    return 0;
}