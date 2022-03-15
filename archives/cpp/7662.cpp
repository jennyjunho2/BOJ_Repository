#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------

int main() {
    fastio

    int T; cin >> T;
    while (T--) {
        priority_queue<int> max_heap;
        priority_queue<int, vector<int>, greater<int>> min_heap;
        map<int, int> table;
        int k; cin >> k;
        while (k--) {
            char ch; int temp; cin >> ch >> temp;
            if (ch == 'I') {
                max_heap.push(temp);
                min_heap.push(temp);
                table[temp]++;
            } else if (ch == 'D') {
                if (temp == 1) {
                    
                    // max heap 정리
                    while (!max_heap.empty() && table[max_heap.top()] == 0) {
                        max_heap.pop();
                    }

                    // 최댓값 뽑아내기
                    if (!max_heap.empty()) {
                        int max_top = max_heap.top();
                        max_heap.pop();
                        table[max_top]--;
                    }
                
                } else if (temp == -1) {

                    // min heap 정리
                    while (!min_heap.empty() && table[min_heap.top()] == 0) {
                        min_heap.pop();
                    }

                    // 최솟값 뽑아내기
                    if (!min_heap.empty()) {
                        int min_top = min_heap.top();
                        min_heap.pop();
                        table[min_top]--;
                    }
                }
            }

            // max_heap 정리
            while (!max_heap.empty() && table[max_heap.top()] == 0) {
                max_heap.pop();
            }

            // min_heap 정리
            while (!min_heap.empty() && table[min_heap.top()] == 0) {
                min_heap.pop();
            }

        }

        if (!max_heap.empty()) {
            cout << max_heap.top() << ' ' << min_heap.top() << endl;
        } else {
            cout << "EMPTY" << endl;
        }
    }

    return 0;
}