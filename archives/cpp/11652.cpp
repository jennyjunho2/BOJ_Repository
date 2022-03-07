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

    map<long long, int> table;
    int N; cin >> N;
    while (N--) {
        long long temp; cin >> temp;
        table[temp]++;
    }

    int max_cnt = 0;
    long long num;
    for (auto it = table.rbegin(); it != table.rend(); it++) {
        if (it->second >= max_cnt) {
            max_cnt = it->second;
            num = it-> first;
        }
    }

    cout << num;

    return 0;
}