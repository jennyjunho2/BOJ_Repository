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

    int A, B; cin >> A >> B;
    vector<int> A_list;
    FOR(i, 0, A) {
        int temp; cin >> temp;
        A_list.push_back(temp);
    }

    sort(A_list.begin(), A_list.end());
    int cnt = A;
    FOR(i, 0, B) {
        int temp; cin >> temp;
        if (binary_search(A_list.begin(), A_list.end(), temp)) {
            cnt -= 1;
        } else {
            cnt += 1;
        }
    }

    cout << cnt;

    return 0;
}