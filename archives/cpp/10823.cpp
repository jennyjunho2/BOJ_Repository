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

string sentence = "";
vector<string> ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(true) {
        string word; cin >> word;
        if (cin.eof()) { break; }
        sentence += word;
    }

    int sum = 0;
    ans = split(sentence, ',');
    int ans_len = ans.size();
    FOR(i, 0, ans_len) {
        sum += stoi(ans[i]);
    }
    
    cout << sum;

    return 0;
}