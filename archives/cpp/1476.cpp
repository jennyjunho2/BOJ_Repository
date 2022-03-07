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

    int E, S, M; cin >> E >> S >> M;
    int num = 0;
    while (true) {
        int num_E = num % 15 + 1;
        int num_S = num % 28 + 1;
        int num_M = num % 19 + 1;

        if (E == num_E && S == num_S && M == num_M) {
            cout << num+1;
            break;
        }
        num++;
    }   
    
    return 0;
}