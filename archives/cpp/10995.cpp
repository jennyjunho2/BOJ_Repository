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
        if (i % 2 == 0){
            FOR(j, 0, N){
                cout << "* ";
            }
        } else {
            FOR(j, 0, N) {
                cout << " *";
            }
        }
        cout << endl;
    }

    return 0;
}