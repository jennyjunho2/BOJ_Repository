#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N; cin >> M >> N;
    map<int, string> table = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}
    };

    vector<pair<string, int>> nums;
    FOR(i, M, N+1) {
        string temp;
        if (i >= 10) {
            temp = table[i/10] + " " + table[i%10];
            nums.push_back({temp, i});
        } else {
            temp = table[i];
            nums.push_back({temp, i});
        }
    }

    sort(nums.begin(), nums.end());
    FOR(i, 0, N-M+1) {
        cout << nums[i].second << " ";
        if (i % 10 == 9) {
            cout << endl;
        }
    }
    
    return 0;
}