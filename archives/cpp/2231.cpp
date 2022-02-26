#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, N-63, N+1){
        int num = i;
        string str = to_string(i);
        for (auto i: str) {
            num += (i - '0');
        }

        if (num == N) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}