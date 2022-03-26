#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N, d, k, c;
vector<int> chobab;

int main() { fastio

    int kind[3001] = {0, };
    cin >> N >> d >> k >> c;
    chobab.resize(N);
    FOR(i, 0, N) { 
        cin >> chobab[i];
    }

    int ptr1 = 0, ptr2 = k-1;
    kind[c]++;
    FOR(i, 0, k) {
        kind[chobab[i]]++;
    }

    int cnt = 0;
    FOR(i, 1, d+1) {
        if (kind[i] > 0) { cnt++; }
    }
    
    int max_kind = cnt;
    while(true) {
        ptr1++;
        ptr2 = (ptr2+1) % N;
        if (ptr1 == N) { break; }

        kind[chobab[ptr1-1]]--;
        if (kind[chobab[ptr1-1]] == 0) { cnt--; }
        kind[chobab[ptr2]]++;
        if (kind[chobab[ptr2]] == 1) { cnt++; }
        max_kind = max(max_kind, cnt);
    }
    
    cout << max_kind;

    return 0;
} 