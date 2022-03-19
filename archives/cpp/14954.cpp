#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int n;
bool check[780];

int happy_func(int num) {
    int result = 0;
    string str = to_string(num);
    for (char ch: str) {
        result += (ch - '0') * (ch - '0');
    }

    return result;
}

int main() {
    fastio
    
    cin >> n;
    if (n == 1) {
        cout << "HAPPY";
        return 0;
    } else if (n <= 779) {
        check[n] = true;
    }
    while (true) {
        n = happy_func(n);
        if (check[n]) {
            cout << "UNHAPPY";
            return 0;
        } else {
            if (n == 1) {
                cout << "HAPPY";
                return 0;
            } else {
                check[n] = true;
            }
        }
    }

    return 0;
} 