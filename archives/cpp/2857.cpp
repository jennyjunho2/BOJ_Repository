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

    bool fbi = false;
    FOR(i, 1, 6){
        string word; cin >> word;
        if (word.find("FBI") != -1) {
            cout << i << ' ';
            fbi = true;
        }
    }
    if (!fbi) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}