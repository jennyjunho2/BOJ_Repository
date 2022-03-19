#include <bits/stdc++.h>
#define ALL(x) begin(x), end(x);
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int N;
vector<int> graph[100001];
queue<int> q;
queue<int> new_q;
int order[100001];

bool cmp(const int& x, const int& y) {
    return order[x] < order[y];
}

int main() {
    fastio
    
    cin >> N;
    FOR(i, 0, N-1) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    FOR(i, 1, N+1) {
        int temp; cin >> temp;
        q.push(temp);
        order[temp] = i;
    }

    FOR(i, 1, N+1) {
        stable_sort(graph[i].begin(), graph[i].end(), cmp);
    }

    new_q.push(1);
    q.pop();
    while (!new_q.empty()) {
        int temp = new_q.front();
        new_q.pop();

        for (auto i: graph[temp]) {
            if (i == q.front()) {
                new_q.push(q.front());
                q.pop();
            }
        }
    }

    cout << (q.empty() ? 1 : 0);

    return 0;
} 