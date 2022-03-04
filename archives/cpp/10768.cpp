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

    int month, day;
    cin >> month; cin >> day;
    if (month == 1) {
        cout << "Before";
        return 0;
    } else if (month > 3){
        cout << "After";
        return 0;
    }

    if (day < 18) {
        cout << "Before";
        return 0;
    } else if (day > 18) {
        cout << "After";
        return 0;
    } else {
        cout << "Special";
    }

    return 0;
}