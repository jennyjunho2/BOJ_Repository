#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B, C, D;
    cin >> A >> B >> C;
    cin >> D;

    D = C + 60 * B + 3600 * A + D;
    int hour = D / 3600;
    int min = (D - hour * 3600) / 60;
    int sec = D - hour * 3600 - min * 60;

    cout << hour % 24 << ' '<< min << ' ' << sec;

    return 0;
}