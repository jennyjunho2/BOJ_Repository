#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

char arr[5][15];

int main() {
    fastio

    fill(&arr[0][0], &arr[5][15], ' ');

    FOR(i, 0, 5) {
        string temp; cin >> temp;
        int temp_len = temp.size();
        FOR(j, 0, temp_len) {
            arr[i][j] = temp[j];
        }
    }

    FOR(j, 0, 15) {
        FOR(i, 0, 5) {
            char ch = arr[i][j];
            if (ch != ' ') {
                cout << ch;
            }
        }
    }

    return 0;
}