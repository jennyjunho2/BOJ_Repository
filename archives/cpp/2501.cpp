#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

set<int> yaksoo;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    FOR(i, 1, sqrt(N) + 1) {
        if (N % i == 0) {
            yaksoo.insert(i);
            yaksoo.insert(N / i);
        }
    }

    if (yaksoo.size() < K) {
        cout << 0;
    } else {
        auto it = yaksoo.begin();
        advance(it, K-1);
        cout << *it;
    }
    
    return 0;
}