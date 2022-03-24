#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int preorder[10001];

void postorder(int start, int end) {
    if (start >= end) { return; }

    if (start == end-1) {
        cout << preorder[start] << endl;
        return;
    }

    int idx = start+1;
    while (idx < end) {
        if (preorder[start] < preorder[idx]) { break; }

        idx++;
    }

    postorder(start+1, idx);
    postorder(idx, end);
    cout << preorder[start] << endl;
}

int main() { fastio

    int temp;
    int temp_idx = 0;
    while (cin >> temp) {
        preorder[temp_idx++] = temp;
    }

    postorder(0, temp_idx);

    return 0;
}  