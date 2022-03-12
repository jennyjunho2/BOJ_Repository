#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

vector<int> people;

int main() {
    fastio

    int N; cin >> N;
    people.resize(N);
    FOR(i, 0, N) {
        cin >> people[i];
    }
    int B, C; cin >> B >> C;

    long long sum = 0;
    FOR(i, 0, N) {
        if (people[i] <= B) {
            sum += 1;
        } else {
            sum += ((people[i] - B)%C == 0 ? (people[i]-B)/C + 1 : (people[i]-B)/C + 2);
        }
    }

    cout << sum;

    return 0;
}