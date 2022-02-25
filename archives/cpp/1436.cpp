#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long num = 665;
    int cnt = 0;
    int N; cin >> N;
    while (true) {
        num++;
        if (to_string(num).find("666") != -1) {
            cnt++;
        }
        if (cnt == N) {
            cout << num;
            break;
        }
    }
    
    return 0;
}