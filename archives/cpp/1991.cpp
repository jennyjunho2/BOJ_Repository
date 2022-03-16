#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
struct node{
    char left, right;
};

vector<node> node_arr;

void preorder(char node) {
    if (node == '.') { return; }

    cout << node;
    preorder(node_arr[node].left);
    preorder(node_arr[node].right);
}

void inorder(char node) {
    if (node == '.') { return; }

    inorder(node_arr[node].left);
    cout << node;
    inorder(node_arr[node].right);
}

void postorder(char node) {
    if (node == '.') { return; }

    postorder(node_arr[node].left);
    postorder(node_arr[node].right);
    cout << node;
}

int main() {
    fastio

    int N; cin >> N;
    node_arr.resize(N);
    FOR(i, 0, N) {
        char temp_root, left_root, right_root;
        cin >> temp_root >> left_root >> right_root;

        node_arr[temp_root].left = left_root;
        node_arr[temp_root].right = right_root;
    }

    preorder('A'); cout << endl;
    inorder('A'); cout << endl;
    postorder('A');

    return 0;
}