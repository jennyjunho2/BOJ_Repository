#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();
    vector<int> dist;
    while (T--) {
        dist.clear();
        string words; getline(cin, words);
        int words_len = words.length();
        string word1 = words.substr(0, words_len / 2);
        string word2 = words.substr(words_len / 2 + 1);
        FOR(i ,0, words_len / 2) {
            int distance = word2[i] - word1[i];
            if (distance >= 0) {
                dist.push_back(distance);
            } else {
                dist.push_back(distance + 26);
            }
        }

        cout << "Distances: ";
        FOR(i, 0, dist.size()) {
            cout << dist[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}