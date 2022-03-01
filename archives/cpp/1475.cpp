#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int nums[10] = {0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string N; cin >> N;
    for (auto i: N){
        if (i == '6' || i == '9'){
            if (nums['6' - '0'] > nums['9' - '0']) {
                nums['9' - '0']++;
            } else {
                nums['6' - '0']++;
            }
        } else {
            nums[i - '0']++;
        }
    }

    int max_num = 0;
    FOR(i, 0, 9){
        max_num = max(max_num, nums[i]);
    }

    cout << max_num;

    return 0;
}