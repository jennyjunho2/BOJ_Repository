#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, K;
vector<int> use;
vector<int> plug;

int main() {fastio
    
    cin >> N >> K;
    use.resize(K);
    plug.resize(N);
    FOR(i, 0, K) { cin >> use[i]; }

    int cnt = 0;
    FOR(i, 0, K) {
        int new_use = use[i];
        bool is_already_in = false;
        FOR(j, 0, N) {
            if (find(plug.begin(), plug.end(), new_use) != plug.end()) {
                is_already_in = true;
                break;
            }
        }

        if (is_already_in) { continue; }

        FOR(j, 0, N) {
            if (!plug[j]) {
                plug[j] = new_use;
                is_already_in = true;
                break;
            }
        }

        if (is_already_in) { continue; }

        cnt++;
        int plug_idx = -1, last_idx = -1;
        FOR(j, 0, N) {
            int last_use = 0;
            FOR(k, i+1, K) {
                if (plug[j] == use[k]) { break; }
                last_use++;
            }

            if (last_use > last_idx) {
                last_idx = last_use;
                plug_idx = j;
            }
        }

        plug[plug_idx] = use[i];
    }

    cout << cnt;

    return 0;
}
