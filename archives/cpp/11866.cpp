#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INF 9876543201;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    deque<int> deq(N);
    FOR(i, 0, N){
        deq[i] = i+1;
    }
    cout << '<';
    while (deq.size() != 1) {
        FOR(i, 0, K-1) {
            int temp = deq.front();
            deq.pop_front();
            deq.push_back(temp);
        }
        cout << deq.front() << ", ";
        deq.pop_front();
    }

    cout << deq[0] << '>';

    return 0;
}