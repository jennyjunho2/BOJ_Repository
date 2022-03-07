#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

vector<int> A;
vector<int> B;
vector<int> finds;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A_len, B_len; cin >> A_len >> B_len;
    FOR(i, 0, A_len) {
        int temp; cin >> temp;
        A.push_back(temp);
    }
    FOR(i, 0, B_len) {
        int temp; cin >> temp;
        B.push_back(temp);
    }

    sort(B.begin(), B.end());
    FOR(i, 0, A_len) {
        if (!binary_search(B.begin(), B.end(), A[i])) {
            finds.push_back(A[i]);
        }
    }
    
    sort(finds.begin(), finds.end());
    int finds_size = finds.size();
    cout << finds_size << endl;
    FOR(i, 0, finds_size) { cout << finds[i] << ' ';}
    
    return 0;
}