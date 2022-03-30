#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {fastio

    int ant, eyes; cin >> ant >> eyes;
    if (ant >= 3 && eyes <= 4) {
        cout << "TroyMartian" << endl;
    }

    if (ant <= 6 && eyes >= 2) {
        cout << "VladSaturnian" << endl;
    }

    if (ant <= 2 && eyes <= 3) {
        cout << "GraemeMercurian" << endl;
    }

    return 0;
}