#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    int cnt = 0;
    int num = N;
    while (true) {
        cnt++;
        num = ((num / 10) + (num % 10))%10 + (num % 10) * 10;
        if (N == num){ break; }
    }

    cout << cnt;

    return 0;
}