#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

struct cmp {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first == b.first ? a.second > b.second : a.first > b.first;
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        int comm; cin >> comm;
        if (comm != 0) {
            pq.push({abs(comm), comm});
        } else {
            if (pq.empty()) {
                cout << 0 << endl;
            } else {
                pair<int, int> temp = pq.top();
                cout << temp.second << endl;
                pq.pop();
            }
        }
    }

    return 0;
}