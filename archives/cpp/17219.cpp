#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC optimize("Ofast")
using namespace std;

map<string, string> password;

int main() {
    fastio

    int N, M; cin >> N >> M;
    FOR(i, 0, N) {
        string site, pass; cin >> site >> pass;
        password[site] = pass;
    }

    FOR(i, 0, M) {
        string site; cin >> site;
        cout << password[site] << endl;
    }
    
    return 0;
}