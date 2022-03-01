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

    int arr[26] = {0, };
    int arr2[26] = {0, };

    string a, b; cin >> a; cin >> b;
    for (char i: a) {
        arr[i - 'a']++;
    }
    for (char j: b) {
        arr2[j - 'a']++;
    }

    int cnt = 0;
    FOR(i, 0, 26){
        cnt += abs(arr[i] - arr2[i]);
    }
    cout << cnt;

    return 0;
}