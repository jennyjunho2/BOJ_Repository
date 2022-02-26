#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> dots;
    int N; cin >> N;
    FOR(i, 0, N) {
        int x, y; cin >> x >> y;
        dots.push_back(pair<int, int>(x, y));
    }

    sort(dots.begin(), dots.end(), cmp);

    FOR(i, 0, N) {
        cout << dots[i].first << ' ' << dots[i].second << endl;
    }

    return 0;
}