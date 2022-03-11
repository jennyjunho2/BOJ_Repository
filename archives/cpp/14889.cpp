#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

int N;
int nums[20][20];
int min_diff = 2147483647;

void backtrack(vector <int>& first, vector<int>& second, int min_idx) {
    int first_sum = 0, second_sum = 0;
    int first_size = first.size();
    int second_size = second.size();
    if (first_size == N/2 && second_size == N/2) {
        FOR(i, 0, N/2) {
            FOR(j, 0, N/2) {
                first_sum += nums[first[i]][first[j]];
                second_sum += nums[second[i]][second[j]];
            }
        }
        int diff = abs(first_sum - second_sum);
        min_diff = min(min_diff, diff);
    } else if (first_size > N/2 || second_size > N/2) {
        return;
    }

    first.push_back(min_idx);
    backtrack(first, second, min_idx+1);
    first.pop_back();

    second.push_back(min_idx);
    backtrack(first, second, min_idx+1);
    second.pop_back();
}

int main() {
    fastio

    cin >> N;
    FOR(i, 0, N) {
        FOR(j, 0, N) {
            cin >> nums[i][j];
        }
    }

    vector<int> first_team, second_team;
    backtrack(first_team, second_team, 0);

    cout << min_diff;

    return 0;
}