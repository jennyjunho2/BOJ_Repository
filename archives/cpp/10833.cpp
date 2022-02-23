#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    int temp = 0;
    FOR(i, 0, N) {
        int a, b;
        cin >> a >> b;
        temp += b % a;
    }

    cout << temp;

    return 0;
}