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

    string sentence;
    int arr[26] = {0, };
    while (getline(cin, sentence)) {
        for (char ch: sentence) {
            if (ch != ' ') {
                arr[ch - 'a']++;
            }
        }
    }

    int max_num = 0;
    int idx;
    FOR(i, 0, 26) {
        if (arr[i] > max_num) {
            max_num = arr[i];
            idx = i;
        }
    }

    FOR(i, 0, 26) {
        if (arr[i] == max_num) {
            cout << char(i+'a');
        }
    }

    return 0;
}