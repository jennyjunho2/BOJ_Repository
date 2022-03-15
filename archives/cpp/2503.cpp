#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct p {
    int num;
    int strikes;
    int balls;
};

vector<p> guess;

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        int a, b, c; cin >> a >> b >> c;
        guess.push_back({a, b, c});
    }

    int cnt = 0;
    FOR(num, 123, 988) {
        bool can_be_answer = true;
        string str = to_string(num);
        bool not_valid = str[0] == '0' || str[1] == '0' || str[2] == '0' || str[0] == str[1] || str[1] == str[2] || str[0] == str[2];
        if (not_valid) { continue; }
        
        FOR(i, 0, N) {
            string cmp_num = to_string(guess[i].num);
            int true_strikes = guess[i].strikes;
            int true_balls = guess[i].balls;

            int strikes = 0, balls = 0;

            FOR(a, 0, 3) {
                FOR(b, 0, 3) {
                    if (a == b && str[a] == cmp_num[b]) {
                        strikes++;
                        continue;
                    } else if (a != b && str[a] == cmp_num[b]) {
                        balls++;
                        continue;
                    }
                }
            }

            if (true_strikes != strikes || true_balls != balls) {
                can_be_answer = false;
                break;
            }
        }

        if (can_be_answer) {
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}