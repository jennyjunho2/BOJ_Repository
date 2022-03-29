#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<string, int>;
int K, L;
map<string, int> click;

int main() {fastio

    cin >> K >> L;
    FOR(i, 1, L+1) {
         string num; cin >> num;
         click[num] = i;
    }

    vector<p> click_seq(click.begin(), click.end());
    sort(click_seq.begin(), click_seq.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    int click_seq_size = click_seq.size();
    FOR(i, 0, min(K, click_seq_size)) {
        cout << click_seq[i].first << endl;
    }

    return 0;
}