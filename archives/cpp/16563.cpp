#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int factor[5000001];

void sieve() {
    iota(factor, factor+5000001, 0);
    factor[0] = factor[1] = -1;

    FOR(i, 2, sqrt(5000001)+1) {
        if (factor[i] == i) {
            for (int j = i*i; j < 5000001; j += i) {
                if (factor[j] == j) {
                    factor[j] = i;
                }
            }
        }
    }
}

int main() { fastio

    sieve();
    cin >> N;
    FOR(i, 0, N) { 
        int num; cin >> num;

        while (num > 1) {
            cout << factor[num] << ' ';
            num /= factor[num];
        } cout << endl;
        
    }

    return 0;
}