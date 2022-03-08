#include <bits/stdc++.h>
#define FOR(i, start, end) for (register int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N, M; 
int arr[10];
bool visited[10];

void func(int k, int min_num) {
    if (k == M) {
        FOR(i, 0, M) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }

    FOR(i, min_num, N+1){
        if (!visited[i]) {
            arr[k] = i;
            visited[i] = true;
            func(k+1, i);
            visited[i] = false;
        }
    }
}

int main() {
    fastio

    cin >> N >> M;
    func(0, 1);

    return 0;
}