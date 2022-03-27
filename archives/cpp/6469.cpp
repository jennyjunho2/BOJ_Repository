#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int STEP, MOD;
bool mod_arr[100000];

int main() {
    fastio

    while(cin >> STEP >> MOD) {
        int STEP_len = to_string(STEP).size();
        int MOD_len = to_string(MOD).size();
        memset(mod_arr, false, sizeof(mod_arr));
        int seed = 0;
        mod_arr[seed] = 1;
        while(true) {
            seed = (seed + STEP) % MOD;
            if (mod_arr[seed]) {
                break;
            } else {
                mod_arr[seed] = true;
            }
        }

        bool flag = true;
        FOR(i, 0, MOD) {
            if (!mod_arr[i]) {
                flag = false;
                break;
            }
        }

        FOR(i, 0, 10-STEP_len) { cout << ' '; }
        cout << STEP;
        FOR(i, 0, 10-MOD_len) { cout << ' '; }
        cout << MOD << ' ';
        cout << (flag ? "Good" : "Bad") << " Choice" << endl << endl;
    }

    return 0;
}