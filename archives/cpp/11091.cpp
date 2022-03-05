#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<char> missing;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();
    while (N--) {
        string sentence; getline(cin, sentence);
        missing.clear();
        int arr[26] = {0, };
        for (char ch: sentence) {
            if (ch >= 'a' && ch <= 'z') {
                arr[ch - 'a']++;
            } else if (ch >= 'A' && ch <= 'Z') {
                arr[ch - 'A']++;
            }
        }

        bool is_pangram = true;
        
        FOR(i, 0, 26) {
            if (arr[i] < 1) {
                is_pangram = false;
                missing.push_back(i + 'a');
            }
        }

        if (is_pangram) { cout << "pangram" << endl;}
        else {
            cout << "missing ";
            int missing_len = missing.size();
            FOR(i, 0, missing_len) {
                cout << missing[i];
            }
            cout << endl;
        }
    }

    return 0;
}