#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string table = "0123456789ABCDEF";
    string words; cin >> words;
    int result = 0;
    for (auto word: words) {
        result =  result*16 + table.find(word);
    }

    cout << result;

    return 0;
}