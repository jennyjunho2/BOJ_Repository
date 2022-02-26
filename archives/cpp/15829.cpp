#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L; cin >> L;
    int M = 1234567891;
    string word; cin >> word;
    reverse(word.begin(), word.end());
    long long hash = 0;
    for (auto i: word) {
        hash = (31*hash + (i - 'a' + 1)) % M;
    }

    cout << hash;

    return 0;
}