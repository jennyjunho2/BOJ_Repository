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

    int a, b, c; cin >> a; cin >> b; cin >> c;
    if (a == 60 && b == 60 && c == 60) {
        cout << "Equilateral";
    } else if (a+b+c != 180) {
        cout << "Error";
    } else if (a==b || b==c || a==c) {
        cout << "Isosceles";
    } else {
        cout << "Scalene";
    }

    return 0;
}