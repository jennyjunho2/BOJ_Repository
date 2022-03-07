#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a==0 && b==0 && c==0 && d==0) { break; }
        else if (a==b && b==c && c==d) { cout << 0 << endl; continue;}

        int arr[4] = {a, b, c, d};
        bool flag = false;
        int cnt = 0;
        while(!flag) {
            int new_a = abs(arr[1]-arr[0]);
            int new_b = abs(arr[2]-arr[1]);
            int new_c = abs(arr[3]-arr[2]);
            int new_d = abs(arr[3]-arr[0]);

            if (new_a == new_b && new_b == new_c && new_c == new_d) {
                flag = true;
            }
            arr[0] = new_a; arr[1] = new_b; arr[2] = new_c; arr[3] = new_d;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}