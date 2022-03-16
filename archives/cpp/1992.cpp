#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int arr[64][64];
string ans = "";

void func(int y, int x, int length) {
    if (length == 1) {
        ans += char(arr[y][x] + '0');
        
        return;
    }

    int temp = arr[y][x];
    bool is_same = true;
    FOR(i, y, y+length) {
        FOR(j, x, x+length) {
            if (temp != arr[i][j]) {
                is_same = false;
                break;
            }
        }
        if (!is_same) { break; }
    }

    if (is_same) {
        ans += char(temp + '0');
        return;
    }

    ans += "(";
    FOR(i, 0, 2) {
        FOR(j, 0, 2) {
            func(y + (length/2)*i, x + (length/2)*j, length/2);
        }
    }
    ans += ")";
    return;
}

int main() {
    fastio

    int N; cin >> N;
    FOR(i, 0, N) {
        string word; cin >> word;
        FOR(j, 0, N) {
            arr[i][j] = (word[j] - '0');
        }
    }

    func(0, 0, N);
    cout << ans;

    return 0;
}