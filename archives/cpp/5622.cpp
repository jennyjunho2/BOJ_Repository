#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 76543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arr[10][4] = {{}, {}, {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'},
	{'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'}};

    string word; cin >> word;
    int ans = 0;
    for (auto ch: word) {
        FOR(i, 0, 10){
            FOR(j, 0, 4){
                if (arr[i][j] == ch) {
                    ans += (i+1);
                }
            }
        }
    }

    cout << ans;

    return 0;
}