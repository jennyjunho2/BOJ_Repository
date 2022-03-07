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

    int N; cin >> N;
    int cnt = 0;
    int num = 0;

    while (N > 0) {
        num++;
        if (N < num) { num = 1; }
        N -= num;
        cnt++;
    }

    cout << cnt;
    
    return 0;
}