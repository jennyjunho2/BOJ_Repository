#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int A, P;
int visited[300000];

int POW(int a, int exp) {
    int ans = 1;
    while (exp--) {
        ans *= a;
    }
    return ans;
}

int f(int A) {
    int temp = A;
    int sum = 0;
    while (temp) {
        sum += POW(temp%10, P);
        temp /= 10;
    }

    return sum;
}

void dfs(int x) {
    visited[x]++;
    if (visited[x] > 2) { return; }
    dfs(f(x));
}

int main() { fastio

    cin >> A >> P;
    
    dfs(A);

    int cnt = 0;
    FOR(i, 0, 300000) {
        if (visited[i] == 1) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}