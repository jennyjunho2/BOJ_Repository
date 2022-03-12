#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
//--------------------------------------------------

int main() {

	int N; cin >> N;
    int num = 1;
    while (num <= N) {
        num *= 2;
    }

    cout << num/2;

    return 0;
}