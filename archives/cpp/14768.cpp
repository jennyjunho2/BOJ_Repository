#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using ld = long double;

int main() { fastio

    ld A, B, C; cin >> A >> B >> C;
    int iter = 100000;
    ld left = (C-B) / A;
    ld right = (C+B) / A;
    ld mid;
    while (left < right && iter > 0) {
        mid = (left+right) / 2;

        if (mid > (C - B*(ld)sin(mid)) / A) {
            right = mid - 0.0000000000000000001;
        } else if (mid < (C - B*(ld)sin(mid)) / A) {
            left = mid + 0.0000000000000000001;
        }

        iter--;
    }
    cout << fixed; cout.precision(10);
    cout << mid;

    return 0;
} 