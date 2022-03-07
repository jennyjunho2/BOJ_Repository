#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    vector<vector<int>> nums;
    FOR(i, 0, N) {
        vector<int> temp;
        temp.clear();
        FOR(j, 0, M) {
            int temp2; cin >> temp2;
            temp.push_back(temp2);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        nums.push_back(temp);
    }

    int arr[N] = {0, };
    FOR(i, 0, M) {
        int max_value = nums[0][i];
        FOR(j, 1, N) {
            max_value = max(max_value, nums[j][i]);
        }

        FOR(j, 0, N) {
            if (nums[j][i] == max_value) {
                arr[j]++;
            }
        }
    }

    int max_score = 0;
    FOR(i, 0, N) {
        max_score = max(max_score, arr[i]);
    }

    FOR(i, 0, N) {
        if (arr[i] == max_score) {
            cout << i+1 << ' ';
        }
    }

    return 0;
}