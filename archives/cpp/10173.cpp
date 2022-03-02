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
        if (sentence == "EOI") { break; }

        transform(sentence.begin(), sentence.end(), sentence.begin(), [](char ch){ return tolower(ch); });
        if (sentence.find("nemo") != -1) {
            cout << "Found" << endl;
        } else {
            cout << "Missing" << endl;
        }
    }

    return 0;
}