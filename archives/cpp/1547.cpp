#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

map<string, int> table;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M; cin >> M;
    int arr[3] = {1, 0, 0};
    FOR(i, 0, M) {
        int a, b; cin >> a >> b;
        swap(arr[a-1], arr[b-1]);
    }

    FOR(i, 0, 3){
        if (arr[i] == 1) {
            cout << i+1;
        }
    }

    return 0;
}