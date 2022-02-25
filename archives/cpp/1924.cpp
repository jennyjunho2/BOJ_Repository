#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int x, y; cin >> x >> y;
    FOR(i, 1, x){
        y += month[i];
    }
    cout << week[y % 7];

    return 0;
}