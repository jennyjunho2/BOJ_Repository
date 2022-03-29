#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
priority_queue<int> max_heap; // left
priority_queue<int, vector<int>, greater<int>> min_heap; // right

int main() {fastio

    cin >> N;
    int x; cin >> x;
    max_heap.push(x);
    N--;
    cout << max_heap.top() << endl;
    while (N--) {
        cin >> x;

        if (max_heap.size() > min_heap.size()) {
            min_heap.push(x);
        } else {
            max_heap.push(x);
        }

        int max_top = max_heap.top();
        int min_top = min_heap.top();
        if (max_top > min_top) {
            max_heap.pop();
            min_heap.pop();
            max_heap.push(min_top);
            min_heap.push(max_top);
        }
        cout << max_heap.top() << endl;
    }

    return 0;
}