#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int R; cin >> R;
    
    cout << fixed;
    cout.precision(6);
    cout << 3.14159265358979323846 * R * R << endl;
    cout << (double)2 * R * R << endl;

    return 0;
}