#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int arr[3][3];

int check_arr() {
    FOR(num, 1, 3) {
        FOR(i, 0, 3) {
            if (arr[i][0] == num && arr[i][1] == num && arr[i][2] == num) {
                return num;
            }
            if (arr[0][i] == num && arr[1][i] == num && arr[2][i] == num) {
                return num;
            }
        }

        if (arr[0][0] == num && arr[1][1] == num && arr[2][2] == num) {
            return num;
        }
        if (arr[0][2] == num && arr[1][1] == num && arr[2][0] == num) {
            return num;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int start; cin >> start;
    FOR(i, 0, 9) {
        int a, b; cin >> a >> b;
        arr[a-1][b-1] = start;
        int result = check_arr();
        if (result == 1 || result == 2) {
            cout << result;
            return 0;
        } else {
            start = (start == 1 ? 2 : 1);
        }
    }
    cout << 0;

    return 0;
}