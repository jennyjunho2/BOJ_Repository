#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> words_set;
    vector<string> words_vec;
    int N; cin >> N;
    FOR(i, 0, N){
        string words; cin >> words;
        words_set.insert(words);
    }

    words_vec.assign(words_set.begin(), words_set.end());

    sort(words_vec.begin(), words_vec.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        } else {
            return a.length() < b.length();
        }
    });

    FOR(i, 0, words_vec.size()){
        cout << words_vec[i] << endl;
    }
    
    return 0;
}