#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B;
    while (true) {
        cin >> A >> B;
        if (A == 0 && B == 0) { break; }

        if (A % B == 0) { cout << "multiple\n"; }
        else if (B % A == 0) { cout << "factor\n"; }
        else { cout << "neither\n"; }
    }

    return 0;
}