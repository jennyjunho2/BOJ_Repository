#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int A, B, N;

int main() {fastio

    cin >> A >> B >> N;
    A %= B;
    FOR(i, 0, N-1) {
        A = (A*10) % B;
    }

    cout << A*10/B;
    
    return 0;
}