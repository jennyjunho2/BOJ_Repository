#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int nums[41];
ll ans[41];

int main() {fastio

    
    string word; cin >> word;
    int word_len = word.size();
    FOR(i, 0, word_len) {
        nums[i+1] = word[i] - '0';
    }
    
    ans[0] = 1; ans[1] = 1;
    FOR(i, 2, word_len+1) {
        int temp = nums[i];
        if (temp != 0) {
            ans[i] = ans[i-1];
        }

        if (nums[i-1]*10 + temp <= 34 && nums[i-1] != 0) {
            ans[i] += ans[i-2];
        }
    }

    cout << ans[word_len];

    return 0;
}
