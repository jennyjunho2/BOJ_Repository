#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

set<int> nums;


int rotate(const int& a) {
    return (a%1000)*10 + a/1000;
}

int main() {
    fastio

    FOR(i, 1111, 10000) {
        bool contain_zero = false;
        for (auto i: to_string(i)) {
            if (i == '0') { contain_zero = true; break;}
        }
        if (contain_zero) { continue; }

        vector<int> temp = {i, rotate(i), rotate(rotate(i)), rotate(rotate(rotate(i)))};
        int min_temp = *min_element(temp.begin(), temp.end());
        nums.insert(min_temp);
    }

    vector<int> v_nums(nums.begin(), nums.end());
    sort(v_nums.begin(), v_nums.end());

    string ans = "";
    FOR(i, 0, 4) {
        string temp; cin >> temp;
        ans += temp;
    }
    int tmp = stoi(ans);
    vector<int> ans_tmp = {tmp, rotate(tmp), rotate(rotate(tmp)), rotate(rotate(rotate(tmp)))};
    int ans_num = *min_element(ans_tmp.begin(), ans_tmp.end());
    int v_nums_size = v_nums.size();
    FOR(i, 0, v_nums_size) {
        if (v_nums[i] == ans_num) {
            cout << i+1;
            break;
        }
    }

    return 0;
}