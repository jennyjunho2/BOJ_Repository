#include <bits/stdc++.h>
#define TC(_T) int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int idx[100001];
int inorder[100001];
int postorder[100001];

void preorder(int in_start, int in_end, int post_start, int post_end) {
    if (in_start > in_end || post_start > post_end) {
        return;
    }

    int rootIdx = idx[postorder[post_end]];
    cout << inorder[rootIdx] << ' ';

    int left = rootIdx - in_start;
    int right = in_end - rootIdx;

    preorder(in_start, rootIdx - 1, post_start, post_start + left - 1);
    preorder(rootIdx + 1, in_end, post_start + left, post_end - 1);
}

int main() { fastio

    int n; cin >> n;
    FOR(i, 1, n+1) {
        cin >> inorder[i];
        idx[inorder[i]] = i;
    }

    FOR(i, 1, n+1) {
        cin >> postorder[i];
    }

    preorder(1, n, 1, n);

    return 0;
}  