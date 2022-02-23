#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

map<int, int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp;
    int sum = 0;
    
    FOR(i, 0, 10){
        cin >> temp;
        nums[temp]++;
        sum += temp;
    }

    int max = 0;
    int max_num = 0;
    for (auto pair: nums){
        if (pair.second > max) {
            max = pair.second;
            max_num = pair.first;
        }
    }
    
    cout << sum / 10 << endl << max_num;

    return 0;
}