#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> cheat = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<int> ans;
    int cnt = 0;
    FOR(i, 1, N+1) {
        ans.clear();
        FOR(i, 0, 10){
            int temp; cin >> temp;
            ans.push_back(temp);
        }
        if (ans == cheat) {
            cout << i << endl;
        }
    }

    return 0;
}