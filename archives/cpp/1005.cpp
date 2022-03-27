#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K, W;
int Time[1001];
int result[1001];
int indegree[1001];
vector<int> graph[1001];

int main() {
    fastio

    TC {
        memset(Time, 0, sizeof(Time));
        memset(result, 0, sizeof(result));
        memset(indegree, 0, sizeof(indegree));
        FOR(i, 0, 1001) { graph[i].clear(); }

        cin >> N >> K;
        FOR(i, 1, N+1) { cin >> Time[i]; }

        FOR(i, 0, K) {
            int temp1, temp2; cin >> temp1 >> temp2;
            indegree[temp2]++;
            graph[temp1].push_back(temp2);
        }

        cin >> W;

        // topology sorting
        queue<int> q;
        FOR(i, 1, N+1) {
            if (indegree[i] == 0) {
                q.push(i);
                result[i] = Time[i];
            }
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto next: graph[node]) {
                result[next] = max(result[next], result[node] + Time[next]);
                indegree[next]--;

                if (indegree[next] == 0) {
                    q.push(next);
                }
            }
        }

        cout << result[W] << endl;
    }

    return 0;
}