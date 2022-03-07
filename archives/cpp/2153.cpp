#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

#define MAX 52*20+1
bool sieve[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(sieve, true, sizeof(sieve));
    sieve[0] = false; sieve[1] = true;
    FOR(i, 2, int(sqrt(MAX)) + 1) {
        if (sieve[i]) {
            for (int j = i*i; j <= MAX; j += i) {
                sieve[j] = false;
            }
        }
    }

    string word; cin >> word;
    int num = 0;
    for (char ch: word) {
        if (ch >= 'a' && ch <= 'z') {
            num += (ch - 'a' + 1);
        } else {
            num += (ch - 'A' + 27);
        }
    }

    if (sieve[num]) {
        cout << "It is a prime word.";
    } else {
        cout << "It is not a prime word.";
    }
    
    return 0;
}