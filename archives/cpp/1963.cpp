#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
using p = pair<int, int>;
int A, B;
bool is_prime[10000];
bool visited[10000];
void sieve(){
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = false; is_prime[1] = false;
    FOR(i, 2, sqrt(10001)+1) {
        if (is_prime[i]) {
            for (int j = i*i; j < 10000; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {fastio

    sieve();

    TC {
        memset(visited, false, sizeof(visited));
        cin >> A >> B;
        queue<p> q;

        q.push({A, 0});
        visited[A] = true;

        bool flag = false;
        while(!q.empty()) {
            int pos = q.front().first;
            int cnt = q.front().second;
            q.pop();

            if (pos == B) {
                flag = true;
                cout << cnt << endl;
                break;
            }

            FOR(i, 0, 4) {
                FOR(j, 0, 10) {
                    string temp = to_string(pos);
                    temp[i] = char(j + '0');
                    int npos = stoi(temp);

                    if (npos < 1000 || npos >= 10000 || visited[npos]) { continue; }

                    if (is_prime[npos]) {
                        visited[npos] = true;
                        q.push({npos, cnt + 1});
                    } 
                }
            }
        }

        if (!flag) {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}