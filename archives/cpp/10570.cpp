#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    
    while (N--) {
        int V; cin >> V;
        int votes[1001] = {0, };
        FOR(i, 0, V) {
            int temp; cin >> temp;
            votes[temp]++;
        }
        int max_vote = 0; int min_idx = 1000; 
        for (int i = 1000; i > 0; i--) {
            if (votes[i] >= max_vote) {
                max_vote = votes[i];
                min_idx = i;
            }
        }
        cout << min_idx << endl;
    }

    return 0;
}