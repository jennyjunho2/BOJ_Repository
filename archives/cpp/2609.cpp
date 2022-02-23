#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << "\n" << (A*B) / gcd(A, B);

    return 0;
}