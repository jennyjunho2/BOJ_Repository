#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();
    while (N--) {
        string sentence; getline(cin, sentence);
        if (sentence.substr(0, 10) == "Simon says") {
            cout << sentence.substr(10) << endl;
        }
    }

    return 0;
}