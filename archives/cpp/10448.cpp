#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    vector<int> tri_num;
    FOR(i, 1, 45) {
        tri_num.push_back(i*(i+1)/2);
    }

    while (T--) {
        int K; cin >> K;
        bool flag = false;
        FOR(i, 0, 44) {
            FOR(j, i, 44) {
                FOR(k, j, 44) {
                    if (tri_num[i] + tri_num[j] + tri_num[k] == K) {
                        flag = true;
                        break;
                    }
                }
                if (flag) { break; }
            }

            if (flag) { break; }
        }

        if (flag) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    

    return 0;
}