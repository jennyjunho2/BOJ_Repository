#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647;
using namespace std;

void hanoi(int n, int start, int end, int mid) {
    if (n == 1) {
        cout << start << ' ' << end << endl;
    } else {
        hanoi(n-1, start, mid, end);
        cout << start << ' ' << end << endl;
        hanoi(n-1, mid, end, start);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K; cin >> K;
    cout << (1<<K) - 1 << endl;
    hanoi(K, 1, 3, 2);

    return 0;
}