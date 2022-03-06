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

    long long N; cin >> N;
    switch (N % 4) {
        case 0: case 2:
            cout << "CY";
            break;
        case 1: case 3:
            cout << "SK";
            break;
    }

    return 0;
}