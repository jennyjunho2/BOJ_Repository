#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
using namespace std;

long long gcd(const long long& a, const long long& b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;
    
    long long numerator = a*d + b*c;
    long long denominator = b*d;

    long long gcd_num = gcd(max(numerator, denominator), min(numerator, denominator));
    cout << numerator / gcd_num  << ' ' << denominator / gcd_num;

    return 0;
}