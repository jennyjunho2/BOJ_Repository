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
using p = pair<string, int>;
int N;
vector<p> problems;

int main() { fastio

    cin >> N; problems.resize(N);
    FOR(i, 0, N) {
        cin >> problems[i].first >> problems[i].second;
    }

    cout << min_element(problems.begin(), problems.end(), [](const p& a, const p& b) {
        return a.second < b.second;
    })->first;

    return 0;
}