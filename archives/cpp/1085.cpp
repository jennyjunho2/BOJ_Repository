#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min({x, y, w-x, h-y});
    
    return 0;
}