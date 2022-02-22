#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B, C;
    cin >> A >> B;
    cin >> C;

    int min = B + C;

    while (min >= 60) {
        min -= 60;
        A++;
    }

    A %= 24;

    cout << A << ' ' << min;

    return 0;
}