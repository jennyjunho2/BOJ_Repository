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

    int A_win = 0, B_win = 0;
    vector<int> A; vector<int> B;
    int temp;
    FOR(i, 0, 10) {
        cin >> temp;
        A.push_back(temp);
    }

    FOR(i, 0, 10) {
        cin >> temp;
        B.push_back(temp);
    }

    FOR(i, 0, 10) {
        if (A[i] < B[i]) {
            B_win++;
        } else if (A[i] > B[i]) {
            A_win++;
        }
    }

    if (A_win > B_win) {
        cout << 'A';
    } else if (A_win < B_win) {
        cout << 'B';
    } else {
        cout << 'D';
    }

    return 0;
}