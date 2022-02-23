#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;

    FOR(i, 0, N){
        FOR(j, 0, N-i-1) {
            cout << ' ';
        }
        FOR(k, 0, i+1){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}