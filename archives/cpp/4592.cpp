#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int N; cin >> N;
        if (N == 0) { break; }

        int temp; cin >> temp;
        cout << temp << ' ';
        FOR(i, 1, N) {
            int temp2; cin >> temp2;
            if (temp == temp2) {
                continue;
            } else {
                cout << temp2 << ' ';
            }
            temp = temp2;
        }
        cout << '$' << endl;
    }

    return 0;
}