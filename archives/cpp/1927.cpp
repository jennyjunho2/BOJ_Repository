#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        int num; cin >> num;
        if (num != 0) {
            pq.push(num);
        } else {
            if (pq.empty()) {
                cout << 0 << endl;
                continue;
            }
            
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}