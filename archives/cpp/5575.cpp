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

    int h1, m1, s1, h2, m2, s2;
    FOR(i, 0, 3) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        int secs = (h2-h1)*3600 + (m2-m1)*60 + (s2-s1);

        int hour = secs / 3600;
        int minute = (secs - hour * 3600) / 60;
        int sec = secs - hour*3600 - minute*60;
        cout << hour << ' ' << minute << ' ' << sec << endl;
    }

    return 0;
}