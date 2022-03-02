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

    int N; cin >> N;
    while (N--) {
        string word; cin >> word;
        int first = 0;
        for(auto i: word.substr(0, 3)) {
            first = first * 26 + (i - 'A');
        }

        if (abs(first - stoi(word.substr(4))) <= 100) {
            cout << "nice" << endl;
        } else {
            cout << "not nice" << endl;
        }
    }

    return 0;
}