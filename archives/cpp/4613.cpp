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
        if (sentence == "#") { return 0; }

        int mul = 1;
        long long sum = 0;
        for (auto ch: sentence) {
            if (ch != ' ') {
                sum += mul * (ch - 'A' + 1);
            }
            mul++;
        }
        
        cout << sum << endl;
    }

    return 0;
}