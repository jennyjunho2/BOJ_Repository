#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> q;
    int N; cin >> N;
    FOR(i, 1, N+1){
        q.push_back(i);
    }

    while (q.size() > 1) {
        q.pop_front();
        int a = q[0];
        q.push_back(a);
        q.pop_front();
    }

    cout << q[0];

    return 0;
}