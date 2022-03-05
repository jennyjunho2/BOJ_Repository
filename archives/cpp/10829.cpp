#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> binary_nums;

void binary(long long N) {
    while (N > 0){
        binary_nums.push_back(N%2);
        N /= 2;
    }
    int binary_nums_len = binary_nums.size();
    for (int i = binary_nums_len-1; i >= 0; i--) {
        cout << binary_nums[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N; cin >> N;
    binary(N);
    
    return 0;
}