#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

bool cmp(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return get<2>(a) > get<2>(b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<tuple<int, int, int>> nums;
    FOR(i, 0, N) {
        int a, b, c; cin >> a >> b >> c;
        nums.push_back({a, b, c});
    }
    
    
    sort(nums.begin(), nums.end(), cmp);
    map<int, int> table;
    pair<int, int> gld, slv, brz;
    gld.first = get<0>(nums[0]); gld.second = get<1>(nums[0]);
    table[gld.first]++;
    slv.first = get<0>(nums[1]); slv.second = get<1>(nums[1]);
    table[slv.first]++;
    FOR(i, 2, N) {
        tuple<int, int, int> temp = nums[i];
        if (table[get<0>(temp)] >= 2) {
            continue;
        } else {
            brz.first = get<0>(temp); brz.second = get<1>(temp);
            break;
        }
    }

    cout << gld.first << ' ' << gld.second << endl;
    cout << slv.first << ' ' << slv.second << endl;
    cout << brz.first << ' ' << brz.second;

    return 0;
}