#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    fastio

    int n; cin >> n;
    int height = 0, threshold = 0;
    while (n >= threshold) {
        threshold += height*height + (height+1)*(height+1);
        height++;
    }

    cout << height-1;

    return 0;
}