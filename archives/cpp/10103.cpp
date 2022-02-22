#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    int A = 100, B = 100;

    int a, b;
    while (n--) {
        cin >> a >> b;
        if (a > b) { B -= a;}
        else if (a < b) { A -= b;}   
    }

    cout << A << "\n" << B;

    return 0;
}