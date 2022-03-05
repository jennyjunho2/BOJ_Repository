#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int, greater<string>> people;

bool cmp(const pair<string, int> a, const pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    FOR(i, 0, n) {
        string name, state; cin >> name >> state;
        if (state == "enter") {
            people[name] = 1;
        } else {
            people[name] = 0;
        }
    }
    
    int people_len = people.size();
    for (auto it = people.begin(); it != people.end(); it++) {
        if (it->second == 1) {
            cout << it->first << endl;
        }
    }

    return 0;
}