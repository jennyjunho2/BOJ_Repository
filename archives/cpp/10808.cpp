#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[26] = {0, };
    string S; cin >> S;

    for (auto word : S) {
        arr[word - 'a']++;
    }
    FOR(i, 0, 26) {
        cout << arr[i] << ' ';
    }

    return 0;
}