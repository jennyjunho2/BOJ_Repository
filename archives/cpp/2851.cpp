#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

stack<char> s;

int main() {
    fastio

    vector<int> mushroom;
    FOR(i, 0, 10) {
        int temp; cin >> temp;
        mushroom.push_back(temp);
    }

    int sum = 0;
    for (auto i: mushroom) {
        sum += i;
        if (sum >= 100){
            int last = 100 - sum + i;
            if (sum-100 > last) {
                sum -= i;
            }
            break;
        }
        
    }

    cout << sum;

    return 0;
}