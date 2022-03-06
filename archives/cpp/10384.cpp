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

    int n; cin >> n;
    cin.ignore();
    FOR(i, 1, n+1) {
        string sentence; getline(cin, sentence);
        int arr[26] = {0, };
        for (char ch: sentence) {
            if (ch >= 'a' && ch <= 'z') {
                arr[ch-'a']++;
            } else if (ch >= 'A' && ch <= 'Z') {
                arr[ch-'A']++;
            }
        }

        cout << "Case " << i << ": ";
        bool pangram = true;
        bool double_pangram = true;
        bool triple_pangram = true;
        FOR(i, 0, 26) {
            if (arr[i] == 0) {
                pangram = false;
                double_pangram = false;
                triple_pangram = false;
            } else if (arr[i] == 1) {
                double_pangram = false;
                triple_pangram = false;
            } else if (arr[i] == 2) {
                triple_pangram = false;
            }
        }

        if (triple_pangram) {
            cout << "Triple pangram!!!" << endl;
        } else if (double_pangram) {
            cout << "Double pangram!!" << endl;
        } else if (pangram) {
            cout << "Pangram!" << endl;
        } else {
            cout << "Not a pangram" << endl;
        }
    }

    return 0;
}