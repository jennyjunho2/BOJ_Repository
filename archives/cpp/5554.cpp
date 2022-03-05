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

    int a, b, c, d;
    cin >> a; cin >> b;  cin >> c; cin >> d;
    int sum = a+b+c+d;

    cout << sum / 60 << endl << sum % 60 << endl;

    return 0;
}