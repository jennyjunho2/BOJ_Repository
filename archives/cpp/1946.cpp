#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
vector<p> people;

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        people.clear();
        people.resize(N);
        FOR(i, 0, N) {
            cin >> people[i].first >> people[i].second;
        }
        sort(people.begin(), people.end());

        int max_score = people[0].second;
        int cnt = 0;
        FOR(i, 0, N) {
            if (people[i].second <= max_score) {
                cnt++;
                max_score = people[i].second;
            }
        }

        cout << cnt << endl;
    }

    return 0;
} 