#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        words.push_back(word);
    }

    string ans = words[0];
    int ans_len = ans.length();
    FOR(j, 0, ans_len){
        bool flag = false;
        FOR(i, 1, N) {
            if (ans[j] != words[i][j]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            ans[j] = '?';
        }
    }

    cout << ans;

    return 0;
}