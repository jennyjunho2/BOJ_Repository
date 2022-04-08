#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
vector<int> first;

int main() { fastio

    TC {
        first.clear();

        cin >> N; first.resize(N);
        FOR(i, 0, N) { cin >> first[i]; }
        sort(first.begin(), first.end());
        cin >> M;
        FOR(i, 0, M) {
            int temp; cin >> temp;
             cout << (binary_search(first.begin(), first.end(), temp) ? 1 : 0) << endl;
        }

    }

    return 0;
}