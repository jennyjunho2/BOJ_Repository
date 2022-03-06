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

    int A, B, C, D, E, F; cin >> A; cin >> B; cin >> C; cin >> D; cin >> E; cin >> F;
    cout << (A+B+C+D) - min({A, B, C, D}) + max(E, F);
    
    return 0;
}