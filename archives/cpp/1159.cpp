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
    int arr[26] = {0, };
    while (N--) {
        string word; cin >> word;
        arr[word[0] - 'a']++;
    }

    bool can_we_go = false;
    FOR(i, 0, 26) {
        if (arr[i] >= 5) {
            can_we_go = true;
            cout << char(i+'a');
        }
    }

    if (!can_we_go) {
        cout << "PREDAJA";
    }

    return 0;
}