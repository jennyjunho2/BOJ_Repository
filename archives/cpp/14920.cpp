#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<int> nums;

int main() {
    fastio

    int start; cin >> start;
    nums.push_back(start);
    while (true) {
        int last = nums.back();
        if (last == 1) {
            break;
        }
        if (last%2 == 0) {
            nums.push_back(last/2);
        } else {
            nums.push_back(3*last+1);
        }
    }

    cout << nums.size();

    return 0;
}