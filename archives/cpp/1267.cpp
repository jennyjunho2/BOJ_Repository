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
    
    int T; cin >> T;
    int Y_fee = 0;
    int M_fee = 0;
    while(T--) {
        int temp; cin >> temp;
        Y_fee += (temp / 30 + 1) * 10;
        M_fee += (temp / 60 + 1) * 15;
    }


    if (Y_fee < M_fee) {
        cout << "Y " << Y_fee;
    } else if (Y_fee > M_fee) {
        cout << "M " << M_fee;
    } else {
        cout << "Y M " << Y_fee;
    }


    return 0;
}