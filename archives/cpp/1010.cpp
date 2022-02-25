#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

unsigned long comb(unsigned a, unsigned b) {
    if (b > a) { return 0; }
    if (b * 2 > a) { b = a - b;}

    if (b == 0) { return 1; }

    int result = a;
    for (int i = 2; i <= b; i++) {
        result *= (a-i+1);
        result /= i;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int N, M; cin >> N >> M;
        cout << comb(M, N) << endl;
    }
    
    return 0;
}