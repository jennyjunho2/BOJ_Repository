#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int one; cin >> one;
    int temp;
    int cnt = 0;
    FOR(i, 0, 5) {
        cin >> temp;
        if (temp == one) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}