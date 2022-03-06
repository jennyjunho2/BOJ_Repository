#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    vector<string> v;
    FOR(i, 0, N) {
        string temp; cin >> temp;
        v.push_back(temp);
    }

    bool is_eyfa = true;
    FOR(i, 0, N) {
        string two_temp = "";
        string cmp; cin >> cmp;
        for (auto ch: v[i]) {
            two_temp += ch;
            two_temp += ch;
        }
        if (cmp != two_temp) {
            is_eyfa = false;
        }
    }

    if (is_eyfa) {
        cout << "Eyfa";
    } else {
        cout << "Not Eyfa";
    }

    return 0;
}