#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp;
    int max = 0;
    int idx;

    for (int i = 1; i <= 9; i++){
        cin >> temp;
        if (temp > max) {
            max = temp;
            idx = i;
        }
    }

    cout << max << '\n' << idx;

    return 0;
}