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
    int num = 1, sum = 0;
    while (num <= N) {
        sum += (N-num+1);
        num *= 10;
    }

    cout << sum; 

    return 0;
}