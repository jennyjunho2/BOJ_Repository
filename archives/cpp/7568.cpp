#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<pair<int, int>> people;
    vector<int> ans;

    int N; cin >> N;
    FOR(i, 0, N) {
        int x, y; cin >> x >> y;
        people.push_back(pair<int, int>(x, y));
    }
    FOR(i, 0, N) {
        int cnt = 1;
        FOR(j, 0, N) {
            if ((people[i].first < people[j].first) && (people[i].second < people[j].second)) {
                cnt++;
            }
        }
        ans.push_back(cnt);
    }

    FOR(i, 0, N){
        cout << ans[i] << ' ';
    }

    return 0;
}