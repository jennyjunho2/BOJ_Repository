#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<bool> broken(10, 0);

int main() {
    fastio

    int N; cin >> N;
    int M; cin >> M;
    broken.resize(M);
    FOR(i, 0, M) {
        int temp; cin >> temp;
        broken[temp] = true;
    }

    int min_press = abs(N-100);
    FOR(num, 0, 1000001) {
        string str = to_string(num);
        int str_size = str.size();
        bool flag = true;
        FOR(i, 0, str_size) {
            if (broken[str[i] - '0']) {
                flag = false;
                break;
            }
        }

        if (flag) {
            int press = abs(N-num) + str_size;
            min_press = min(press, min_press);
        }
    }

    cout << min_press;

    return 0;
}