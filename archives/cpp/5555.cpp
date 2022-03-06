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

    string f; cin >> f;
    int N; cin >> N;
    int cnt = 0;
    while (N--) {
        string word; cin >> word;
        word += word.substr(0, f.length());
        
        if (word.find(f) != string::npos) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}