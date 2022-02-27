#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

bool nums[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    FOR(i, 101, 1001){
        nums[i] = false;
    }

    FOR(i, 1, 100){
        nums[i] = true;
    }
    
    FOR(i, 101, 1000) {
        int a = i / 100;
        int b = (i % 100) / 10;
        int c = i % 10;
        if ((c-b) == (b-a)) {
            nums[i] = true;
        }
    }

    int N; cin >> N;
    int cnt = 0;
    FOR(i, 1, N+1) {
        if (nums[i]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}