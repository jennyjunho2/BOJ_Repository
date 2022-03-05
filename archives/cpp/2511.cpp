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

    int A_score = 0, B_score = 0;
    vector<int> A, B;
    char winner = 'D';
    FOR(i, 0, 10) {
        int temp; cin >> temp;
        A.push_back(temp);
    }
    FOR(i, 0, 10) {
        int temp; cin >> temp;
        B.push_back(temp);
    }

    FOR(i, 0, 10) {
        if (A[i] > B[i]) {
            A_score += 3;
            winner = 'A';
        } else if (A[i] < B[i]) {
            B_score += 3;
            winner = 'B';
        } else {
            A_score++; B_score++;
        }
    }

    cout << A_score << ' ' << B_score << endl;
    if (A_score > B_score) {
        cout << 'A';
    } else if (A_score < B_score) {
        cout << 'B';
    } else {
        cout << winner;
    }

    return 0;
}