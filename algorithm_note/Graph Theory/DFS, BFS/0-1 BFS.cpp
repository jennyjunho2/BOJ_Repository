#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;
// ��� ����ġ�� 0 �Ǵ� 1 / �ִ� ��� Ž��
// ��尡 N��, ������ E�� ���� �� �ð����⵵ O(V+E)
int N;
int visited[10001];
void bfs_01(int start) {
    deque<int> dq;
    visited[start] = 0;
    while(!dq.empty()) {
        // 1. dq�� front���� ���� ��带 ����
        // 2. ����� ���� ��� �ϳ��� Ž��
        // 3. if(���� ��� ��� + ��� ���ϴ� ��� < �� ��� ������ ���)
        //  => �� ������ ��� = �������� + ��� ���ϴ� ���
        // 4. ���� ���� ���ϴ� ����ġ�� 0�̸� dq�� front, 1�̸� back�� ����.
        // �� front? : ������ ����ġ�� 0�̴ϱ� �������� Ž���ص� ����, �̾ Ž���ϴ°�!
    }
    
    
}
