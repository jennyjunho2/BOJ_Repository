#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define INF int(1e9)
struct city{ int y, x; bool special; };
int N, T, M;
vector<city> cities;
int graph[1001][1001];

int dist(const city& c1, const city& c2) {
    int taxi = abs(c1.x - c2.x) + abs(c1.y - c2.y);
    return c1.special&&c2.special ? min(T, taxi) : taxi;
}

int main() {fastio

    fill(&graph[0][0], &graph[0][0]+1001*1001, INF);
    city tmp; tmp.y = 0; tmp.x = 0; tmp.special = 0;
    cities.push_back(tmp);
    cin >> N >> T;
    FOR(i, 0, N) {
        city temp; cin >> temp.special >> temp.x >> temp.y;
        cities.push_back(temp);
    }

    FOR(i, 1, N+1 ){
        FOR(j, 1, N+1) {
            graph[i][j] = dist(cities[i], cities[j]);
        }
    }

    // floyd
    FOR(k, 1, N+1) {
        FOR(i, 1, N+1) {
            FOR(j, 1, N+1) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    cin >> M;
    FOR(i, 0, M) {
        int start, end; cin >> start >> end;
        cout << graph[start][end] << endl;
    }
    
    return 0;
}