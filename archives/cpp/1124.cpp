#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int A, B;
int min_factor[100001];
int cnt_factor[100001];

void sieve_factor() {
    iota(min_factor, min_factor+100001, 0);
    min_factor[0] = min_factor[1] = -1;

    for (int i = 2; i < sqrt(100001)+1; i++) {
        if (min_factor[i] == i) {
            for (int j = i; j < 100001; j += i) {
                min_factor[j] = i;
            }
        }
    }

    fill(cnt_factor, cnt_factor+100001, 1);
    FOR(i, 2, 100001) {
        if (min_factor[i] != i)  {
            cnt_factor[i] = cnt_factor[i / min_factor[i]] + 1;
        }
    }
}

int main() { fastio

    sieve_factor();
    cin >> A >> B;
    int cnt_underprime = 0;
    FOR(i, A, B+1) {
        int factor_cnt = cnt_factor[i];
        if (factor_cnt == min_factor[factor_cnt]) {
            cnt_underprime++;
        }
    }

    cout << cnt_underprime;

    return 0;
}