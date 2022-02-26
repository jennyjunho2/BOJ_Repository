#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin >> T;
    vector<string> nums;
    while (T--) {
        int H, W, N; cin >> H >> W >> N;
        nums.clear();
        FOR(i, 1, W+1){
            FOR(j, 1, H+1){
                if (i < 10){
                    string word = to_string(j) + '0' + to_string(i);
                    nums.push_back(word);
                } else{
                    string word = to_string(j) + to_string(i);
                    nums.push_back(word);
                }
                
            }
        }

        cout << nums[N-1] << endl;
    }

    return 0;
}