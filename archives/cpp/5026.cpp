#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer;
    vector<string> result;
    
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        string word; cin >> word;
        if (word == "P=NP") {
            cout << "skipped" << endl;
            continue;
        }

        int sum = 0;
        vector<string> ans = split(word, '+');
        FOR(i, 0, 2) {
            sum += stoi(ans[i]);
        }

        cout << sum << endl;
    }

    return 0;
}