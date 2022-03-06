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

    string X; cin >> X;
    int B = 10;
    if (X[0] == '0') {
        if (X[1] == 'x') {
            B = 16;   
        } else {
            B = 8;
        }
    }
    
    if (B == 10) { cout << X; return 0;}
    else if (B == 16) {
        X = X.substr(2);
    } else { X = X.substr(1); }

    int result = 0;
    for (char ch: X) {
        if (ch >= 'a') {
            result = result*B + (ch - 'a' + 10);
        } else {
            result = result*B + (ch-'0');
        }
    }

    cout << result;

    return 0;
}