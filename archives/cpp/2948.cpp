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

    int D, M; cin >> D >> M;
    int years[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string month[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    FOR(i, 0, M-1){
        D += years[i];
    }
    D -= 1;
    cout << month[D%7];

    return 0;
}