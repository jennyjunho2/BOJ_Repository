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

    int a, b, c; cin >> a >> b >> c;
    if (a+b == c) { cout << a << '+' << b << '=' << c; }
    else if (a*b == c) { cout << a << '*' << b << '=' << c; }
    else if (a-b == c) { cout << a << '-' << b << '=' << c; }
    else if (a/b == c) { cout << a << '/' << b << '=' << c; }
    else if (a == b+c) { cout << a << '=' << b << '+' << c; }
    else if (a == b-c) { cout << a << '=' << b << '-' << c; }
    else if (a == b*c) { cout << a << '=' << b << '*' << c; }
    else if (a == b/c) { cout << a << '=' << b << '/' << c; }

    return 0;
}