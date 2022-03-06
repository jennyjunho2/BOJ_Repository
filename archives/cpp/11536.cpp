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

    int N; cin >> N;
    vector<string> names;
    FOR(i, 0, N) {
        string temp; cin >> temp;
        names.push_back(temp);
    }

    vector<string> names_inc(names);
    vector<string> names_dec(names);
    sort(names_inc.begin(), names_inc.end());
    sort(names_dec.begin(), names_dec.end(), greater<string>());

    if (names == names_inc) {
        cout << "INCREASING";
    } else if (names == names_dec) {
        cout << "DECREASING";
    } else {
        cout << "NEITHER";
    }
    
    return 0;
}