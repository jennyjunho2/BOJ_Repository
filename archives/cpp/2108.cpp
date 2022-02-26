#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums;
    int cnt[8001] = {0, };
    int sum = 0;
    int N; cin >> N;
    FOR(i, 0, N) {
        int temp; cin >> temp;
        nums.push_back(temp);
        sum += temp;
        cnt[temp + 4000]++;
    }
    
    sort(nums.begin(), nums.end());

    int max = 0, flag;
    FOR(i, 0, 8001) {
        if (cnt[i] > max) {
            max = cnt[i];
            flag = i;
        }
    }

    FOR(i, flag+1, 8001){
        if (cnt[i] == max) {
            flag = i;
            break;
        }
    }

    cout << round(double(sum) / N) + 0.0 << endl;
    cout << nums[(N-1)/2] << endl;
    cout << flag - 4000 << endl;
    cout << *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end());

    return 0;
}