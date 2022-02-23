#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cnt = 0;
    int A, B;
    int max_cnt = 0;
    FOR(i, 0, 4) {
        cin >> A >> B;
        cnt = cnt - A + B;
        max_cnt = max(cnt, max_cnt);
    }

    cout << max_cnt;

    return 0;
}