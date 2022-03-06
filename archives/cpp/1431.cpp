#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

bool cmp(const string& A, const string& B) {
    int A_len = A.length();
    int B_len = B.length();
    if (A_len != B_len) {
        return A_len < B_len;
    }

    int A_sum = 0, B_sum = 0;
    FOR(i, 0, A_len) {
        char ch1 = A[i];
        char ch2 = B[i];
        if (ch1 >= '0' && ch1 <= '9') {
            A_sum += ch1 - '0';
        }

        if (ch2 >= '0' && ch2 <= '9') {
            B_sum += ch2 - '0';
        }
    }

    if (A_sum != B_sum) {
        return A_sum < B_sum;
    }

    return A < B;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<string> words;
    FOR(i, 0, N) {
        string temp; cin >> temp;
        words.push_back(temp);
    }

    sort(words.begin(), words.end(), cmp);
    
    FOR(i, 0, N) {
        cout << words[i] << endl;
    }

    return 0;
}