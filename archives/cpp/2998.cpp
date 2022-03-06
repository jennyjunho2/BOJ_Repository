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

    string num; cin >> num;
    while (true) {
        if (num.length() % 3 == 0) {
            break;
        }

        num = '0' + num;
    }

    string num_octal = "";
    for (int i = num.length()-3; i >= 0; i -= 3) {
        num_octal += ((num[i]-'0')*4 + (num[i+1]-'0')*2 + (num[i+2]-'0')) + '0';
    }

    reverse(num_octal.begin(), num_octal.end());
    cout << num_octal;

    return 0;
}