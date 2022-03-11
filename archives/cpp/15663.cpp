#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N, M;
int arr[8];
int visited[8];

vector<int> nums;

void backtrack(int depth) {
    if (depth == M) {
        FOR(i, 0, M) {
            cout << arr[i]  << ' ';
        }
        cout << endl;
        return;
    }

    int duplicate_check = 0;
    FOR(i, 0, N) {
        if (!visited[i] && nums[i] != duplicate_check) {
            arr[depth] = nums[i];
            duplicate_check = nums[i];
            visited[i] = true;
            backtrack(depth + 1);
            visited[i] = false;
        }
    }
}

int main() {
    fastio

    cin >> N >> M;
    nums.resize(N);
    FOR(i, 0, N) { 
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    backtrack(0);

    return 0;
}