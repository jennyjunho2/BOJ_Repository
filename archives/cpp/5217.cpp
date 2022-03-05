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

    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        if (num == 1 || num == 2) {
            cout << "Pairs for " << num << ": " << endl;
            continue;
        }

        int start = 1;
        cout << "Pairs for " << num << ": " << start << ' ' << num-start;
        start++;
        while (start < num-start) {
            cout << ", " << start << ' ' << num - start;
            start++;
        }
        cout << endl;
    }

    return 0;
}