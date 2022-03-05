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

    map<string, int> table = {
        {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
        {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
    };

    int mantissa = 0;
    string temp; cin >> temp;
    mantissa += table[temp] * 10;
    cin >> temp;
    mantissa += table[temp];
    cin >> temp;
    int exponent = table[temp];

    cout.fixed;
    cout << setprecision(11);
    cout << mantissa * pow(10, exponent);

    return 0;
}