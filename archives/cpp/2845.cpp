#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<string> words;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L, P; cin >> L >> P;
    int people = L * P;
    FOR(i, 0, 5){
        int temp; cin >> temp;
        cout << temp - people << ' ';
    }

    return 0;
}