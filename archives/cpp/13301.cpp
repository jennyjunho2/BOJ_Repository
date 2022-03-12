#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//--------------------------------------------------

long long fibonacci[81];

int main() {

    int N; cin >> N;
	fibonacci[1] = 1; fibonacci[2] = 1;
    FOR(i, 3, N+1) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    
    long long sum = 4;
    FOR(i, 2, N+1) {
        sum += 2*fibonacci[i];
    }

    cout << sum;

    return 0;
}