#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

deque<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 1, N+1) {
        nums.push_back(i);
    }

    while (nums.size() != 1) {
        cout << nums.front() << ' ';
        nums.pop_front();
        int temp = nums.front();
        nums.push_back(temp);
        nums.pop_front();
    }

    cout << nums.front();

    return 0;
}