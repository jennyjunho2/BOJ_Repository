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

    int T; cin >> T;
    set<char> nums;
    while (T--) {
        nums.clear();
        string word; cin >> word;
        for (auto i: word) {
            nums.insert(i);
        }

        cout << nums.size() << endl;
    }

    return 0;
}