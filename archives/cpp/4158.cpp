#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> sang;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int N, M; cin >> N >> M;
        if (N == 0 && M == 0) { break; }

        sang.clear();
        int cnt = 0;
        FOR(i, 0, N) {
            int temp; cin >> temp;
            sang.push_back(temp);
        }
        sort(sang.begin(), sang.end());
        FOR(i, 0, M) {
            int temp; cin >> temp;
            if (binary_search(sang.begin(), sang.end(), temp)){
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}