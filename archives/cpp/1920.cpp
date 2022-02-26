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
    vector<int> finds;
    int N; cin >> N;
    FOR(i, 0, N){
        int temp; cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    int M; cin >> M;
    FOR(i, 0, M){
        int temp; cin >> temp;
        finds.push_back(temp);
    }

    for (auto i: finds) {
        if (binary_search(nums.begin(), nums.end(), i)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}