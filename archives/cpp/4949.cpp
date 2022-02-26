#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string words;
    vector<char> s;
    while (true) {
        s.clear();
        getline(cin, words);
        if (words == ".") { return 0; }
        for (auto word: words) {
            if (word == '(' || word == '[') {
                s.push_back(word);
            } 
            else if (word == ')') {
                if (s.back() == '(') {
                    s.pop_back();
                } else {
                    s.push_back(word);
                    break;
                }
            }
            else if (word == ']') {
                if (s.back() == '[') {
                    s.pop_back();
                } else {
                    s.push_back(word);
                    break;
                }
            }
        }

        if (s.size()) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }

    return 0;
}