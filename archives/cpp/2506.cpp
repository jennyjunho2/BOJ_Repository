#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N; cin >> N;
    int temp;
    int score = 0;
    int streak = 0;
    FOR(i, 0, N) {
        streak++;
        cin >> temp;
        if (temp == 1) {
            score += streak;
        } else {
            streak = 0;
        }
    }

    cout << score;

    return 0;
}