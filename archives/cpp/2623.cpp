#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, M;
int degree[1001];
vector<int> graph[1001];
vector<int> ans;

int main() {
    fastio

    cin >> N >> M;
    FOR(i, 0, M) {
        vector<int> temp;
        int num; cin >> num;
        FOR(j, 0, num) {
            int z; cin >> z;
            temp.push_back(z);
        }

        FOR(j, 0, num) {
            FOR(k, j+1, num) {
                graph[temp[j]].push_back(temp[k]);
                degree[temp[k]]++;
            }
        }
    }

    queue<int> q;
    FOR(i, 1, N+1) {
        if (degree[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        
        ans.push_back(node);

        for (auto next_node: graph[node]) {
            degree[next_node]--;
            if (degree[next_node] == 0) {
                q.push(next_node);
            }
        }
    }

    if (ans.size() != N) {
        cout << 0;
    } else {
        for (auto i: ans) {
            cout << i << endl;
        }
    }

    return 0;
}