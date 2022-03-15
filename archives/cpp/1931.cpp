#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

using p = pair<int, int>;
vector<p> meetings;

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        int begin, end; cin >> begin >> end;
        meetings.push_back({end, begin});
    }

    sort(meetings.begin(), meetings.end());

    int earliest = 0, cnt = 0;
    FOR(i, 0, N) {
        int meeting_begin = meetings[i].second;
        int meeting_end = meetings[i].first;

        if (earliest <= meeting_begin) {
            earliest = meeting_end;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}