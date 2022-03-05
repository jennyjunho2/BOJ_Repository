#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> names;
vector<string> ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        string name; cin >> name;
        names.push_back(name);
    }

    sort(names.begin(), names.end());
    int cnt = 0;
    FOR(i, 0, M) {
        string name; cin >> name;
        if (binary_search(names.begin(), names.end(), name)) {
            ans.push_back(name);
            cnt++;
        }
    }
    sort(ans.begin(), ans.end());

    cout << cnt << endl;
    FOR(i, 0, cnt){
        cout << ans[i] << endl;
    }
    
    return 0;
}