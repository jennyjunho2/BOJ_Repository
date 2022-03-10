#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;

int arr[4][14] = {0, };

int main() {
    fastio

    map<char, int> shape_table = {
        {'P', 0}, {'K', 1}, {'H', 2},  {'T', 3}
    };

    string S; cin >> S;

    int S_len = S.length();
    for (int i = 0; i < S_len; i += 3) {
        string card = S.substr(i, 3);
        char shape = card[0];
        int num = stoi(card.substr(1, 2));
        if (arr[shape_table[shape]][num] != 0) {
            cout << "GRESKA";
            return 0;
        } else {
            arr[shape_table[shape]][num] = -1;
        }
    }

    FOR(i, 0, 4) {
        int sum = 13;
        FOR(j, 1, 14) {
            sum += arr[i][j];
        }
        cout << sum << ' ';
    }

    return 0;
}