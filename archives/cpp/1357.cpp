#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int rev(int n){
    int result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, Y; cin >> X >> Y;
    cout << rev(rev(X) + rev(Y));

    return 0;
}