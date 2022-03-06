#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        string sentence; getline(cin, sentence);
        if (sentence == "#") { break; }

        int arr[26] = {0, };
        for (char ch: sentence) {
            if (ch >= 'a' && ch <= 'z') {
                arr[ch-'a']++;
            } else if (ch >= 'A' && ch <= 'Z') {
                arr[ch-'A']++;
            }
        }

        int cnt = 0;
        FOR(i, 0, 26) {
            if (arr[i] != 0) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}