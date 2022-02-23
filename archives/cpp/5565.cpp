#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start;i < end;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    int temp;
    FOR(i, 0, 9) {
        cin >> temp;
        n -= temp;
    }

    cout << n;

    return 0;
}