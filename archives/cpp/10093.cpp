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
    
    long long A, B; cin >> A >> B;
    if (A > B) {
        long long temp = A;
        A = B;
        B = temp;
    }
    
    if (B - A == 0){
        cout << '0' << endl;
    } else if (B - A == 1) {
        cout << '0' << endl;
    } else{
        cout << B - A - 1 << endl;
        for (long long i = A+1; i < B; i++){
            cout << i << ' ';
        }
    }

    return 0;
}