#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> height;
stack<int> s;

int main() {
    fastio

    int N; cin >> N;
    height.resize(N);
    FOR(i, 0, N) { cin >> height[i]; }
    
    long long cnt = 0;
    FOR(i, 0, N) {
        while (!s.empty() && s.top() <= height[i]) {
            s.pop();
        }
        cnt += s.size();
        s.push(height[i]);
    }

    cout << cnt;

    return 0;
}