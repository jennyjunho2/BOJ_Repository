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
    int num = 1;
    while(N >= 3*num*num - 3*num + 2) {
        num++;
    }

    cout << num;

    return 0;
}