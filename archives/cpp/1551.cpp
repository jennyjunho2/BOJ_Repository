#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer;
    vector<int> result;

    while(getline(iss, buffer, Delimiter)) {
        result.push_back(stoi(buffer));
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    string words; cin >> words;
    vector<int> nums = split(words, ',');
    FOR(i, 0, K) {
        FOR(j, 0, N-i-1) {
            nums[j] = nums[j+1] - nums[j];
        }
    }
    cout << nums[0];
    FOR(i, 1, N-K) {
        cout << ',' << nums[i];
    }

    return 0;
}