#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

bool nums[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    FOR(i, 0, 10001){
        nums[i] = true;
    }
    FOR(i, 0, 9974) {
        int res = i;
        for (auto j: to_string(i)){
            res += (j - '0');
        }
        nums[res] = false;
    }

    FOR(i, 0, 10001){
        if (nums[i]) {
            cout << i << endl;
        }
    }
    
    return 0;
}