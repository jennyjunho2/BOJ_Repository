#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        string word; cin >> word;
        table[word]++;
    }

    map<string, int>::iterator it;
    int max = 0;
    string ans;
    for (it = table.begin(); it != table.end(); it++){
        if (max < it->second) {
            max = it->second;
            ans = it->first;
        }
    }

    cout << ans << endl;
    
    return 0;
}