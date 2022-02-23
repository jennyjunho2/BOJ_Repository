#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int temp;
    int min = 1000;
    int sum = 0;
    FOR(i, 0, 7) {
        cin >> temp;
        if (temp % 2 == 1) {
            if (temp < min) {
                min = temp;
            }
            sum += temp;
        }
    }

    if (sum == 0) {
        cout << -1;
        return 0;
    }

    cout << sum << endl << min;
    
    return 0;
}