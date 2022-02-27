#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

bool is_prime(int n){
    if (n == 0 || n == 1) {
        return false;
    } else if (n == 2) {
        return true;
    }
    FOR(i, 2, sqrt(n)+1){
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        for (int i = n / 2; i > 0; i--){
            if (is_prime(i) && is_prime(n-i)){
                cout << i << ' ' << n-i << endl;
                break;
            }
        }
    }

    return 0;
}