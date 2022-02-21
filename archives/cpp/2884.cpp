#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, M;
    cin >> H >> M;
    if (M < 45) {
        M += 15;
        H--;
    } else {
        M -= 45;
    }

    if (H < 0) {
        H += 24;
    }

    cout << H  << ' '<< M;
}