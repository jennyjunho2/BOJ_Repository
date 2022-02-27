#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C; cin >> C;
    vector<int> nums;
    while (C--) {
        nums.clear();
        int N; cin >> N;
        int sum = 0;
        FOR(i, 0, N){
            int temp; cin >> temp;
            sum += temp;
            nums.push_back(temp);
        }
        double avg = sum / N;
        int cnt = 0;
        FOR(i, 0, N){
            if (nums[i] > avg) {
                cnt++;
            }
        }
        
        cout << fixed;
        cout.precision(3);
        cout << (float)cnt * 100 / N << '%' << endl;
    }

    return 0;
}