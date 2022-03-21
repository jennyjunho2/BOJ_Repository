#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;
// 모든 가중치는 0 또는 1 / 최단 경로 탐색
// 노드가 N개, 간선이 E개 있을 때 시간복잡도 O(V+E)
int N;
int visited[10001];
void bfs_01(int start) {
    deque<int> dq;
    visited[start] = 0;
    while(!dq.empty()) {
        // 1. dq의 front에서 현재 노드를 꺼냄
        // 2. 연결된 인접 노드 하나씩 탐색
        // 3. if(현재 노드 비용 + 노드 향하는 비용 < 그 노드 까지의 비용)
        //  => 그 노드까지 비용 = 현재노드비용 + 노드 향하는 비용
        // 4. 만약 노드로 향하는 가중치가 0이면 dq의 front, 1이면 back에 삽입.
        // 왜 front? : 어차피 가중치가 0이니까 연속으로 탐색해도 무관, 이어서 탐색하는것!
    }
    
    
}
