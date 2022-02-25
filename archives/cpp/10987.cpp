#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    string words; cin >> words;
    int cnt = 0;
    for (auto word: words) {
        if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}