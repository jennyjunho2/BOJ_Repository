#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

vector<string> split(string str, char delimiter) {
    istringstream iss(str);
    string buffer;
    vector<string> result;

    while(getline(iss, buffer, delimiter)) {
        result.push_back(buffer);
    }

    return result;
}

int vector_sum(string str, char delimiter) {
    istringstream iss(str);
    string buffer;
    int sum = 0;

    while (getline(iss, buffer, delimiter)) {
        sum += stoi(buffer);
    }

    return sum;
}

int main() {
    fastio

    string sentence; cin >> sentence;
    vector<string> sentence_split = split(sentence, '-');
    int total_sum = vector_sum(sentence_split[0], '+');
    int sentence_split_size = sentence_split.size();
    FOR(i, 1, sentence_split_size) {
        total_sum -= vector_sum(sentence_split[i], '+');
    }

    cout << total_sum;

    return 0;
}