#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B, V; cin >> A >> B >> V;
    int ans = (V-B-1) / (A-B) + 1;
    cout << ans;

    return 0;
}