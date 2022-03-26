#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
int nums[11];
int oper_arr[10];
char oper[4] = {'+', '-', '*', '/'};
int oper_cnt[4];
int max_result = -INT_MAX;
int min_result = INT_MAX;

int calc() {
    int result = nums[0];
    FOR(i, 0, N-1) {
        switch(oper_arr[i]) {
            case '+':
                result += nums[i+1];
                break;
            case '-':
                result -= nums[i+1];
                break;
            case '*':
                result *= nums[i+1];
                break;
            case '/':
                result /= nums[i+1];
        }
    }

    return result;
}

void backtrack(int depth) {
    if (depth == N-1) {
        int temp = calc();
        max_result = max(max_result, temp);
        min_result = min(min_result, temp);
        return;
    }

    FOR(i, 0, 4) {
        if (oper_cnt[i] > 0) {
            oper_arr[depth] = oper[i];
            oper_cnt[i]--;
            backtrack(depth + 1);
            oper_cnt[i]++;
        }
    }
}

int main() { fastio

    cin >> N;
    FOR(i, 0, N) { cin >> nums[i]; }
    FOR(i, 0, 4) { cin >> oper_cnt[i]; }

    backtrack(0);
    cout << max_result << endl << min_result;

    return 0;
} 