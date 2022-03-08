#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N >= 4) {
        bool flag = true;
        for (char ch: to_string(N)){
            if ((ch != '4') && (ch != '7')) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << N;
            break;
        } else {
            N--;
        }
    }

    return 0;
}