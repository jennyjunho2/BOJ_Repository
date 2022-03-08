#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int input_num[12];
int arr[12];
bool visited[12];
int k;

void backtrack(int depth, int min_idx) {
    if (depth == 6) {
        FOR(i, 0, 6) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }

    FOR(i, min_idx, k) {
        if (!visited[i]) {
            arr[depth] = input_num[i];
            visited[i] = true;
            backtrack(depth+1, i+1);
            visited[i] = false;
        }
    }
}

int main() {
    fastio

    while (true) {
        cin >> k;
        if (k == 0) { break; }
        
        memset(visited, false, sizeof(visited));

        FOR(i, 0, k) {
            cin >> input_num[i];
        }
        backtrack(0, 0);
        cout << endl;
    }

    return 0;
}