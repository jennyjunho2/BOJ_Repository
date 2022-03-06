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
    string A_max = A, B_max = B, A_min = A, B_min = B;
    replace(A_max.begin(), A_max.end(), '5', '6');
    replace(B_max.begin(), B_max.end(), '5', '6');
    replace(A_min.begin(), A_min.end(), '6', '5');
    replace(B_min.begin(), B_min.end(), '6', '5');
    cout << stoi(A_min) + stoi(B_min) << ' ' << stoi(A_max) + stoi(B_max);

    return 0;
}